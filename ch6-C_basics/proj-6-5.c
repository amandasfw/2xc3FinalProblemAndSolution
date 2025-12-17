#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
// number with its digits reversed. Generalize the program so that the number can have one.
// two, three, or more digits.

void main() {
    int num, reversed = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Reverse the number
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    
    printf("Reversed: %d\n", reversed);
}