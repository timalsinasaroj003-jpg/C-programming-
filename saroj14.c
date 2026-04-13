//Write a program to add, subtract, multiply, and divide two numbers.
#include <stdio.h>
int main() {
    float num1, num2, sum, diff, pro, quo;

    // Read two numbers from user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    
    // Check for division by zero
    if (num2 != 0) {
        quo = num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit with an error code
    }

    // Display the results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("Product: %.2f\n", pro);
    printf("Quotient: %.2f\n", quo);

    return 0;
}