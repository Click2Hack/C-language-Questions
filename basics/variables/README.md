# Variables and Data Types 📊

Learn how to store and manipulate data in C programming using variables and different data types.

## 🎯 Learning Objectives

After completing this section, you will be able to:
- Understand different data types in C
- Declare and initialize variables
- Use variables in expressions and calculations
- Understand the concept of memory allocation
- Choose appropriate data types for different scenarios

## 📚 Topics Covered

1. **Basic Data Types**: int, float, double, char
2. **Variable Declaration**: How to create variables
3. **Variable Initialization**: Setting initial values
4. **Constants**: Using `const` keyword
5. **Type Modifiers**: signed, unsigned, short, long

## 🔢 Data Types in C

### Integer Types
- `int`: Standard integer (usually 4 bytes)
- `short`: Short integer (usually 2 bytes)
- `long`: Long integer (usually 8 bytes)
- `char`: Character (1 byte, can store small integers)

### Floating Point Types
- `float`: Single precision (4 bytes)
- `double`: Double precision (8 bytes)

### Modifiers
- `signed`: Can store both positive and negative values (default)
- `unsigned`: Can store only positive values

## 💡 Variable Declaration Syntax

```c
data_type variable_name;                    // Declaration
data_type variable_name = value;            // Declaration with initialization

// Examples:
int age;                    // Declaration
int age = 25;              // Declaration with initialization
float height = 5.8;        // Float with initial value
char grade = 'A';          // Character variable
```

## 📝 Key Concepts

- **Variable**: A named memory location to store data
- **Data Type**: Defines what kind of data can be stored
- **Declaration**: Creating a variable
- **Initialization**: Assigning an initial value
- **Scope**: Where the variable can be accessed

## 🚨 Common Mistakes to Avoid

1. Using variables before declaring them
2. Forgetting to initialize variables
3. Using wrong data type for the data
4. Mixing up integer and floating-point arithmetic
5. Character vs string confusion

## 📋 Practice Exercises

Work through the exercises in the `questions/` folder to master:
- Basic variable declarations
- Different data types usage
- Variable initialization and assignment
- Type conversions and casting
- Constants and literals

## 🔧 Compilation Notes

Variables must be declared before use. C requires all variables to be declared at the beginning of a block (in older C standards) or before their first use (in C99 and later).

## 📚 Next Steps

After mastering variables, move on to:
- [Operators](../operators/)
- [Input and Output](../input-output/)