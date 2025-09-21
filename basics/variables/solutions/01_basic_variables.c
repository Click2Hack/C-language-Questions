/*
 * Exercise 1: Basic Variable Declaration
 * Difficulty: Beginner
 * 
 * This program demonstrates how to declare variables of different
 * data types and display their values.
 */

#include <stdio.h>

int main() {
    // Variable declarations with initialization
    int integer_value = 42;        // Integer variable
    float float_value = 3.14;      // Float variable
    char character_value = 'A';    // Character variable
    
    // Display the values with appropriate labels
    printf("Integer value: %d\n", integer_value);
    printf("Float value: %.2f\n", float_value);
    printf("Character value: %c\n", character_value);
    
    return 0;
}

/*
 * Explanation:
 * 1. int - stores whole numbers (integers)
 * 2. float - stores decimal numbers (floating-point)
 * 3. char - stores single characters
 * 4. %d is the format specifier for integers
 * 5. %.2f formats float to 2 decimal places
 * 6. %c is the format specifier for characters
 * 
 * Key Learning Points:
 * - Different data types serve different purposes
 * - Variables must be declared before use
 * - Format specifiers must match the data type
 * - Initialization can be done during declaration
 */