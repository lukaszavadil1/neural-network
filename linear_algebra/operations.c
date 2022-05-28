// Matrix operations

// Local includes
#include "operations.h"

bool dimension_validate(Matrix_t *m, Matrix_t *n) {
    if (m->cols == n->cols && m->rows == n->rows) {
        return true;
    }
    return false;
}

Matrix_t *add(Matrix_t *m, Matrix_t *n) {
    if (dimension_validate(m, n)) {
        Matrix_t *result = matrix_init(m->rows, m->cols);
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

Matrix_t *sub(Matrix_t *m, Matrix_t *n) {
    if (dimension_validate(m, n)) {
        Matrix_t *result = matrix_init(m->rows, m->cols);
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

Matrix_t *mul(Matrix_t *m, Matrix_t *n) {
    if (dimension_validate(m, n)) {
        Matrix_t *result = matrix_init(m->rows, m->cols);
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

Matrix_t *dot(Matrix_t *m, Matrix_t *n) {
    double tmp;
    if (m->cols == n->rows) {
        Matrix_t *result = matrix_init(m->rows, n->cols);
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
