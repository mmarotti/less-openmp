#ifndef GAUSSIAN_ELIMINATION_H

#define GAUSSIAN_ELIMINATION_H

#define NUM_THREADS 4

void ParallelGaussianElimination(double *pMatrix, double *pVector, int Size);
void BackSubstitution(double *pMatrix, double *pVector, double *pResult, int Size);

#endif
