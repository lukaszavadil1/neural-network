// Name: operations.c
// Linear algebra library
// Start date: 28.5.2022
// Author: Lukáš Zavadil
// Compiled: gcc (GCC) 9.2.0
// Git repository: https://github.com/lukaszavadil1/neural-network

// Local includes
#include "operations.h"

// Validate dimensions of matrices
bool dimension_validate(Matrix_t *m, Matrix_t *n) {
    if (m->cols == n->cols && m->rows == n->rows) {
        return true;
    }
    return false;
}

// Add two matrices
Matrix_t *add(Matrix_t *m, Matrix_t *n) {
    if (dimension_validate(m, n)) {
        Matrix_t *result = m_init(m->rows, m->cols);
        for (unsigned int i = 0; i < m->rows; i++) {
            for (unsigned int j = 0; j < n->cols; j++) {
                result->items[i][j] = m->items[i][j] + n->items[i][j];
            }
        }
        return result;
    }
    else {
        fprintf(stderr, "Dimension compatibility error");
        exit(1);
    }
}

// Subtract two matrices
Matrix_t *sub(Matrix_t *m, Matrix_t *n) {
    if (dimension_validate(m, n)) {
        Matrix_t *result = m_init(m->rows, m->cols);
        for (unsigned int i = 0; i < m->rows; i++) {
            for (unsigned int j = 0; j < n->cols; j++) {
                result->items[i][j] = m->items[i][j] - n->items[i][j];
            }
        }
        return result;
    }
    else {
        fprintf(stderr, "Dimension compatibility error");
        exit(1);
    }
}

// Multiply two matrices
Matrix_t *mul(Matrix_t *m, Matrix_t *n) {
    if (dimension_validate(m, n)) {
        Matrix_t *result = m_init(m->rows, m->cols);
        for (unsigned int i = 0; i < m->rows; i++) {
            for (unsigned int j = 0; j < n->cols; j++) {
                result->items[i][j] = m->items[i][j] * n->items[i][j];
            }
        }
        return result;
    }
    else {
        fprintf(stderr, "Dimension compatibility error");
        exit(1);
    }
}

// Matrix dot product
Matrix_t *dot(Matrix_t *m, Matrix_t *n) {
    double tmp;
    if (m->cols == n->rows) {
        Matrix_t *result = m_init(m->rows, n->cols);
        for (unsigned int i = 0; i < m->rows; i++) {
            for (unsigned int j = 0; j < n->cols; j++) {
                tmp = 0;
                for (unsigned int k = 0; k < n->rows; k++) {
                    tmp += m->items[i][k] * n->items[k][j];
                }
                result->items[i][j] = tmp;
            }
        }
        return result;
    }
    else {
        fprintf(stderr, "Dimension compatibility error");
        exit(1);
    }
}

// Matirx scalar multiplication
Matrix_t *smul(double scalar, Matrix_t *m) {
    Matrix_t *matrix = m_copy(m);
    for (unsigned int i = 0; i < m->rows; i++) {
        for (unsigned int j = 0; j < m->cols; j++) {
            matrix->items[i][j] *= scalar;
        }
    }
    return matrix; 
}

// Matrix scalar addition
Matrix_t *sadd(double scalar, Matrix_t *m) {
    Matrix_t *matrix = m_copy(m);
    for (unsigned int i = 0; i < m->rows; i++) {
        for (unsigned int j = 0; j < m->cols; j++) {
            matrix->items[i][j] += scalar;
        }
    }
    return matrix;
}

// Matrix trasnposition
Matrix_t *trans(Matrix_t *m) {
    Matrix_t *matrix = m_init(m->rows, m->cols);
    for (unsigned int i = 0; i < m->rows; i++) {
        for (unsigned int j = 0; j < m->cols; j++) {
            matrix->items[j][i] = m->items[i][j];
        }
    }
    return matrix;
}
