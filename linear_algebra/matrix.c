// Name: matrix.c
// Linear algebra library
// Start date: 28.5.2022
// Author: Lukáš Zavadil
// Compiled: gcc (GCC) 9.2.0
// Git repository: https://github.com/lukaszavadil1/neural-network

// Local includes
#include "matrix.h"

// Matrix inicializacion
Matrix_t *m_init(unsigned int rows, unsigned int cols) {
    Matrix_t *m = malloc(sizeof(Matrix_t));
    m->rows = rows;
    m->cols = cols;
    m->items = malloc(sizeof(double *) * m->rows);
    for (unsigned int i = 0; i < m->rows; i++) {
        m->items[i] = malloc(sizeof(double) * m->cols);
    }
    return m;
}

// Matrix copy creation
Matrix_t *m_copy(Matrix_t *matrix) {
    Matrix_t *m = m_init(matrix->rows, matrix->cols);
    for (unsigned int i = 0; i < matrix->rows; i++) {
        for (unsigned int j = 0; j < matrix->cols; j++) {
            m->items[i][j] = matrix->items[i][j];
        }
    }
    return m;
}

// Matrix print
void m_print(Matrix_t * m) {
    for (unsigned int i = 0; i < m->rows; i++) {
        for (unsigned int j = 0; j < m->cols; j++) {
            printf("%1.3f ", m->items[i][j]);
        }
        printf("\n");
    }
}

// Matrix fill with given number
void m_fill(Matrix_t * m, int num) {
    for (unsigned int i = 0; i < m->rows; i++) {
        for (unsigned int j = 0; j < m->cols; j++) {
            m->items[i][j] = num;
        }
    }
}

// Save matrix to given file
void m_set(Matrix_t *m, char *filename);

// Load matrix from given file
void m_get(char *filename);

// Matrix free allocated memory
void m_free(Matrix_t *m) {
    for (unsigned int i = 0; i < m->rows; i++) {
        free(m->items[i]);
    }
    free(m);
    m = NULL;
}
