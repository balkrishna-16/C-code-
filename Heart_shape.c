#include <stdio.h>

int main() {
    int i, j;
    int size = 10; // Adjust size for a bigger/smaller heart

    // Upper part of the heart
    for (i = size / 2; i <= size; i += 2) {
        // Print leading spaces
        for (j = 1; j < size - i; j += 2)
            printf(" ");

        // Print left half of heart
        for (j = 1; j <= i; j++)
            printf("*");

        // Print space between two halves
        for (j = 1; j <= size - i; j++)
            printf(" ");

        // Print right half of heart
        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower part of the heart
    for (i = size; i >= 0; i--) {
        // Print leading spaces
        for (j = i; j < size; j++)
            printf(" ");

        // Print lower heart
        for (j = 1; j <= (i * 2) - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

