#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

// bool search(const int a[], int n, int key);

// a is the array to be searched, n is the number of elements 
// in the array, and key is the search key. search should return 
// true if key matches some element of a, and false if it does not.

bool search(const int a[], int n, int key) {
    const int *p;
    
    for (p = a; p < a + n; p++) {
        if (*p == key) {
            return true;
        }
    }
    return false;
}

void main() {
    int arr[] = {1, 2, 3, 4, 5};
    int key = 3;
    
    if (search(arr, 5, key)) {
        printf("Key %d found\n", key);
    } else {
        printf("Key %d not found\n", key);
    }
}

