#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a function named censor that modifies a string 
// by replacing every occurrence of foo by xxx. For example, 
// the string "food fool" would become "xxxd xxxl". Make the 
// function as short as possible without sacrificing clarity.

void censor(char *str) {
    char *p;
    
    while ((p = strstr(str, "foo")) != NULL) {
        *p = 'x';
        *(p + 1) = 'x';
        *(p + 2) = 'x';
    }
}

void main() {
    char str[] = "food fool";
    
    printf("Original: %s\n", str);
    censor(str);
    printf("After censor: %s\n", str);
}

