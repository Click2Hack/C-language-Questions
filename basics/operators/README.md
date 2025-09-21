# Operators and Expressions ➕

Master the various operators in C programming to perform calculations, comparisons, and logical operations.

## 🎯 Learning Objectives

After completing this section, you will be able to:
- Use arithmetic operators for mathematical calculations
- Apply comparison operators for decision making
- Understand logical operators for complex conditions
- Work with assignment operators efficiently
- Combine operators to create complex expressions

## 📚 Types of Operators

### 1. Arithmetic Operators ➕➖✖️➗
| Operator | Description | Example | Result |
|----------|-------------|---------|---------|
| `+` | Addition | `5 + 3` | `8` |
| `-` | Subtraction | `5 - 3` | `2` |
| `*` | Multiplication | `5 * 3` | `15` |
| `/` | Division | `6 / 3` | `2` |
| `%` | Modulus (remainder) | `7 % 3` | `1` |

### 2. Comparison (Relational) Operators 🔍
| Operator | Description | Example | Result |
|----------|-------------|---------|---------|
| `==` | Equal to | `5 == 5` | `true (1)` |
| `!=` | Not equal to | `5 != 3` | `true (1)` |
| `<` | Less than | `3 < 5` | `true (1)` |
| `>` | Greater than | `5 > 3` | `true (1)` |
| `<=` | Less than or equal | `3 <= 5` | `true (1)` |
| `>=` | Greater than or equal | `5 >= 5` | `true (1)` |

### 3. Logical Operators 🧠
| Operator | Description | Example | Result |
|----------|-------------|---------|---------|
| `&&` | Logical AND | `(5>3) && (2<4)` | `true (1)` |
| `\|\|` | Logical OR | `(5>3) \|\| (2>4)` | `true (1)` |
| `!` | Logical NOT | `!(5>3)` | `false (0)` |

### 4. Assignment Operators 📝
| Operator | Description | Example | Equivalent |
|----------|-------------|---------|------------|
| `=` | Simple assignment | `x = 5` | `x = 5` |
| `+=` | Add and assign | `x += 3` | `x = x + 3` |
| `-=` | Subtract and assign | `x -= 3` | `x = x - 3` |
| `*=` | Multiply and assign | `x *= 3` | `x = x * 3` |
| `/=` | Divide and assign | `x /= 3` | `x = x / 3` |
| `%=` | Modulus and assign | `x %= 3` | `x = x % 3` |

### 5. Increment/Decrement Operators ⬆️⬇️
| Operator | Description | Example | Behavior |
|----------|-------------|---------|----------|
| `++x` | Pre-increment | `++x` | Increment first, then use |
| `x++` | Post-increment | `x++` | Use first, then increment |
| `--x` | Pre-decrement | `--x` | Decrement first, then use |
| `x--` | Post-decrement | `x--` | Use first, then decrement |

## 💡 Key Concepts

### Operator Precedence
Operators have different priorities (like math: multiplication before addition):
1. `()` - Parentheses (highest priority)
2. `++`, `--`, `!` - Unary operators
3. `*`, `/`, `%` - Multiplicative
4. `+`, `-` - Additive
5. `<`, `<=`, `>`, `>=` - Relational
6. `==`, `!=` - Equality
7. `&&` - Logical AND
8. `||` - Logical OR
9. `=`, `+=`, `-=`, etc. - Assignment (lowest priority)

### Type Conversions
- **Integer Division**: `7 / 2 = 3` (not 3.5)
- **Float Division**: `7.0 / 2 = 3.5`
- **Mixed Types**: `7 / 2.0 = 3.5`

### Boolean in C
- C doesn't have a true boolean type
- `0` is considered `false`
- Any non-zero value is considered `true`
- Comparison operators return `1` for true, `0` for false

## 🚨 Common Mistakes to Avoid

1. **Assignment vs Comparison**
   ```c
   if (x = 5)    // Wrong! This assigns 5 to x
   if (x == 5)   // Correct! This compares x with 5
   ```

2. **Integer Division**
   ```c
   int result = 7 / 2;        // result = 3 (not 3.5)
   float result = 7.0 / 2;    // result = 3.5
   ```

3. **Operator Precedence**
   ```c
   int x = 5 + 3 * 2;    // x = 11 (not 16)
   int y = (5 + 3) * 2;  // y = 16
   ```

4. **Modulus with Floats**
   ```c
   float x = 7.5 % 2.0;  // Error! % only works with integers
   ```

## 📝 Example Programs

### Basic Calculator
```c
#include <stdio.h>

int main() {
    float a = 10.0, b = 3.0;
    
    printf("a = %.1f, b = %.1f\n", a, b);
    printf("Addition: %.1f + %.1f = %.1f\n", a, b, a + b);
    printf("Subtraction: %.1f - %.1f = %.1f\n", a, b, a - b);
    printf("Multiplication: %.1f * %.1f = %.1f\n", a, b, a * b);
    printf("Division: %.1f / %.1f = %.1f\n", a, b, a / b);
    
    return 0;
}
```

### Comparison Example
```c
#include <stdio.h>

int main() {
    int x = 15, y = 20;
    
    printf("x = %d, y = %d\n", x, y);
    printf("x == y: %d\n", x == y);  // 0 (false)
    printf("x < y: %d\n", x < y);    // 1 (true)
    printf("x > y: %d\n", x > y);    // 0 (false)
    
    return 0;
}
```

## 📋 Practice Exercises

Work through the exercises in the `questions/` folder to master:
- Basic arithmetic operations
- Comparison and logical operations
- Assignment operators and shortcuts
- Operator precedence understanding
- Building complex expressions

## 🔧 Tips for Success

1. **Use Parentheses** when in doubt about precedence
2. **Test Edge Cases** like division by zero
3. **Understand Integer vs Float** division
4. **Practice Complex Expressions** step by step
5. **Use Meaningful Variable Names** in expressions

## 📚 Next Steps

After mastering operators, you're ready for:
- [Control Structures](../../control-structures/) - Use operators in decisions and loops
- [Functions](../../functions/) - Pass expressions as parameters
- [Arrays](../../arrays/) - Apply operators to array elements