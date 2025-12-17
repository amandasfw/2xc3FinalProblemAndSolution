#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Let DOUBLE be the following macro:

// #define DOUBLE(x) 2*x

// (a) What is the value of DOUBLE(1+2)?
// (b) What is the value of 4/DOUBLE(2)?
// (c) Fix the definition of DOUBLE.

#define DOUBLE(x) 2*x

void main() {
    // (a) DOUBLE(1+2) = 2*1+2 = 2 + 2 = 4 (WRONG! Should be 6)
    // The macro expands to 2*1+2 instead of 2*(1+2)
    printf("DOUBLE(1+2) = %d (incorrect, should be 6)\n", DOUBLE(1+2));
    
    // (b) 4/DOUBLE(2) = 4/2*2 = 2*2 = 4 (WRONG! Should be 1)
    // The macro expands to 4/2*2 instead of 4/(2*2)
    printf("4/DOUBLE(2) = %d (incorrect, should be 1)\n", 4/DOUBLE(2));
    
    // (c) Fixed definition:
    #define DOUBLE_FIXED(x) (2*(x))
    
    printf("DOUBLE_FIXED(1+2) = %d (correct)\n", DOUBLE_FIXED(1+2));
    printf("4/DOUBLE_FIXED(2) = %d (correct)\n", 4/DOUBLE_FIXED(2));
}

