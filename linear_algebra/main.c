// Main file

// Local includes
#include "matrix.h"
#include "operations.h"

int main(void) {

    int num = 2, num2 = 3, cols = 10, rows = 10;
    Matrix_t *m = m_init(rows, cols);
    Matrix_t *n = m_init(rows, cols);
    m_fill(m, num);
    m_fill(n, num2);
    m_print(m);
    printf("\n");
    m_print(n);
    printf("\n");
    Matrix_t *result = dot(m, n);
    Matrix_t *final = sadd(num, result);
    m_print(result);
    printf("\n");
    m_print(final);
    m_free(m);
    m_free(n);
    m_free(result);
    m_free(final);

    return 0;
}