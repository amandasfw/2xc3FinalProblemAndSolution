#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a program that finds the largest in a series of numbers entered by the user. The program
// must prompt the user to enter numbers one by one. When the user enters 0 or a negative
// number, the program must display the largest nonnegative number entered

void main() {
    double num, largest = 0.0;
    
    printf("Enter numbers (0 or negative to stop): ");
    
    while (1) {
        scanf("%lf", &num);
        if (num <= 0) {
            break;
        }
        if (num > largest) {
            largest = num;
        }
    }
    
    if (largest > 0) {
        printf("Largest number: %.2f\n", largest);
    } else {
        printf("No positive numbers entered.\n");
    }
}

