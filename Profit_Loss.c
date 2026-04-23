/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    float cost_price, selling_price, result;

    // Input values
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);

    // Calculate profit or loss
    if (selling_price > cost_price) {
        result = selling_price - cost_price;
        printf("Profit = %.2f\n", result);
    } else if (cost_price > selling_price) {
        result = cost_price - selling_price;
        printf("Loss = %.2f\n", result);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}

