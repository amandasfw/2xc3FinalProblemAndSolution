#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a function named my_malloc that serves as a “wrapper” for malloc. 
// When we call my_malloc and ask it to allocate n bytes, it in
// turn calls malloc, tests to make sure that malloc doesn’t return a null pointer, and then
// returns the pointer from malloc. Have my_malloc print an error message and terminate
// the program if malloc returns a null pointer.

void *my_malloc(size_t n) {
    void *p = malloc(n);
    
    if (p == NULL) {
        printf("Error: malloc failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    
    return p;
}

void main() {
    int *arr = (int *)my_malloc(10 * sizeof(int));
    
    printf("Successfully allocated memory\n");
    free(arr);
}
