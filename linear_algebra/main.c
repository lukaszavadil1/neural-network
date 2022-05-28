// Main file

// Local includes
#include "matrix.h"
#include "operations.h"

int main(void) {

    int num = 2, num2 = 3, cols = 10, rows = 10;
    Matrix_t *m = matrix_init(rows, cols);
    Matrix_t *n = matrix_init(rows, cols);
    matrix_fill(m, num);
    matrix_fill(n, num2);
    matrix_print(m);
    printf("\n");
    matrix_print(n);
    printf("\n");
    Matrix_t *result = dot(m, n);
    matrix_print(result);
    matrix_free(m);
    matrix_free(n);
    matrix_free(result);

    return 0;
}