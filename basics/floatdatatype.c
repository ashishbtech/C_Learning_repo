#include <stdio.h>

int main()
{
    // Declaration and initialization of float variables
    float num1 = 5.75;
    float num2 = 3.25;
    float sum, difference, product, quotient;

    // Arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    // Display results
    printf("Number 1 = %.2f\n", num1);
    printf("Number 2 = %.2f\n", num2);
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
