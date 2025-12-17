#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a macro NELMS(a) that computes the number of elements in a one-dimensional array a.
// Hint: See the discussion of the sizeof operator in Section 8.1.

// page 167-168, too long to paste here.

#define NELMS(a) (sizeof(a) / sizeof((a)[0]))

void main() {
    int arr[] = {1, 2, 3, 4, 5};
    double darr[] = {1.0, 2.0, 3.0};
    
    printf("Number of elements in arr: %zu\n", NELMS(arr));
    printf("Number of elements in darr: %zu\n", NELMS(darr));
}

