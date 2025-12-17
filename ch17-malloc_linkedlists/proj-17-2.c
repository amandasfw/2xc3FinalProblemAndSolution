#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a function named duplicate that uses dynamic storage allocation to create a copy
// of a string. For example, the call

// p = duplicate(str);

// would allocate space for a string of the same length as str. copy the contents of str into
// the new string, and return a pointer to it. Have duplicate return a null pointer if the
// memory allocation fails.

char *duplicate(const char *str) {
    char *p;
    size_t len = strlen(str);
    
    p = (char *)malloc(len + 1);
    if (p == NULL) {
        return NULL;
    }
    
    strcpy(p, str);
    return p;
}

void main() {
    char *original = "Hello, World!";
    char *copy = duplicate(original);
    
    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy);
    } else {
        printf("Memory allocation failed\n");
    }
}

