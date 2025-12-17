#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Write a program that reads a 5 x 5 array of integers and then prints the row sums and the
// column sums:
// Enter row 1: 8 3 9 0 10
// Enter row 2 : 3 5 17 1 1
// Enter row 3 : 2 8 6 23 1
// Enter row 4 : 15 7 3 2 9
// Enter row 5: 6 14 2 6 0
// Row totalS: 30 27 40 36 28
// Column totals: 34 37 37 32 21

void main() {
    int matrix[5][5];
    int row_sums[5] = {0};
    int col_sums[5] = {0};

    // Read the matrix
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            row_sums[i] += matrix[i][j];
            col_sums[j] += matrix[i][j];
        }
    }

    // Print row totals
    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    // Print column totals
    printf("Column totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", col_sums[i]);
    }
    printf("\n");
}

