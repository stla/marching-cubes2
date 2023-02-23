#ifndef __HEADER__
#define __HEADER__
#include "marchingCubes.h"
#endif

unsigned* FacesNo7(int* faces, size_t* p1, double* values, size_t l, unsigned j){
    unsigned* index = malloc(l * sizeof(unsigned));
    for(size_t i=0; i<l; i++){
      unsigned f = abs(faces[i])-1;
      unsigned e1 = FacePoints[f][1];
      unsigned e2 = FacePoints[f][2];
      unsigned e3 = FacePoints[f][3];
      unsigned e4 = FacePoints[f][4];
      size_t p = p1[i]-2;
      double A = values[p+e1];
      double B = values[p+e2];
      double C = values[p+e3];
      double D = values[p+e4];
      int temp = faces[i]>0 ? 1 : -1;
      temp *= (A*B-C*D>0 ? 1 : -1);
      index[i] = temp == 1 ? upow(2,j-1) : 0;
    }
    return(index);
}

unsigned* Faces7(int* faces, size_t* p1, double* values, size_t l, unsigned j){
  unsigned* index = malloc(l * sizeof(unsigned));
  for(size_t i=0; i<l; i++){
    size_t p = p1[i] - 1;
    double A0 = values[p];
    double B0 = values[p+3];
    double C0 = values[p+2];
    double D0 = values[p+1];
    double A1 = values[p+4];
    double B1 = values[p+7];
    double C1 = values[p+6];
    double D1 = values[p+5];
    double a = (A1 - A0) * (C1 - C0) - (B1 - B0) * (D1 - D0);
    double b = C0 * (A1 - A0) + A0 * (C1 - C0) - D0 * (B1 - B0) - B0 * (D1 - D0);
    double c = A0 * C0 - B0 * D0;
    double tmax = -b/(2 * a);
    double maximum = a * tmax*tmax + b * tmax + c;
    maximum = isnan(maximum) ? -1 : maximum;
    //printf("maximum: %f\n", maximum);
    unsigned cond1 = a<0 ? 1 : 0;
    unsigned cond2 = tmax>0 ? 1 : 0;
    unsigned cond3 = tmax<1 ? 1 : 0;
    unsigned cond4 = maximum>0 ? 1 : 0;
    unsigned totalcond = cond1*cond2*cond3*cond4;
    int temp = faces[i]>0 ? 1 : -1;
    temp *= (totalcond == 1 ? 1 : -1);
    index[i] = temp == 1 ? upow(2,j-1) : 0;
  }
  return index;
}

size_t** faceType(double** M, unsigned m, unsigned n, double level, double max){
    size_t** L = levelMatrix(M, m, n, level, level<max);
    size_t** minorMat = minorMatrix(L,m,n,m-1,n-1);
    size_t** sminorMat2 = scaleMinorMatrix(2,L,m,n,0,n-1);
    size_t** sminorMat4 = scaleMinorMatrix(4,L,m,n,0,0);
    size_t** sminorMat8 = scaleMinorMatrix(8,L,m,n,m-1,0);
    size_t** sum1 = matricialSum(minorMat, sminorMat2, m-1, n-1);
    size_t** sum2 = matricialSum(sminorMat4, sminorMat8, m-1, n-1);
    size_t** out = matricialSum(sum1, sum2, m-1, n-1);
    freeMatrix_s(L,m);
    freeMatrix_s(sminorMat2,m-1);
    freeMatrix_s(sminorMat4,m-1);
    freeMatrix_s(sminorMat8,m-1);
    freeMatrix_s(sum1,m-1);
    freeMatrix_s(sum2,m-1);
    return out;
}

