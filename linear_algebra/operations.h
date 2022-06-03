// Name: operations.h
// Linear algebra library
// Start date: 28.5.2022
// Author: Lukáš Zavadil
// Compiled: gcc (GCC) 9.2.0
// Git repository: https://github.com/lukaszavadil1/neural-network

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

// Multiply two matrices
Matrix_t *mul(Matrix_t *m, Matrix_t *n);

// Matrix dot product
Matrix_t *dot(Matrix_t *m, Matrix_t *n);

// Matrix scalar multiplication
Matrix_t *smul(double scalar, Matrix_t *m);

// Matrix scalar addition
Matrix_t *sadd(double scalar, Matrix_t *m);

// Matrix trasnposition
Matrix_t *trans(Matrix_t *m);

#endif