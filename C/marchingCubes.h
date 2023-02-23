#include <stdlib.h> // for malloc
#include <stdio.h> // for printf
#include <math.h>   // for floor and isnan - compile with flag -lm


void displayMatrix_u(unsigned**, unsigned, unsigned);

void displayMatrix(double**, unsigned, unsigned);

extern int CaseRotationFlip[256][3];

extern size_t indexArray[8][3];

extern unsigned edgesLengths[254];

extern unsigned EdgePoints[13][3];

extern unsigned (*Edges[])[];

void freeMatrix_u(unsigned**, unsigned);

void freeMatrix_s(size_t**, size_t);

void freeMatrix_d(double**, unsigned);

unsigned** copyMatrix(unsigned**, unsigned, unsigned);

size_t** minorMatrix(size_t**, unsigned, unsigned, unsigned, unsigned);

size_t** scaleMatrix(size_t, size_t**, unsigned, unsigned);

size_t** scaleMinorMatrix(size_t, size_t**, unsigned, unsigned, unsigned, unsigned);

size_t** matricialSum(size_t**, size_t**, size_t, unsigned);

size_t** levelMatrix(double**, unsigned, unsigned, double, unsigned);

double** toMatrix(double***, unsigned, unsigned, unsigned);

unsigned** whichIndicesAndItems(size_t**, unsigned, unsigned, unsigned*);

void freeArray(double***, unsigned, unsigned);

size_t** kro1(size_t**, unsigned, unsigned, size_t);

size_t** kro2(size_t**, size_t, unsigned, unsigned);

size_t* replicate(size_t*, unsigned*, size_t);

double*** vector2array(double*, unsigned, unsigned, unsigned);

size_t** faceType(double**, unsigned, unsigned, double, double);

unsigned** levCells(double***, unsigned, unsigned, unsigned, double, double, size_t*);

size_t** GetBasic1(unsigned*, size_t, size_t**);

double* GetBasic2(double***, double, unsigned*, size_t, size_t**);

unsigned* get_tcase(unsigned*, size_t);

unsigned* getR(unsigned*, size_t, size_t*);

double** LambdaMu(double*, size_t);

double* average(double**, double*, double*, size_t);

double* average7(double**, double*, size_t);

double* average8(double**, double*, size_t);

double** GetPoints(size_t**, double*, size_t*, unsigned*, unsigned*, size_t);

double** CalPoints(double**, size_t);

double** computeContour3d(double*, unsigned, unsigned, unsigned, double, double, size_t*);


/* Special cases */

extern int (*Faces[])[];

extern unsigned FacesSizes[254];

extern unsigned FacePoints[6][6];

extern unsigned (*Edges2[])[];

extern unsigned Edges2Sizes[254];

extern unsigned special_name[7];
extern unsigned special_nface[7];
extern unsigned special_nedge[7];
extern unsigned (*special_ind[])[];
extern unsigned special_indSizes[7];
extern unsigned (*(*special_pos[])[])[];
extern unsigned* (*(special_posSize)[])[];

int* unlist(int (*jagged[])[], unsigned*, unsigned*, unsigned, unsigned*);
unsigned* unlist_u(unsigned (*jagged[])[], unsigned*, unsigned*, unsigned, unsigned*);

unsigned upow(unsigned, unsigned);

unsigned* FacesNo7(int*, size_t*, double*, size_t, unsigned);

unsigned* Faces7(int*, size_t*, double*, size_t, unsigned);

unsigned** vector2matrix(unsigned*, unsigned, unsigned);

unsigned** cbind(unsigned**, size_t*, unsigned*, unsigned, unsigned);

unsigned** subsetMatrix(unsigned**, unsigned*, unsigned*, unsigned, unsigned);

unsigned* whichEqual(unsigned*, unsigned, unsigned, unsigned*);

//unsigned* matrix2vector(unsigned**, unsigned, unsigned);

unsigned* matrix2vectorMinusFirstColumn(unsigned**, unsigned, unsigned);

size_t* repeach(size_t*, unsigned, size_t);

unsigned* replicatex(unsigned, unsigned);

int* jthColumn(int*, unsigned, unsigned, unsigned);

double** transpose(double**, size_t, size_t);

unsigned* vectorialSum(unsigned*, unsigned*, unsigned);