unsigned** levCells(double*** A, unsigned nx, unsigned ny, unsigned nz,
                    double level, double max, size_t* outnrow){
    unsigned** cells = malloc((nz-1) * sizeof(unsigned*));
    unsigned** types = malloc((nz-1) * sizeof(unsigned*));
    size_t** bottomTypes = faceType(toMatrix(A, nx, ny, 0), nx, ny, level, max);
    size_t totallength = 0;
    unsigned lengths[nz-1];
    for(unsigned k=0; k<nz-1; k++){
        size_t** topTypes = faceType(toMatrix(A, nx, ny, k+1), nx, ny, level, max);
        size_t** cellTypes =
            matricialSum(bottomTypes, scaleMatrix(16, topTypes, nx-1, ny-1), nx-1, ny-1);
        unsigned length;
        unsigned** goodcells01 = whichIndicesAndItems(cellTypes, nx-1, ny-1, &length);
        cells[k] = malloc(length * sizeof(unsigned));
        types[k] = malloc(length * sizeof(unsigned));
        for(unsigned l=0; l<length; l++){
            cells[k][l] = goodcells01[0][l] + (nx-1)*(ny-1)*k + 1;
            types[k][l] = goodcells01[1][l];
        }
        bottomTypes = topTypes;
        lengths[k] = length;
        totallength += (size_t) length;
        freeMatrix_s(cellTypes, nx-1);
        freeMatrix_u(goodcells01, 2);
    }
    unsigned** out = malloc(4 * sizeof(unsigned*));
    out[0] = malloc(totallength * sizeof(unsigned));
    out[1] = malloc(totallength * sizeof(unsigned));
    out[2] = malloc(totallength * sizeof(unsigned));
    out[3] = malloc(totallength * sizeof(unsigned));
    size_t count=0;
    for(unsigned k=0; k<nz-1; k++){
        for(unsigned l=0; l<lengths[k]; l++){
            unsigned c = cells[k][l]-1;
            out[0][count] = c % (nx-1) + 1;
            out[1][count] = (c / (nx-1)) % (ny-1) + 1;
            out[2][count] = c / ((nx-1) * (ny-1)) + 1;
            out[3][count] = types[k][l];
            count++;
        }
    }
    freeMatrix_u(cells, nz-1);
    freeMatrix_u(types, nz-1);
    *outnrow = totallength;
    return out;
}

size_t** GetBasic1(unsigned* R, size_t nR, size_t** vivjvk){
  size_t** indexPtr = malloc(8 * sizeof(size_t*));
  for(unsigned i=0; i<8; i++){
      indexPtr[i] = malloc(3 * sizeof(size_t));
      for(unsigned j=0; j<3; j++){
          indexPtr[i][j] = indexArray[i][j];
      }
  }
  size_t** cube1 = malloc(nR * sizeof(size_t*));
  for(size_t i=0; i<nR; i++){
      cube1[i] = malloc(3 * sizeof(size_t));
      size_t* vivjvkRi = vivjvk[R[i]];
      for(unsigned j=0; j<3; j++){
          cube1[i][j] = vivjvkRi[j];
      }
  }
  size_t** k1 = kro1(indexPtr, 8, 3, nR);
  size_t** k2 = kro2(cube1, nR, 3, 8);
  size_t** cubeco = matricialSum(k1, k2, 8*nR+1, 3);
  freeMatrix_s(indexPtr,8);
  freeMatrix_s(cube1,nR);
  freeMatrix_s(k1,8*nR+1);
  freeMatrix_s(k2,8*nR+1);
  return cubeco;
}

double* GetBasic2prime(double*** A, double level, size_t** cubeco, size_t nR){
    double* values = malloc((8*nR+1)*sizeof(double));
    for(size_t i=0; i<8*nR; i++){
        values[i] = A[cubeco[i][0]-1][cubeco[i][1]-1][cubeco[i][2]-1] - level;
    }
    values[8*nR] = 0;
    return values;
}

