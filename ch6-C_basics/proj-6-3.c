#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
// terms:

// Enter a fraction: 6/12
// In lowest terms: 1/2

// Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
// denominator. Then divide both the numerator and denominator by the GCD.

int gcd(int m, int n) {
    int remainder;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}

void main() {
    int numerator, denominator, g;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    
    g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
    
    printf("In lowest terms: %d/%d\n", numerator, denominator);
}

