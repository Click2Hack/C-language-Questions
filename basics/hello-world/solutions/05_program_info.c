/*
 * Exercise 5: Program Information
 * Difficulty: Intermediate
 * 
 * This program displays formatted information about itself,
 * demonstrating structured output and proper formatting.
 */

#include <stdio.h>

int main() {
    printf("====================================\n");
    printf("Program Name: My First C Program\n");
    printf("Author: Alice Johnson\n");        // Replace with your name
    printf("Date: December 2024\n");          // Replace with current date
    printf("Version: 1.0\n");
    printf("Description: A simple hello world program\n");
    printf("====================================\n");
    return 0;
}

/*
 * Enhanced version with better formatting:
 * 
 * printf("====================================\n");
 * printf("| Program Name: My First C Program |\n");
 * printf("| Author      : Alice Johnson      |\n");
 * printf("| Date        : December 2024      |\n");
 * printf("| Version     : 1.0                |\n");
 * printf("| Description : Hello world program|\n");
 * printf("====================================\n");
 * 
 * Explanation:
 * 1. Equal signs (=) create a visual border
 * 2. Each piece of information is on its own line
 * 3. Consistent formatting makes it professional
 * 4. Information is clearly labeled and easy to read
 * 
 * Key Learning:
 * - Good formatting improves readability
 * - Programs can be self-documenting
 * - Consistent spacing creates professional output
 * - Planning layout before coding saves time
 */