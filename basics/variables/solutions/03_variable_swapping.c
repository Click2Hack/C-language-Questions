/*
 * Exercise 3: Variable Swapping
 * Difficulty: Intermediate
 * 
 * This program demonstrates how to swap the values of two variables
 * using a temporary variable.
 */

#include <stdio.h>

int main() {
    // Declare and initialize two variables
    int a = 15;
    int b = 25;
    int temp;    // Temporary variable for swapping
    
    // Display original values
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    
    // Perform the swap using temporary variable
    temp = a;    // Store value of 'a' in temp
    a = b;       // Assign value of 'b' to 'a'
    b = temp;    // Assign stored value (original 'a') to 'b'
    
    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

/*
 * Explanation:
 * The swapping process works in three steps:
 * 1. temp = a;  // temp now holds the original value of 'a'
 * 2. a = b;     // 'a' now holds the value that was in 'b'
 * 3. b = temp;  // 'b' now holds the original value of 'a' (from temp)
 * 
 * Why we need a temporary variable:
 * Without temp, if we did: a = b; b = a;
 * Both variables would end up with the same value (original value of b)
 * because the original value of 'a' would be lost after the first assignment.
 * 
 * Alternative methods (advanced):
 * - Arithmetic method: a = a + b; b = a - b; a = a - b;
 * - XOR method: a = a ^ b; b = a ^ b; a = a ^ b;
 * 
 * Key Learning Points:
 * - Variables can have their values changed during program execution
 * - Temporary variables are useful for preserving values during operations
 * - Assignment operations happen from right to left (value to variable)
 */