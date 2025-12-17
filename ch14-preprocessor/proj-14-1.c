#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write parameterized macros that compute the following values:

// (a) The cube of x.
// (b) The remainder when n is divided by 4.
// (c) 1 if the product of x and y is less than 100, 0 otherwise.

// Do your macros always work? If not, describe what arguments would make them fail.

// (a) The cube of x
#define CUBE(x) ((x) * (x) * (x))

// (b) The remainder when n is divided by 4
#define REMAINDER_4(n) ((n) % 4)

// (c) 1 if the product of x and y is less than 100, 0 otherwise
#define PRODUCT_LESS_THAN_100(x, y) (((x) * (y)) < 100 ? 1 : 0)

void main() {
    int x = 3, y = 4, n = 10;
    
    printf("CUBE(%d) = %d\n", x, CUBE(x));
    printf("REMAINDER_4(%d) = %d\n", n, REMAINDER_4(n));
    printf("PRODUCT_LESS_THAN_100(%d, %d) = %d\n", x, y, PRODUCT_LESS_THAN_100(x, y));
    
    // Potential issues:
    // - CUBE(x++) would evaluate x++ three times (undefined behavior)
    // - Need parentheses to handle expressions correctly (already added)
    // - PRODUCT_LESS_THAN_100 with side effects could be problematic
}

