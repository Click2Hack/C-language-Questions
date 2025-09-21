# Variables and Data Types Questions 📊

## Exercise 1: Basic Variable Declaration 🟢
**Difficulty:** Beginner  
**Time:** 10 minutes

### Problem Statement
Write a C program that declares variables of different data types and prints their values.

### Requirements
- Declare an integer variable and assign it the value 42
- Declare a float variable and assign it the value 3.14
- Declare a character variable and assign it the letter 'A'
- Print all three variables with appropriate labels

### Expected Output
```
Integer value: 42
Float value: 3.14
Character value: A
```

---

## Exercise 2: Calculate Area of a Rectangle 🟢
**Difficulty:** Beginner  
**Time:** 15 minutes

### Problem Statement  
Write a program that calculates and displays the area of a rectangle.

### Requirements
- Declare variables for length and width (use appropriate data types)
- Assign values: length = 10.5, width = 7.2
- Calculate the area (length × width)
- Display the result with 2 decimal places

### Expected Output
```
Rectangle dimensions: 10.50 x 7.20
Area: 75.60 square units
```

---

## Exercise 3: Variable Swapping 🟡
**Difficulty:** Intermediate  
**Time:** 15 minutes

### Problem Statement
Write a program that swaps the values of two integer variables and displays the values before and after swapping.

### Requirements
- Declare two integer variables: a = 15, b = 25
- Display original values
- Swap the values (use a temporary variable)
- Display swapped values

### Expected Output
```
Before swapping:
a = 15, b = 25

After swapping:
a = 25, b = 15
```

---

## Exercise 4: Data Type Sizes 🟡
**Difficulty:** Intermediate  
**Time:** 10 minutes

### Problem Statement
Write a program that displays the size (in bytes) of different data types on your system.

### Requirements
- Use the `sizeof()` operator
- Display sizes for: int, float, double, char, long
- Format the output in a clear, readable manner

### Expected Output (may vary by system)
```
Data Type Sizes on this system:
char:   1 byte(s)
int:    4 byte(s)
float:  4 byte(s)
double: 8 byte(s)
long:   8 byte(s)
```

### Hints
- Use `sizeof(datatype)` to get the size
- The `%zu` format specifier is used for `sizeof()` results

---

## Exercise 5: Temperature Converter 🟡
**Difficulty:** Intermediate  
**Time:** 20 minutes

### Problem Statement
Create a program that converts temperature from Celsius to Fahrenheit.

### Requirements
- Declare a variable for Celsius temperature (use float)
- Set the Celsius value to 25.0
- Calculate Fahrenheit using the formula: F = (C × 9/5) + 32
- Display both temperatures with appropriate labels

### Expected Output
```
Temperature Conversion:
Celsius: 25.00°C
Fahrenheit: 77.00°F
```

---

## Exercise 6: Student Information 🟡
**Difficulty:** Intermediate  
**Time:** 20 minutes

### Problem Statement
Write a program that stores and displays student information using appropriate variables.

### Requirements
- Student name: Use a character array or string
- Student age: Use integer
- Student GPA: Use float
- Student grade: Use character
- Display all information in a formatted manner

### Expected Output
```
=== Student Information ===
Name: Alice Johnson
Age: 20 years
GPA: 3.85
Grade: A
```

### Hints
- For the name, you can use: `char name[] = "Alice Johnson";`
- Format the GPA to 2 decimal places

---

## Exercise 7: Constants and Calculations 🟡
**Difficulty:** Intermediate  
**Time:** 15 minutes

### Problem Statement
Write a program that calculates the area and circumference of a circle using the constant value of PI.

### Requirements
- Define PI as a constant (3.14159)
- Declare a variable for radius (use float)
- Set radius = 5.0
- Calculate area: PI × radius²
- Calculate circumference: 2 × PI × radius
- Display results with appropriate formatting

### Expected Output
```
Circle Calculations:
Radius: 5.00 units
Area: 78.54 square units
Circumference: 31.42 units
```

---

## 🔧 Compilation and Testing

To compile and test your programs:
```bash
gcc your_program.c -o your_program
./your_program
```

## 🧠 Think About It

1. What happens if you assign a float value to an integer variable?
2. Why do we use different data types instead of just one?
3. What's the difference between declaring and initializing a variable?
4. When would you use `const` in your programs?
5. How does the size of data types affect memory usage?

## 📚 Key Concepts to Remember

- **Choose the right data type** for your data
- **Initialize variables** before using them
- **Use meaningful variable names**
- **Understand type conversion** and potential data loss
- **Constants make code more readable** and maintainable

## 🎯 Ready for Solutions?

Once you've attempted all exercises, check the `solutions/` folder to see detailed implementations and learn different approaches to solving these problems!