#include "include/presentation.h"

#include <stdio.h>
#include <mpi.h>

// Print all matrix elements and respective vector
void PrintMatrixAndVector(double *pMatrix, double *pVector, int Size)
{
  printf(BLU "---------------- Matrix ---------------------------\n" RESET);
  for (int row = 0; row < Size; row++) {
    for (int column = 0; column < Size; column++)
      printf("%.0f\t", pMatrix[row * Size + column]);
    printf("-> %.0f\n", pVector[row]);
  }
}

// Print result vector using result
void PrintResult(double *pResult, int Size)
{
  printf(YEL "---------------- Result ---------------------------\n" RESET);
  for (int i = 0; i < Size; i++)
    printf("%f\t ", pResult[i]);
  printf("\n");
}
