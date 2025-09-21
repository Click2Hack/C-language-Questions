/*
 * Exercise 4: ASCII Art - Simple House
 * Difficulty: Intermediate
 * 
 * This program creates ASCII art of a house using careful spacing
 * and character positioning.
 */

#include <stdio.h>

int main() {
    printf("     /\\\n");       // Roof peak
    printf("    /  \\\n");      // Upper roof
    printf("   /____\\\n");     // Roof base
    printf("   |    |\n");      // Wall top
    printf("   | [] |\n");      // Wall with window
    printf("   |____|\n");      // Wall base/door
    return 0;
}

/*
 * Alternative approach with single printf():
 * 
 * printf("     /\\\n    /  \\\n   /____\\\n   |    |\n   | [] |\n   |____|\n");
 * 
 * Explanation:
 * 1. Each line is carefully spaced to create the house shape
 * 2. The roof uses / and \ characters to create triangular shape
 * 3. The walls use | characters for vertical lines
 * 4. [] represents a simple window
 * 5. Underscores (_) create horizontal lines
 * 
 * Key Learning:
 * - ASCII art requires precise character placement
 * - Planning the design on paper first helps
 * - Escape sequences are essential for multi-line art
 * - Backslash (\) needs to be escaped as \\ in some contexts, 
 *   but in this case it works as a single backslash
 */