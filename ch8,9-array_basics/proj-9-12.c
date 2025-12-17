#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:
// double inner_product(double a[], double b[], int n);
// The function should return a[0] * b [0] + a[1] * b[l] + . . . + a[n-l] * b[n-l] .

double inner_product(double a[], double b[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

void main() {
    double a[] = {1.0, 2.0, 3.0};
    double b[] = {4.0, 5.0, 6.0};
    int n = 3;
    
    double result = inner_product(a, b, n);
    printf("Inner product: %.2f\n", result);
}

