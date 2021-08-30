
#include "include/life_cycle.h"

#include <stdlib.h>

void PopulateMatrixAndVector (double *pMatrix, double *pVector, int Size) {
  srand(1);

  for (int i = 0; i < Size; i++) {
    pVector[i] = rand() % 100;

    for (int j = 0; j < Size; j++) {
      if (j <= i)
        pMatrix[i * Size + j] = rand() % 100;
      else
        pMatrix[i * Size + j] = 0;
    }
  }
}

void ProcessInitialization(
  double **pMatrix,
  double **pVector,
  double **pResult,
  int *Size
) {
  *Size = MATRIX_SIZE;

  *pMatrix =  malloc(sizeof(double) * ((*Size) * (*Size)));
  *pVector = malloc(sizeof(double) * (*Size));
  *pResult = malloc(sizeof(double) * (*Size));

  PopulateMatrixAndVector(*pMatrix, *pVector, *Size);
};