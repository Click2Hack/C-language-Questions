/*
 * Exercise 2: Calculate Area of a Rectangle
 * Difficulty: Beginner
 * 
 * This program calculates the area of a rectangle using
 * floating-point variables for precise calculations.
 */

#include <stdio.h>

int main() {
    // Declare and initialize variables for rectangle dimensions
    float length = 10.5;    // Length in units
    float width = 7.2;      // Width in units
    float area;             // Variable to store calculated area
    
    // Calculate the area
    area = length * width;
    
    // Display the results
    printf("Rectangle dimensions: %.2f x %.2f\n", length, width);
    printf("Area: %.2f square units\n", area);
    
    return 0;
}

/*
 * Explanation:
 * 1. float is used for decimal numbers (more precise than int for measurements)
 * 2. area = length * width performs the multiplication
 * 3. %.2f formats output to exactly 2 decimal places
 * 4. Variables can be declared first and assigned values later
 * 
 * Alternative approach:
 * You could calculate the area directly in the printf statement:
 * printf("Area: %.2f square units\n", length * width);
 * 
 * Key Learning Points:
 * - Choose appropriate data types for your calculations
 * - Float allows for more precise measurements than int
 * - Mathematical operations work naturally with variables
 * - Formatting output makes results more readable
 */