// Main file

// Local includes
#include "matrix.h"

int main(void) {

    int num = 69, cols = 10, rows = 10;
    Matrix_t *m = matrix_init(rows, cols);
    matrix_fill(m, num);
    matrix_print(m);
    matrix_free(m);

    return 0;
}