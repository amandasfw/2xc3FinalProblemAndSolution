#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a recursive version of the gcd function. Here’s the strategy to use for
// computing gcd(m,n) : If n is 0, return m. Otherwise, call gcd recursively, passing n as
// the first argument and m % n as the second

// see ../ch6-C_basics/proj-6-2.c

int gcd_recursive(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcd_recursive(n, m % n);
}

void main() {
    int m, n;
    
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    
    printf("Greatest common divisor: %d\n", gcd_recursive(m, n));
}

