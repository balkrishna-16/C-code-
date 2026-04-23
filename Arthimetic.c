#include <stdio.h>

int main()
{

    int num1, num2, choice;
    float result;

    // Displaying options for operations
    printf("Select the operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Asking for input numbers
    printf("Enter 1st numbers: ");
    scanf("%d", &num1);
    printf("Enter 2nd numbers: ");
    scanf("%d", &num2);

    // Using if-else to perform the chosen operation
    if (choice == 1) {
        result = num1 + num2;
        printf("Result of addition: %.2f\n", result);
    } else if (choice == 2) {
        result = num1 - num2;
        printf("Result of subtraction: %.2f\n", result);
    } else if (choice == 3) {
        result = num1 * num2;
        printf("Result of multiplication: %.2f\n", result);
    } else if (choice == 4) {
        if (num2 != 0) {
            result = (float)num1 / num2;
            printf("Result of division: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}

