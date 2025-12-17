#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

//void find_two_largest(int a[], int n, int *largest, int *second_largest);

// When passed an array a of length n, the function will search for its largest
// and second-largest elements, storing them in the variables pointed to by largest
// and second_largest, respectively.

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    if (n < 1) {
        return;
    }
    
    *largest = a[0];
    *second_largest = a[0];
    
    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest && a[i] != *largest) {
            *second_largest = a[i];
        }
    }
}

void main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int largest, second_largest;
    
    find_two_largest(arr, 8, &largest, &second_largest);
    printf("Largest: %d, Second largest: %d\n", largest, second_largest);
}

