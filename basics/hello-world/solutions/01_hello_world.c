/*
 * Exercise 1: Basic Hello World
 * Difficulty: Beginner
 * 
 * This program demonstrates the most basic C program structure
 * and prints "Hello, World!" to the console.
 */

#include <stdio.h>    // Include standard input/output library

int main() {          // Main function - program entry point
    printf("Hello, World!");    // Print the greeting
    return 0;         // Return 0 to indicate successful execution
}

/*
 * Explanation:
 * 1. #include <stdio.h> - Includes the standard I/O library for printf()
 * 2. int main() - The main function where program execution begins
 * 3. printf() - Function to print formatted text to console
 * 4. return 0 - Indicates the program executed successfully
 * 
 * Compilation: gcc hello_world.c -o hello_world
 * Execution: ./hello_world
 */