/*
 * Simple Calculator - Demonstrating Basic Operators
 * Difficulty: Beginner
 * 
 * This program demonstrates all basic arithmetic operators
 * with user input and clear output formatting.
 */

#include <stdio.h>

int main() {
    float num1, num2;
    
    // Get input from user
    printf("=== Simple Calculator ===\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Perform all arithmetic operations
    printf("\n=== Results ===\n");
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    
    // Check for division by zero
    if (num2 != 0) {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Cannot divide by zero!\n");
    }
    
    // Modulus only works with integers
    int int1 = (int)num1;
    int int2 = (int)num2;
    if (int2 != 0) {
        printf("%d %% %d = %d\n", int1, int2, int1 % int2);
    }
    
    return 0;
}

/*
 * Explanation:
 * 1. We use float for decimal number support
 * 2. All basic arithmetic operators are demonstrated
 * 3. Division by zero check prevents crashes
 * 4. Modulus requires integer conversion
 * 5. %.2f formats output to 2 decimal places
 * 
 * Key Learning Points:
 * - Arithmetic operators work with variables
 * - Division by zero must be checked
 * - Modulus (%) only works with integers
 * - Type casting: (int)variable converts to integer
 * - Good practice to validate user input
 */