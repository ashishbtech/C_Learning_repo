#include <stdio.h>

int main() {
    int rows;
    printf("Enter the no. of rows :");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++) {
        // Outer loop for rows
        if (i % 2 != 0) {
            // Odd row: print numbers
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            // Even row: print characters
            for (int j = 0; j < i; j++) {
                printf("%c ", 'A' + j);
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}