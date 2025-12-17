#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// What will be the contents of the array after the following statements are executed?

// int a[8] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
// int *p = &a[0], *q = &a[N-1], temp;
// while (p < q) {
//     temp = *p;
//     *p++ = *q;
//     *q-- = temp;
// }

void main() {
    // The code reverses the array
    // After execution, the array will be: {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
    
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[9], temp;
    
    printf("Original array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    while (p < q) {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
    
    printf("After reversal: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    // Answer: The array contents will be reversed: {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
}

