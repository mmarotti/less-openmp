#include <stdio.h>
#include <stdlib.h>

#include "include/life_cycle.h"
#include "include/presentation.h"
#include "include/gaussian_elimination.h"

void ParallelResultCalculation(double *pMatrix, double *pVector, double *pResult, int Size) {
  ParallelGaussianElimination(pMatrix, pVector, Size);
  BackSubstitution(pMatrix, pVector, pResult, Size);
}

int main(int argc, char* argv[]) {
  double *pMatrix; // Matrix of the linear system
  double *pVector; // Right parts of the linear system
  double *pResult; // Result vector

  int Size; // Size of the matrix and vectors

  ProcessInitialization(&pMatrix, &pVector, &pResult, &Size);

  ParallelResultCalculation(pMatrix, pVector, pResult, Size);

  PrintResult(pResult, Size);

  return 0;
}