unsigned* get_tcase(unsigned* types, size_t nrow){
    unsigned CRF[256] =
    {1, 2, 2, 3, 2, 4, 3, 6, 2, 3, 4, 6, 3, 6, 6, 9, 2, 3, 4, 6,
     5, 7, 7, 12, 4, 6, 8, 10, 7, 15, 13, 6, 2, 4, 3, 6, 4, 8, 6,
     10, 5, 7, 7, 15, 7, 13, 12, 6, 3, 6, 6, 9, 7, 13, 15, 6, 7, 12,
     13, 6, 11, 7, 7, 3, 2, 5, 4, 7, 3, 7, 6, 15, 4, 7, 8, 13, 6,
     12, 10, 6, 4, 7, 8, 13, 7, 11, 13, 7, 8, 13, 14, 8, 13, 7, 8,
     4, 3, 7, 6, 12, 6, 13, 9, 6, 7, 11, 13, 7, 15, 7, 6, 3, 6, 15,
     10, 6, 12, 7, 6, 3, 13, 7, 8, 4, 7, 5, 4, 2, 2, 4, 5, 7, 4, 8,
     7, 13, 3, 6, 7, 12, 6, 10, 15, 6, 3, 6, 7, 15, 7, 13, 11, 7,
     6, 9, 13, 6, 12, 6, 7, 3, 4, 8, 7, 13, 8, 14, 13, 8, 7, 13, 11,
     7, 13, 8, 7, 4, 6, 10, 12, 6, 13, 8, 7, 4, 15, 6, 7, 3, 7, 4,
     5, 2, 3, 7, 7, 11, 6, 13, 12, 7, 6, 15, 13, 7, 9, 6, 6, 3, 6,
     12, 13, 7, 15, 7, 7, 5, 10, 6, 8, 4, 6, 3, 4, 2, 6, 13, 15, 7,
     10, 8, 6, 4, 12, 7, 7, 5, 6, 4, 3, 2, 9, 6, 6, 3, 6, 4, 3, 2,
     6, 3, 4, 2, 3, 2, 2, 1};
    unsigned* out = malloc(nrow * sizeof(unsigned));
    for(size_t i=0; i<nrow; i++){
        out[i] = CRF[types[i]]-1;
    }
    return out;
}

unsigned* getR(unsigned* tcase, size_t nrow, size_t* nR){
    unsigned* out = malloc(nrow * sizeof(unsigned));
    size_t count=0;
    for(size_t i=0; i<nrow; i++){
        unsigned tc = tcase[i];
        if(tc==1 || tc==2 || tc==5 || tc==8 || tc==9 || tc==11 || tc==14){
            out[count] = (unsigned) i;
            count++;
        }
    }
    *nR = count;
    return(out);
}

double** LambdaMu(double* x1, size_t n){
    double** lambdamu = malloc(2 * sizeof(double*));
    lambdamu[0] = malloc(n * sizeof(double));
    lambdamu[1] = malloc(n * sizeof(double));
    for(size_t i=0; i<n; i++){
        lambdamu[0][i] = floor(x1[i]/9);
        lambdamu[1][i] = 1 - lambdamu[0][i];
    }
    return lambdamu;
}

double* average(double** lambdamu, double* w1, double* w2, size_t n){
    double* lambda = lambdamu[0]; double* mu = lambdamu[1];
    double* out = malloc(n * sizeof(double));
    for(size_t i=0; i<n; i++){
        out[i] =  mu[i]*w1[i] + lambda[i]*w2[i];
    }
    return out;
}

double* average7(double** lambdamu, double* w, size_t n){
    double* lambda = lambdamu[0]; double* mu = lambdamu[1];
    double* out = malloc(n * sizeof(double));
    for(size_t i=0; i<n; i++){
        out[i] =  mu[i]*w[i] + lambda[i];
    }
    return out;
}

double* average8(double** lambdamu, double* w, size_t n){
    double* lambda = lambdamu[0]; double* mu = lambdamu[1];
    double* out = malloc(n * sizeof(double));
    for(size_t i=0; i<n; i++){
        out[i] =  mu[i]*w[i] - lambda[i];
    }
    return out;
}

