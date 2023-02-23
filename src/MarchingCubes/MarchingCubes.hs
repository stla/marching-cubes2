{-# LANGUAGE ForeignFunctionInterface #-}
{-# LANGUAGE FlexibleContexts         #-}
module MarchingCubes.MarchingCubes
  ( Voxel
  , XYZ
  , marchingCubes
  , makeVoxel
  ) where
import           Control.Monad                 ((=<<), when)
import           Data.List                     (transpose)
import           Foreign.C.Types
import           Foreign.Marshal.Alloc         (free, mallocBytes)
import           Foreign.Marshal.Array         (peekArray, pokeArray)
import           Foreign.Ptr                   (Ptr)
import           Foreign.Storable              (peek, sizeOf)
import           Data.Matrix                    ( Matrix(ncols)
                                                , mapCol
                                                , fromLists     )

type Bounds a = ((a, a), (a, a), (a, a))
type Dims = (Int, Int, Int)
type Voxel a = ([a], (Bounds a, Dims))
type XYZ a = (a, a, a)

-- | Make the voxel. 
makeVoxel
  :: RealFloat a
  => (XYZ a -> a) -- ^ the function defining the isosurface
  -> Bounds a     -- ^ bounds of the grid
  -> Dims         -- ^ numbers of subdivisions of the grid
  -> Voxel a
makeVoxel fun bds@((xm, xM), (ym, yM), (zm, zM)) dims@(nx, ny, nz) =
  (values, (bds, dims))
  where
    x_ = [ xm + (xM - xm) * fracx i | i <- [0 .. nx - 1] ]
    fracx p = realToFrac p / (realToFrac nx - 1)
    y_ = [ ym + (yM - ym) * fracy i | i <- [0 .. ny - 1] ]
    fracy p = realToFrac p / (realToFrac ny - 1)
    z_ = [ zm + (zM - zm) * fracz i | i <- [0 .. nz - 1] ]
    fracz p = realToFrac p / (realToFrac nz - 1)
    values = [ fun (x, y, z) | x <- x_, y <- y_, z <- z_ ]

voxelMax :: RealFloat a => Voxel a -> a
voxelMax (values, _) = maximum (filter (not . isNaN) values)

rescale :: Fractional a => (a, a) -> Int -> a -> a
rescale (minmm, maxmm) n w = minmm + (maxmm - minmm) * w / fromIntegral (n - 1)

rescaleMatrix :: Fractional a => Matrix a -> Bounds a -> Dims -> Matrix a
rescaleMatrix mtrx (xbds, ybds, zbds) (nx, ny, nz) = mtrx'''
 where
  mtrx'   = mapCol (\_ w -> rescale xbds nx (w - 1)) 1 mtrx
  mtrx''  = mapCol (\_ w -> rescale ybds ny (w - 1)) 2 mtrx'
  mtrx''' = mapCol (\_ w -> rescale zbds nz (w - 1)) 3 mtrx''

foreign import ccall unsafe "computeContour3d" c_computeContour3d
    :: Ptr CDouble
    -> CUInt
    -> CUInt
    -> CUInt
    -> CDouble
    -> CDouble
    -> Ptr CSize
    -> IO (Ptr (Ptr CDouble))

computeContour3d :: 
  Voxel Double -> Double -> IO (Ptr (Ptr CDouble), Int)
computeContour3d voxel level = do 
  let voxmax = voxelMax voxel
      (nx, ny, nz) = snd $ snd voxel 
      voxel' = map realToFrac (fst voxel)
  putStrLn "Allocating voxel"
  voxelPtr <- mallocBytes (nx*ny*nz * sizeOf (undefined :: CDouble))
  putStrLn "Poking voxel"
  pokeArray voxelPtr voxel'
  nrowsPtr <- mallocBytes (sizeOf (undefined :: CSize))
  putStrLn "Run MC"
  result <- c_computeContour3d voxelPtr
            (fromIntegral nx) (fromIntegral ny) (fromIntegral nz)
            (realToFrac voxmax) (realToFrac level) nrowsPtr
  nrows <- peek nrowsPtr
  free nrowsPtr
  free voxelPtr
  return (result, fromIntegral nrows)

marchingCubes :: Voxel Double -> Double -> Bool -> IO (Matrix Double)
marchingCubes voxel level summary = do
  let (bds, dims) = snd voxel
  (ppCDouble, nrows) <- computeContour3d voxel level
  points <- mapM (peekArray 3) =<< peekArray nrows ppCDouble
  when summary $ do
    let tpoints = transpose (map (map realToFrac) points)
        xm = minimum (tpoints !! 0)
        xM = maximum (tpoints !! 0)
        ym = minimum (tpoints !! 1)
        yM = maximum (tpoints !! 1)
        zm = minimum (tpoints !! 2)
        zM = maximum (tpoints !! 2)
    putStrLn "Prebounds:"
    print ((xm,ym,zm),(xM,yM,zM))
  return $ rescaleMatrix (fromLists (map (map realToFrac) points)) bds dims


