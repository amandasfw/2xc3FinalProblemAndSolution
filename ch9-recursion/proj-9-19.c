#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Consider the following "mystery" function:

// void pb(int n)
// {
//  if (n != 0) {
//   pb(n / 2);
//   putchar('0' + n % 2);
//  }
// }

// Trace the execution of the function by hand. Then write a program that calls the function,
// passing it a number entered by the user. What does the function do?

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

void main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Binary representation: ");
    if (num == 0) {
        printf("0");
    } else {
        pb(num);
    }
    printf("\n");
    
    // Explanation: The function converts a decimal number to binary
    // by recursively dividing by 2 and printing the remainders in reverse order
}

