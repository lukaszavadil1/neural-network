// Name: main.c
// Linear algebra library
// Start date: 28.5.2022
// Author: Lukáš Zavadil
// Compiled: gcc (GCC) 9.2.0
// Git repository: https://github.com/lukaszavadil1/neural-network

// Local includes
#include "matrix.h"
#include "operations.h"

int main(void) {

    // Testing
    int cols = 10, rows = 10;
    Matrix_t *m = m_init(rows, cols);
    m_rand(m, 9);
    m_print(m);

    m_free(m);

    return 0;
}