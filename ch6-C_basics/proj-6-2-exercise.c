#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a program that asks the user to enter two integers, then calculates and displays their
// greatest common divisor (GCD):

// Enter two integers: 12 28
// Greatest common divisor: 4

// Hint: The classic algorithm for computing the GCD, known as EuclidΓÇÖs algorithm, goes as
// follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m contains
// the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
// and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.

void main() {
    int m, n, remainder, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    // Store original values for display
    int original_m = m;
    int original_n = n;

    // Euclid's algorithm
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
        printf("m: %d, n: %d, remainder: %d\n", m, n, remainder);
        printf("original_m: %d, original_n: %d\n", original_m, original_n);
        printf("--------------------------------\n");
        sleep(1);
        system("cls");
        if (n == 0) {
            break;
        }
       
    }

    printf("Greatest common divisor: %d\n", m); //display the GCD

}

