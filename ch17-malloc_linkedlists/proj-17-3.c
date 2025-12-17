#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write the following function:

// int *create_array(int n, int initial_value);

// The function should return a pointer to a dynamically allocated int array with n members,
// each of which is initialized to initial_value . The return value should be NULL ifth e
// array can’t be allocated.

int *create_array(int n, int initial_value) {
    int *arr;
    int i;
    
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }
    
    for (i = 0; i < n; i++) {
        arr[i] = initial_value;
    }
    
    return arr;
}

void main() {
    int *arr = create_array(5, 42);
    int i;
    
    if (arr != NULL) {
        printf("Array: ");
        for (i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
    } else {
        printf("Failed to create array\n");
    }
}

