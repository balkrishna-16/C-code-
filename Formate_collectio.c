/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char name[50]; // To store the name
    int age;       // To store the age
    float height;  // To store the height

    // Prompting the user for details
    printf("Enter your name: ");
    scanf("%s", name);  // Read the name (string)

    printf("Enter your age: ");
    scanf("%d", &age);  // Read the age (integer)

    printf("Enter your height in meters: ");
    scanf("%f", &height);  // Read the height (float)

    // Displaying the collected information
    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);

    return 0;
}