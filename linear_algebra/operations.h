// Matrix operations header file

// Header file guard
#ifndef OPERATIONS_H
#define OPERATIONS_H

// Local includes
#include "matrix.h"
#include <stdbool.h>

// Validate dimensions of matrices
bool dimension_validate(Matrix_t *m, Matrix_t *n);

// Add two matrices
Matrix_t *add(Matrix_t *m, Matrix_t *n);

// Subtract two matrices
Matrix_t *sub(Matrix_t *m, Matrix_t *n);

// Matrix multiplication
Matrix_t *mul(Matrix_t *m, Matrix_t *n);

// Matrix dot product
Matrix_t *dot(Matrix_t *m, Matrix_t *n);

// Matrix scalar multiplication
Matrix_t *smul(Matrix_t *m, Matrix_t *n);

// Matrix scalar addition
Matrix_t *sadd(Matrix_t *m, Matrix_t *n);

// Matrix trasnposition
Matrix_t *trans(Matrix_t *m, Matrix_t *n);

#endif