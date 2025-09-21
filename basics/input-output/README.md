# Input and Output 🔄

Learn how to interact with users by taking input and providing output in C programming.

## 🎯 Learning Objectives

After completing this section, you will be able to:
- Use `scanf()` to read user input
- Use `printf()` for formatted output
- Handle different data types in input/output operations
- Understand format specifiers and their usage
- Create interactive programs that respond to user input

## 📚 Topics Covered

1. **Output with printf()**: Displaying data and messages
2. **Input with scanf()**: Reading user input
3. **Format Specifiers**: Controlling input/output formatting
4. **Interactive Programs**: Creating user-friendly interfaces
5. **Input Validation**: Handling user input safely

## 📤 Output with printf()

### Basic Syntax
```c
printf("format string", variable1, variable2, ...);
```

### Common Format Specifiers
- `%d` or `%i`: Integer
- `%f`: Float (default 6 decimal places)
- `%.2f`: Float with 2 decimal places
- `%c`: Character
- `%s`: String
- `%lf`: Double (for scanf)

### Examples
```c
int age = 25;
float height = 5.8;
char grade = 'A';

printf("Age: %d years\n", age);
printf("Height: %.1f feet\n", height);
printf("Grade: %c\n", grade);
```

## 📥 Input with scanf()

### Basic Syntax
```c
scanf("format string", &variable1, &variable2, ...);
```

### Important Notes
- Use `&` (address operator) before variable names
- Exception: No `&` needed for strings (char arrays)
- `%lf` is used for double in scanf (not `%f`)

### Examples
```c
int age;
float height;
char grade;

printf("Enter your age: ");
scanf("%d", &age);

printf("Enter your height: ");
scanf("%f", &height);

printf("Enter your grade: ");
scanf(" %c", &grade);    // Note the space before %c
```

## 💡 Key Concepts

### Buffer Issues
- `scanf()` leaves newline characters in the input buffer
- Use a space before `%c` to consume whitespace: `scanf(" %c", &variable)`
- For strings, `scanf()` stops at the first whitespace

### Format Specifiers Summary
| Data Type | printf() | scanf() |
|-----------|----------|---------|
| int       | %d       | %d      |
| float     | %f       | %f      |
| double    | %f       | %lf     |
| char      | %c       | %c      |
| string    | %s       | %s      |

## 🚨 Common Mistakes to Avoid

1. **Forgetting the & operator** in scanf()
2. **Buffer issues** with character input
3. **Wrong format specifiers** for data types
4. **Not handling input errors** gracefully
5. **Mixing scanf() and other input functions**

## 📝 Best Practices

1. **Always prompt the user** before asking for input
2. **Use clear, descriptive prompts**
3. **Validate user input** when possible
4. **Format output** for better readability
5. **Handle edge cases** and errors

## 🔧 Example Program Structure

```c
#include <stdio.h>

int main() {
    // Declare variables
    int number;
    
    // Prompt and read input
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Process and display output
    printf("You entered: %d\n", number);
    
    return 0;
}
```

## 📋 Practice Exercises

Work through the exercises in the `questions/` folder to master:
- Basic input and output operations
- Different data types handling
- Interactive program design
- Format specifier usage
- Simple calculations with user input

## 🔧 Compilation Tips

When testing input programs:
- Run them interactively to test user input
- Try different types of input to test robustness
- Check for common input errors

## 📚 Next Steps

After mastering input/output, move on to:
- [Operators](../operators/)
- [Control Structures](../../control-structures/)