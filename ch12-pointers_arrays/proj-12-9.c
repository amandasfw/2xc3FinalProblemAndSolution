#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

// double inner_product(const double *a, const double *b, int n);

// a and b both point to arrays of length n. The function should 
// return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. 
// Use pointer arithmetic—not subscripting—to visit array elements.


double inner_product(const double *a, const double *b, int n) {
    const double *p, *q;
    double sum = 0.0;
    
    for (p = a, q = b; p < a + n; p++, q++) {
        sum += (*p) * (*q);
    }
    return sum;
}

void main() {
    double a[] = {1.0, 2.0, 3.0};
    double b[] = {4.0, 5.0, 6.0};
    
    printf("Inner product: %.2f\n", inner_product(a, b, 3));
}