double** GetPoints(size_t** cubeco, double* values, size_t* p1, unsigned* x1,
                   unsigned* x2, size_t n){
    unsigned* p1x1 = malloc(n * sizeof(unsigned));
    unsigned* p1x2 = malloc(n * sizeof(unsigned));
    double* xx1 = malloc(n * sizeof(double));
    for(size_t i=0; i<n; i++){
        p1x1[i] = p1[i] + x1[i]; p1x2[i] = p1[i] + x2[i];
        xx1[i] = (double) x1[i];
    }
    double** lambdamu = LambdaMu(xx1, n);
    double* v1 = malloc(n * sizeof(double));
    double* v2 = malloc(n * sizeof(double));
    double* v3 = malloc(n * sizeof(double));
    double* v4 = malloc(n * sizeof(double));
    double* v5 = malloc(n * sizeof(double));
    double* v6 = malloc(n * sizeof(double));
    double* v7 = malloc(n * sizeof(double));
    double* v8 = malloc(n * sizeof(double));
    double* w1 = malloc(n * sizeof(double));
    double* w2 = malloc(n * sizeof(double));
    double* w3 = malloc(n * sizeof(double));
    double* w4 = malloc(n * sizeof(double));
    double* w5 = malloc(n * sizeof(double));
    double* w6 = malloc(n * sizeof(double));
    for(size_t i=0; i<n; i++){
        v1[i] = (double) cubeco[p1x1[i]-2][0];
        w1[i] = (double) cubeco[p1[i]-1][0];
        v2[i] = (double) cubeco[p1x2[i]-2][0];
        w2[i] = (double) cubeco[p1[i]][0];
        v3[i] = (double) cubeco[p1x1[i]-2][1];
        w3[i] = (double) cubeco[p1[i]][1];
        v4[i] = (double) cubeco[p1x2[i]-2][1];
        w4[i] = (double) cubeco[p1[i]+1][1];
        v5[i] = (double) cubeco[p1x1[i]-2][2];
        w5[i] = (double) cubeco[p1[i]][2];
        v6[i] = (double) cubeco[p1x2[i]-2][2];
        w6[i] = (double) cubeco[p1[i]+4][2];
        v7[i] = values[p1x1[i]-2];
        v8[i] = values[p1x2[i]-2];
    }
    free(p1x1);
    free(p1x2);
    double** out = malloc(8 * sizeof(double*));
    out[0] = average(lambdamu, v1, w1, n);
    free(v1); free(w1);
    out[1] = average(lambdamu, v2, w2, n);
    free(v2); free(w2);
    out[2] = average(lambdamu, v3, w3, n);
    free(v3); free(w3);
    out[3] = average(lambdamu, v4, w4, n);
    free(v4); free(w4);
    out[4] = average(lambdamu, v5, w5, n);
    free(v5); free(w5);
    out[5] = average(lambdamu, v6, w6, n);
    free(v6); free(w6);
    out[6] = average7(lambdamu, v7, n);
    free(v7);
    out[7] = average8(lambdamu, v8, n);
    free(v8);
    freeMatrix_d(lambdamu,2);
    free(xx1);
    return(out);
}

double** CalPoints(double** points, size_t n){
    double* x1 = points[0];
    double* x2 = points[1];
    double* y1 = points[2];
    double* y2 = points[3];
    double* z1 = points[4];
    double* z2 = points[5];
    double* v1 = points[6];
    double* v2 = points[7];
    double* x = malloc(n * sizeof(double));
    double* y = malloc(n * sizeof(double));
    double* z = malloc(n * sizeof(double));
    for(size_t i=0; i<n; i++){
        double s = v1[i]/(v1[i]-v2[i]);
        x[i] = x1[i] + s*(x2[i]-x1[i]);
        y[i] = y1[i] + s*(y2[i]-y1[i]);
        z[i] = z1[i] + s*(z2[i]-z1[i]);
    }
    double** out = malloc(3 * sizeof(double*));
    out[0] = x; out[1] = y; out[2] = z;
    double** tout = transpose(out, 3, n);
    freeMatrix_d(out,3);
    // free(x);free(y);free(z); fait planter
    return(tout);
}

