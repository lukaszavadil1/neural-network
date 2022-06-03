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
    Matrix_t *result = dot(m, n);
    printf("Result before: \n");
    m_print(result);
    Matrix_t *final = sadd(num, result);
    m_set(final, "test.txt");
    result = m_get("test.txt");
    printf("Result after: \n");
    m_print(result);
    printf("Final: \n");
    m_print(final);

    m_free(m);
    m_free(n);
    m_free(result);
    m_free(final);

    return 0;
}