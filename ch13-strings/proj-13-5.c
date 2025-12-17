#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// (a) Write a function named capitalize that capitalizes 
// all letters in its argument. The argument will be a 
// null-terminated string containing arbitrary characters, 
// not just letters. Use array subscripting to access the 
// characters in the string. Hint: Use the toupper function 
// to convert each character to upper-case.

// (b) Rewrite a capitalize function, this time using pointer 
// arithmetic to access the characters in the string.

#include <ctype.h>

// (a) Using array subscripting
void capitalize_a(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

// (b) Using pointer arithmetic
void capitalize_b(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}

void main() {
    char str1[] = "hello world!";
    char str2[] = "hello world!";
    
    printf("Original: %s\n", str1);
    
    capitalize_a(str1);
    printf("After capitalize_a: %s\n", str1);
    
    capitalize_b(str2);
    printf("After capitalize_b: %s\n", str2);
}

