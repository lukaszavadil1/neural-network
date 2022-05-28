// Linear algebra stuff header file

// Header file guard
#ifndef MATRIX_H
#define MATRIX_H

// External imports
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double **items;
    unsigned int rows;
    unsigned int cols;
} Matrix_t;

Matrix_t *matrix_init(unsigned int rows, unsigned int cols);
void matrix_print(Matrix_t *matrix);
void matrix_fill(Matrix_t *matrix, int num);
void matrix_free(Matrix_t *matrix);

#endif