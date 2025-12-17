#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Rewrite the following function to use pointer arithmetic 
// instead of array subscripting. (In other words, eliminate 
// the variables i and j and all uses of the [] operator.) 
// Use a single loop instead of nested loops.

#define LEN 5

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    const int *p;
    int sum = 0;

    for (p = &a[0][0]; p <= &a[n-1][LEN-1]; p++) {
        sum += *p;
    }

    return sum;
}

void main() {
    const int arr[3][LEN] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    printf("Sum: %d\n", sum_two_dimensional_array(arr, 3));
}

