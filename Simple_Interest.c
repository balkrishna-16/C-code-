#include <stdio.h>

int main()
{
    float principle, rate, time, interest;

    // Input values
    printf("Enter the Principle amount: ");
    scanf("%f", &principle);

    printf("Enter the Rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    interest = (principle * rate * time) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", interest);

    return 0;

}