double** computeContour3d(
    double* voxelAsVector,
    unsigned nx, unsigned ny, unsigned nz,
    double max,
    double level,
    size_t* ntriangles)
{
    printf("Start marching cubes algorithm\n");
    double*** voxel = vector2array(voxelAsVector, nx, ny, nz);
    size_t nrow;
    unsigned** ijkt = levCells(voxel, nx, ny, nz, level, max, &nrow);
    unsigned* tcase = get_tcase(ijkt[3], nrow);
    size_t nR;
    unsigned* R = getR(tcase, nrow, &nR);
    if(nR == 0){
        *ntriangles = 0;
        free(R);
        free(tcase);
        freeMatrix_u(ijkt,4);
        return 0;
    }else{
        size_t** vivjvk = malloc(nrow * sizeof(size_t*));
        for(size_t i=0; i<nrow; i++){
            vivjvk[i] = malloc(3 * sizeof(size_t));
            for(unsigned j=0; j<3; j++){
                vivjvk[i][j] = (size_t) ijkt[j][i];
            }
        }
        size_t** cubeco = GetBasic1(R, nR, vivjvk);
        double* values = GetBasic2prime(voxel, level, cubeco, nR);
        size_t* p1 = malloc(nR * sizeof(size_t));
        for(size_t i=0; i<nR; i++){
            p1[i] = i*8 + 1;
        }
        unsigned* vt = ijkt[3];
        unsigned* cases = malloc(nR * sizeof(unsigned));
        for(size_t i=0; i<nR; i++){
            cases[i] = vt[R[i]]-1;
        }
        free(R);
        unsigned* edgeslengths = malloc(nR * sizeof(unsigned));
        size_t totalLength = 0;
        for(size_t i=0; i<nR; i++){
            edgeslengths[i] = edgesLengths[cases[i]];
            totalLength += (size_t) edgeslengths[i];
        }
        *ntriangles = totalLength;
        size_t* p1rep = replicate(p1, edgeslengths, nR);
        size_t* edges = malloc(totalLength * sizeof(size_t));
        size_t edgeiter = 0;
        for(size_t i=0; i<nR; i++){
            for(unsigned j=0; j<edgeslengths[i]; j++){
                edges[edgeiter] = (size_t) (*Edges[cases[i]])[j];
                edgeiter++;
            }
        }
        free(edgeslengths);
        unsigned* x1 = malloc(totalLength * sizeof(unsigned));
        unsigned* x2 = malloc(totalLength * sizeof(unsigned));
        for(size_t i=0; i<totalLength; i++){
            unsigned* EPi = EdgePoints[edges[i]-1];
            x1[i] = EPi[1];
            x2[i] = EPi[2];
        }
        free(edges);
        double** points = GetPoints(cubeco, values, p1rep, x1, x2, totalLength);
        double** triangles = CalPoints(points, totalLength);

        unsigned special=0;
        for(size_t i=0; i<nrow; i++){
            unsigned tc = tcase[i];
            if(tc==3 || tc==4 || tc==6 || tc==7 || tc==10 || tc==12 || tc==13){
              special = tc;
              break;
            }
        }
        if(special){
          printf("there are special cases\n");
        }

        for(short c=0; c<7; c++){
          printf("c: %hi\n", c);
          unsigned nR3;
          unsigned* R3 = whichEqual(tcase, special_name[c], nrow, &nR3);
          printf("nR3: %u\n", nR3);
          if(nR3 > 0){ // crash si nR3=2
            size_t** cubeco3 = GetBasic1(R3, nR3, vivjvk);
            double* values3 = GetBasic2prime(voxel, level, cubeco3, nR3);
            size_t* p13 = malloc(nR3 * sizeof(size_t));
            for(size_t i=0; i<nR3; i++){
                p13[i] = i*8 + 1;
            }
            unsigned* cases3 = malloc(nR3 * sizeof(unsigned));
            for(size_t i=0; i<nR3; i++){
                cases3[i] = vt[R3[i]]-1;
            }
            free(R3);
            unsigned nedge = special_nedge[c];
            unsigned outlength3; // = nR3 ?
            unsigned* index3;
            int* faces3 = unlist(Faces, FacesSizes, cases3, nR3, &outlength3);
            printf("outlength3: %u\n", outlength3); // yes, outlength3 = nR3 ! ? check
            if(c == 0){
              index3 = FacesNo7(faces3, p13, values3, nR3, 1);
            }else if(c == 1){
              index3 = Faces7(faces3, p13, values3, nR3, 1);
            }else{
              unsigned nface = special_nface[c];
              int* facelast = jthColumn(faces3, outlength3, nface, nface-1);
              index3 = Faces7(facelast, p13, values3, nR3, nface);
              free(facelast);
              for(unsigned j=0; j<nface-1; j++){
                int* facej = jthColumn(faces3, outlength3, nface, j);
                unsigned* temp = FacesNo7(facej, p13, values3, nR3, j+1);
                index3 = vectorialSum(index3, temp, nR3);
                free(facej);
                free(temp);
              }
            }
            free(faces3);
            unsigned* unlisted_edges3 = unlist_u(Edges2, Edges2Sizes, cases3, nR3, &outlength3);
            free(cases3);
            printf("outlength3 bis: %u\n", outlength3); // outlength3 = nedge * nR3
            printf("nedge: %u\n", nedge);
            unsigned** edges3 = vector2matrix(unlisted_edges3, outlength3, nedge);
            free(unlisted_edges3);
            unsigned** edgesp1index = cbind(edges3, p13, index3, nR3, nedge);
            freeMatrix_u(edges3, nR3);
            free(p13);
            unsigned ind3Size = special_indSizes[c];
            unsigned ind3[ind3Size];
            for(unsigned i=0; i<ind3Size; i++){
              ind3[i] = (*special_ind[c])[i];
            }
            for(unsigned j=0; j<ind3Size; j++){
              unsigned lwrows;
              unsigned* wrows = whichEqual(index3, ind3[j], nR3, &lwrows);
              if(lwrows>0){
                unsigned lwcols = *(*(special_posSize)[c])[j] + 1;
                unsigned* wcols = malloc(lwcols * sizeof(unsigned));
                wcols[0] = nedge;
                for(unsigned k=1; k<lwcols; k++){
                  wcols[k] = (*(*special_pos[c])[j])[k-1] - 1;
                }
                unsigned** ed = subsetMatrix(edgesp1index, wrows, wcols, lwrows, lwcols);
                free(wrows);
                free(wcols);
                size_t* col0ed = malloc(lwrows * sizeof(size_t));
                for(unsigned i=0; i<lwrows; i++){
                  col0ed[i] = (size_t) ed[i][0];
                }
                size_t* col0edrep = repeach(col0ed, lwcols-1, lwrows);
                free(col0ed);
                unsigned* edge1 = matrix2vectorMinusFirstColumn(ed, lwrows, lwcols);
                freeMatrix_u(ed, lwrows);
                unsigned totalLength3 = lwrows*(lwcols-1);
                unsigned* xx1 = malloc(totalLength3 * sizeof(unsigned));
                unsigned* xx2 = malloc(totalLength3 * sizeof(unsigned));
                for(unsigned i=0; i<totalLength3; i++){
                    unsigned* EPi = EdgePoints[edge1[i]-1];
                    xx1[i] = EPi[1]; xx2[i] = EPi[2];
                }
                free(edge1);
                double** points3 = GetPoints(cubeco3, values3, col0edrep, xx1,
                                   xx2, (size_t) totalLength3);
                double** triangles3 = CalPoints(points3, totalLength3);
                free(xx1); free(xx2);
                free(col0edrep);
                free(points3);
                triangles = realloc(triangles,
                               (*ntriangles + totalLength3)*sizeof(*triangles));
                if(triangles==NULL){
            			printf("Error reallocating memory!");
            			freeMatrix_d(triangles, totalLength3);
                  // free les free de la fin ?
            			exit(1);
            		}
                for(size_t i = *ntriangles; i < *ntriangles + totalLength3; i++){
                  triangles[i] = malloc(3 * sizeof(double));
                  for(short j=0; j<3; j++){
                    triangles[i][j] = triangles3[i - *ntriangles][j];
                  }
                  //*(triangles[i]) = *(triangles3[i - *ntriangles]);
                }
                *ntriangles += totalLength3;
                freeMatrix_d(triangles3, totalLength3);
              }
            } /* end loop for(unsigned j=0; j<ind3Size; j++) */
            free(values3);
          } /* end if(nR3>0) */
      } /* end for(short i=0; i<7; i++) (loop over special_name) */

      freeMatrix_s(vivjvk,3);
      freeMatrix_u(ijkt,4);   // ""
      freeMatrix_d(points,8); // peut mettre avant la boucle sur special_name - non, Pretzel plante
      free(x1); free(x2);     // ""
      freeMatrix_s(cubeco,3); // ""
      free(values);           // ""
      free(tcase);
      freeArray(voxel, nx, ny);
      return triangles;
    }
}
