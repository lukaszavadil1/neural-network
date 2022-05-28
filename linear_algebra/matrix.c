// Linear algebra stuff

// Local includes
#include "matrix.h"

Matrix_t *matrix_init(unsigned int rows, unsigned int cols) {
    Matrix_t *m = malloc(sizeof(Matrix_t));
    m->rows = rows;
    m->cols = cols;
    m->items = malloc(sizeof(double *) * m->rows);
    for (unsigned int i = 0; i < m->rows; i++) {
        m->items[i] = malloc(sizeof(double) * m->cols);
    }
    return m;
}

void matrix_print(Matrix_t * m) {
    for (unsigned int i = 0; i < m->rows; i++) {
        for (unsigned int j = 0; j < m->cols; j++) {
            printf("%1.3f ", m->items[i][j]);
        }
        printf("\n");
    }
}

void matrix_fill(Matrix_t * m, int num) {
    for (unsigned int i = 0; i < m->rows; i++) {
        for (unsigned int j = 0; j < m->cols; j++) {
            m->items[i][j] = num;
        }
    }
}

void matrix_free(Matrix_t *m) {
    for (unsigned int i = 0; i < m->rows; i++) {
        free(m->items[i]);
    }
    free(m);
    m = NULL;
}
