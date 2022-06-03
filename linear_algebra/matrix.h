// Name: matrix.h
// Linear algebra library
// Start date: 28.5.2022
// Author: Lukáš Zavadil
// Compiled: gcc (GCC) 9.2.0
// Git repository: https://github.com/lukaszavadil1/neural-network

// Header file guard
#ifndef MATRIX_H
#define MATRIX_H

// External imports
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Matrix struct
typedef struct {
    double **items;
    unsigned int rows;
    unsigned int cols;
} Matrix_t;

// Matrix inicializacion
Matrix_t *m_init(unsigned int rows, unsigned int cols);

// Matrix copy creation
Matrix_t *m_copy(Matrix_t *matrix);

// Matrix print
void m_print(Matrix_t *matrix);

// Matrix fill with given number
void m_fill(Matrix_t *matrix, int num);

// Save matrix to given file
void m_set(Matrix_t *matrix, char *file_name);

// Load matrix from given file
void m_get(char *file_name);

// Matrix free allocated memory
void m_free(Matrix_t *matrix);

#endif