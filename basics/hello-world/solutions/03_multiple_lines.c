/*
 * Exercise 3: Multiple Lines with Escape Sequences
 * Difficulty: Beginner
 * 
 * This program creates a bordered welcome message using escape sequences
 * for proper formatting.
 */

#include <stdio.h>

int main() {
    printf("*******************\n");
    printf("*   Welcome to C   *\n");
    printf("*   Programming!   *\n");
    printf("*******************\n");
    return 0;
}

/*
 * Alternative solution using a single printf():
 * 
 * printf("*******************\n*   Welcome to C   *\n*   Programming!   *\n*******************\n");
 * 
 * Explanation:
 * 1. \n creates a new line after each part of the pattern
 * 2. Spaces are used for proper alignment within the border
 * 3. Multiple printf() statements make the code more readable
 * 4. Each line of asterisks creates the border effect
 * 
 * Key Learning:
 * - Escape sequences for formatting (\n for newline)
 * - Planning output layout before coding
 * - Using spaces for alignment
 */