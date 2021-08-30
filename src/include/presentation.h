#ifndef PRESENTATION_H

#define PRESENTATION_H

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define BLU "\x1b[36m"
#define YEL "\x1b[33m"
#define RESET "\x1B[0m"

void PrintMatrixAndVector(double *pMatrix, double *pVector, int Size);
void PrintResult(double *pResult, int Size);

#endif