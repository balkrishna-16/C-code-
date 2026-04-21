#include <stdio.h>

int main() {
    int number, cube;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate cube
    cube = number * number * number;

    // Output the result
    printf("Cube of %d is %d\n", number, cube);

    return 0;
}