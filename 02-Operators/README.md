# 📘 C Programming — Operators

<p align="center">
  <strong>MODULE 02 · C PROGRAMMING LEARNING SERIES</strong>
</p>

<p align="center">
  A beginner-friendly guide to understanding and using operators in C.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language C">
  <img src="https://img.shields.io/badge/Level-Beginner-green.svg" alt="Beginner Level">
  <img src="https://img.shields.io/badge/Module-02-orange.svg" alt="Module 02">
</p>

---

## 📚 Table of Contents

1. [🎯 Learning Objectives](#-learning-objectives)
2. [💡 Introduction to Operators](#-introduction-to-operators)
3. [➕ Arithmetic Operators](#-arithmetic-operators)
4. [⚖️ Relational Operators](#-relational-operators)
5. [🔗 Logical Operators](#-logical-operators)
6. [📝 Assignment Operators](#-assignment-operators)
7. [🔄 Increment and Decrement Operators](#-increment-and-decrement-operators)
8. [💻 Bitwise Operators](#-bitwise-operators)
9. [❓ Conditional Operator](#-conditional-operator)
10. [📊 Operator Precedence and Associativity](#-operator-precedence-and-associativity)
11. [⚠️ Common Mistakes](#️-common-mistakes)
12. [🧠 Practice Exercises](#-practice-exercises)
13. [💻 Practical Programs](#-practical-programs)
14. [✅ Module Completion Checklist](#-module-completion-checklist)
15. [📖 Key Takeaways](#-key-takeaways)
16. [🔗 Module Navigation](#-module-navigation)

---

## 🎯 Learning Objectives

After completing this module, you should be able to:

- Understand operators and operands in C.
- Perform mathematical calculations using arithmetic operators.
- Compare values using relational operators.
- Combine conditions using logical operators.
- Assign and update variable values.
- Understand pre-increment and post-increment operations.
- Perform bitwise operations on integer values.
- Use the conditional (ternary) operator.
- Understand operator precedence and associativity.
- Identify common mistakes while using operators.
- Apply operators in practical C programs.

---

## 💡 Introduction to Operators

An **operator** is a symbol that instructs the compiler to perform a specific operation.

An **operand** is the value or variable on which an operator performs an operation.

### Example

```c
int result = 10 + 5;
```

**Understanding the expression:**

| Element | Description |
|---|---|
| `10` | First operand |
| `+` | Addition operator |
| `5` | Second operand |
| `result` | Variable storing the result |

**Result:** `15`

### 📌 Categories of C Operators

| Category | Purpose |
|---|---|
| Arithmetic | Performs mathematical calculations |
| Relational | Compares two values |
| Logical | Combines or reverses conditions |
| Assignment | Assigns or updates variable values |
| Increment/Decrement | Increases or decreases a value |
| Bitwise | Performs operations on individual bits |
| Conditional | Selects a value based on a condition |

---

## ➕ Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

### 📊 Operator Reference

| Operator | Name | Description | Example |
|:---:|---|---|:---:|
| `+` | Addition | Adds two values | `10 + 5 = 15` |
| `-` | Subtraction | Subtracts one value from another | `10 - 5 = 5` |
| `*` | Multiplication | Multiplies two values | `10 * 5 = 50` |
| `/` | Division | Divides one value by another | `10 / 5 = 2` |
| `%` | Modulus | Returns the remainder | `10 % 3 = 1` |

### 💻 Example Program

```c
#include <stdio.h>

int main() {
    int a = 17;
    int b = 5;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    return 0;
}
```

### 📤 Expected Output

```text
Addition: 22
Subtraction: 12
Multiplication: 85
Division: 3
Modulus: 2
```

### 💡 Important Concepts

**1. Integer Division**

When two integers are divided, C discards the fractional part.

```c
int result = 17 / 5;
printf("%d", result);
```

Output:

```text
3
```

**2. Floating-Point Division**

Use floating-point operands when you need a decimal result.

```c
float result = 17.0 / 5.0;
printf("%f", result);
```

Output:

```text
3.400000
```

**3. Modulus Operator**

The modulus operator `%` returns the remainder after integer division.

```c
int result = 17 % 5;
printf("%d", result);
```

Output:

```text
2
```

### ⚠️ Important Notes

- Integer division truncates the fractional part; it does not round.
- The modulus operator `%` requires integer operands.
- Division by zero results in undefined behavior.
- Use floating-point operands when decimal results are required.

---

## ⚖️ Relational Operators

Relational operators are used to compare two values.

In C, a relational expression evaluates to:

- `1` when the condition is true.
- `0` when the condition is false.

### 📊 Operator Reference

| Operator | Name | Description |
|:---:|---|---|
| `==` | Equal to | Checks whether two values are equal |
| `!=` | Not equal to | Checks whether two values are different |
| `>` | Greater than | Checks whether the left value is greater |
| `<` | Less than | Checks whether the left value is smaller |
| `>=` | Greater than or equal to | Checks whether the left value is greater than or equal |
| `<=` | Less than or equal to | Checks whether the left value is smaller than or equal |

### 💻 Example Program

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    return 0;
}
```

### 📤 Expected Output

```text
a == b: 0
a != b: 1
a > b: 1
a < b: 0
a >= b: 1
a <= b: 0
```

### 💡 Understanding `=` vs `==`

| Operator | Purpose | Example |
|:---:|---|---|
| `=` | Assigns a value | `int a = 10;` |
| `==` | Compares two values | `a == 10` |

**Assignment example:**

```c
int a = 10;
```

Assigns `10` to variable `a`.

**Comparison example:**

```c
int result = (a == 10);
```

Checks whether `a` is equal to `10`. The result is `1` if true.

### ⚠️ Important Notes

- Relational operators are commonly used in `if`, `else`, and loop conditions.
- A true relational expression evaluates to `1`; a false expression evaluates to `0`.
- Never confuse assignment (`=`) with equality comparison (`==`).

---

## 🔗 Logical Operators

Logical operators are used to combine multiple conditions or reverse a condition.

### 📊 Operator Reference

| Operator | Name | Description |
|:---:|---|---|
| `&&` | Logical AND | True when both conditions are true |
| `||` | Logical OR | True when at least one condition is true |
| `!` | Logical NOT | Reverses the logical value |

### 📋 Truth Table

| A | B | A `&&` B | A `||` B |
|:---:|:---:|:---:|:---:|
| 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 1 |

**Logical NOT:**

| A | `!A` |
|:---:|:---:|
| 0 | 1 |
| 1 | 0 |

### 💻 Example Program

```c
#include <stdio.h>

int main() {
    int age = 20;
    int hasID = 1;

    printf("Eligible: %d\n", age >= 18 && hasID == 1);
    printf("Condition: %d\n", age < 18 || hasID == 1);
    printf("Not eligible: %d\n", !(age >= 18));

    return 0;
}
```

### 📤 Expected Output

```text
Eligible: 1
Condition: 1
Not eligible: 0
```

### 💡 Understanding Logical Operators

**1. Logical AND (`&&`)**

Both conditions must be true.

```c
int result = (10 > 5 && 20 > 10);
```

Output: `1`

**2. Logical OR (`||`)**

At least one condition must be true.

```c
int result = (10 < 5 || 20 > 10);
```

Output: `1`

**3. Logical NOT (`!`)**

Reverses the logical value.

```c
int result = !(10 > 5);
```

Output: `0`

### ⚠️ Important Notes

- Logical operators are frequently used in decision-making statements.
- C treats zero as false and nonzero values as true in logical expressions.
- Logical AND and OR use short-circuit evaluation: the second operand may not be evaluated if the result is already determined.

---

## 📝 Assignment Operators

Assignment operators are used to assign values to variables or update their existing values.

### 📊 Operator Reference

| Operator | Example | Equivalent Expression |
|:---:|---|---|
| `=` | `a = 10` | Assigns 10 to `a` |
| `+=` | `a += 5` | `a = a + 5` |
| `-=` | `a -= 5` | `a = a - 5` |
| `*=` | `a *= 5` | `a = a * 5` |
| `/=` | `a /= 5` | `a = a / 5` |
| `%=` | `a %= 5` | `a = a % 5` |

### 💻 Example Program

```c
#include <stdio.h>

int main() {
    int a = 20;

    printf("Initial value: %d\n", a);

    a += 5;
    printf("After += 5: %d\n", a);

    a -= 3;
    printf("After -= 3: %d\n", a);

    a *= 2;
    printf("After *= 2: %d\n", a);

    a /= 4;
    printf("After /= 4: %d\n", a);

    a %= 4;
    printf("After %%= 4: %d\n", a);

    return 0;
}
```

### 📤 Expected Output

```text
Initial value: 20
After += 5: 25
After -= 3: 22
After *= 2: 44
After /= 4: 11
After %= 4: 3
```

### 💡 Understanding Compound Assignment

Instead of writing:

```c
int a = 10;
a = a + 5;
```

You can write:

```c
int a = 10;
a += 5;
```

Both statements update `a` to `15`.

### ⚠️ Important Notes

- Assignment operators update the value stored in a variable.
- The right-hand expression is evaluated and assigned to the left-hand variable.
- Integer division during compound assignment follows integer division rules.

---

## 🔄 Increment and Decrement Operators

Increment and decrement operators are used to increase or decrease a variable's value by one.

### 📊 Operator Reference

| Operator | Name | Description |
|:---:|---|---|
| `++a` | Pre-increment | Increments first, then uses the value |
| `a++` | Post-increment | Uses the value first, then increments |
| `--a` | Pre-decrement | Decrements first, then uses the value |
| `a--` | Post-decrement | Uses the value first, then decrements |

### 💻 Example Program

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b;

    b = ++a;

    printf("Pre-increment:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = 5;
    b = a++;

    printf("\nPost-increment:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
```

### 📤 Expected Output

```text
Pre-increment:
a = 6
b = 6

Post-increment:
a = 6
b = 5
```

### 💡 Understanding Pre and Post Operations

**1. Pre-increment (`++a`)**

The variable is incremented before its value is used.

```c
int a = 5;
int b = ++a;
```

Result:

- `a = 6`
- `b = 6`

**2. Post-increment (`a++`)**

The original value is used first, and then the variable is incremented.

```c
int a = 5;
int b = a++;
```

Result:

- `a = 6`
- `b = 5`

**3. Pre-decrement (`--a`)**

```c
int a = 5;
int b = --a;
```

Result:

- `a = 4`
- `b = 4`

**4. Post-decrement (`a--`)**

```c
int a = 5;
int b = a--;
```

Result:

- `a = 4`
- `b = 5`

### ⚠️ Important Notes

- Increment increases a value by one.
- Decrement decreases a value by one.
- Pre-increment and post-increment produce different results when used inside expressions.
- Avoid modifying the same variable multiple times within one expression because it can lead to undefined behavior.

---

## 💻 Bitwise Operators

Bitwise operators perform operations on individual bits of integer values.

Computers represent integer values using binary digits (`0` and `1`).

### 📊 Operator Reference

| Operator | Name | Description |
|:---:|---|---|
| `&` | Bitwise AND | Sets a bit to 1 when both corresponding bits are 1 |
| `|` | Bitwise OR | Sets a bit to 1 when either corresponding bit is 1 |
| `^` | Bitwise XOR | Sets a bit to 1 when corresponding bits are different |
| `~` | Bitwise NOT | Reverses every bit |
| `<<` | Left Shift | Shifts bits to the left |
| `>>` | Right Shift | Shifts bits to the right |

### 📋 Binary Representation

Consider:

```text
a = 5  = 0101
b = 3  = 0011
```

### 📊 Bitwise Operations

| Operation | Binary Result | Decimal Result |
|---|:---:|:---:|
| `a & b` | `0001` | 1 |
| `a | b` | `0111` | 7 |
| `a ^ b` | `0110` | 6 |

### 💻 Example Program

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;

    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT: %d\n", ~a);
    printf("Left Shift: %d\n", a << 1);
    printf("Right Shift: %d\n", a >> 1);

    return 0;
}
```

### 📤 Expected Output

On a typical system using 32-bit `int` and two's-complement representation:

```text
Bitwise AND: 1
Bitwise OR: 7
Bitwise XOR: 6
Bitwise NOT: -6
Left Shift: 10
Right Shift: 2
```

### 💡 Understanding Shift Operators

**1. Left Shift (`<<`)**

Shifts bits towards the left.

```c
int a = 5;
printf("%d", a << 1);
```

Binary:

```text
00000101
00001010
```

Output: `10`

**2. Right Shift (`>>`)**

Shifts bits towards the right.

```c
int a = 8;
printf("%d", a >> 1);
```

Binary:

```text
00001000
00000100
```

Output: `4`

### 📌 Additional Shift Examples

| Expression | Result |
|---|:---:|
| `8 << 1` | 16 |
| `8 << 2` | 32 |
| `8 >> 1` | 4 |
| `8 >> 2` | 2 |

### ⚠️ Important Notes

- Bitwise operators work on integer types.
- Bitwise AND (`&`) is different from logical AND (`&&`).
- Bitwise OR (`|`) is different from logical OR (`||`).
- The result of bitwise NOT depends on the integer representation and type.
- Shift operations have restrictions on shift counts and signed values; avoid shifting by a negative count or by a count greater than or equal to the width of the promoted left operand.

---

## ❓ Conditional Operator

The conditional operator, also known as the **ternary operator**, is used to select one of two expressions based on a condition.

It is a shorthand alternative to a simple `if-else` statement.

### 📌 Syntax

```c
condition ? expression_if_true : expression_if_false;
```

### 💻 Example Program

```c
#include <stdio.h>

int main() {
    int a = 15;
    int b = 10;

    int maximum = (a > b) ? a : b;

    printf("Maximum value: %d\n", maximum);

    return 0;
}
```

### 📤 Expected Output

```text
Maximum value: 15
```

### 💡 Understanding the Expression

```c
int maximum = (a > b) ? a : b;
```

- If `a > b` is true, the value of `a` is selected.
- Otherwise, the value of `b` is selected.
- The selected value is stored in `maximum`.

### 📌 Another Example: Even or Odd

```c
#include <stdio.h>

int main() {
    int number = 8;

    (number % 2 == 0)
        ? printf("Even number")
        : printf("Odd number");

    return 0;
}
```

### 📤 Expected Output

```text
Even number
```

### ⚠️ Important Notes

- The conditional operator uses three operands.
- It is the only operator in C that uses three operands.
- Use it for simple conditional expressions.
- Avoid deeply nested ternary expressions because they can make code difficult to read.

---

## 📊 Operator Precedence and Associativity

When an expression contains multiple operators, C follows rules called **operator precedence** and **associativity**.

**Operator precedence** determines which operator is evaluated first.

**Associativity** determines the grouping direction when operators have the same precedence.

### 📌 Example 1: Multiplication Before Addition

```c
int result = 10 + 5 * 2;
```

Calculation:

```text
10 + 5 * 2
10 + 10
20
```

Output: `20`

### 📌 Example 2: Left-to-Right Associativity

```c
int result = 20 / 5 * 2;
```

Calculation:

```text
20 / 5 * 2
4 * 2
8
```

Output: `8`

### 📊 Operator Precedence Reference

The following table lists common C operators from higher precedence to lower precedence.

| Priority | Operators | Category | Associativity |
|:---:|---|---|---|
| 1 | `()` `[]` `.` `->` `x++` `x--` | Postfix | Left to Right |
| 2 | `++x` `--x` `!` `~` `+` `-` `*` `&` `sizeof` | Unary | Right to Left |
| 3 | `*` `/` `%` | Multiplicative | Left to Right |
| 4 | `+` `-` | Additive | Left to Right |
| 5 | `<<` `>>` | Shift | Left to Right |
| 6 | `<` `<=` `>` `>=` | Relational | Left to Right |
| 7 | `==` `!=` | Equality | Left to Right |
| 8 | `&` | Bitwise AND | Left to Right |
| 9 | `^` | Bitwise XOR | Left to Right |
| 10 | `|` | Bitwise OR | Left to Right |
| 11 | `&&` | Logical AND | Left to Right |
| 12 | `||` | Logical OR | Left to Right |
| 13 | `?:` | Conditional | Right to Left |
| 14 | `=` `+=` `-=` `*=` `/=` `%=` `&=` `|=` `^=` `<<=` `>>=` | Assignment | Right to Left |
| 15 | `,` | Comma | Left to Right |

### 💡 Understanding Associativity

**Left-to-Right Associativity**

```c
int result = 20 / 5 * 2;
```

The expression is grouped as:

```c
(20 / 5) * 2
```

Result: `8`

**Right-to-Left Associativity**

```c
int a, b, c;

a = b = c = 10;
```

The assignments are grouped from right to left:

```c
a = (b = (c = 10));
```

All three variables receive the value `10`.

### ⚠️ Important Notes

- Parentheses can be used to control the grouping of expressions.
- Multiplication, division, and modulus have higher precedence than addition and subtraction.
- Relational operators have higher precedence than equality operators.
- Bitwise AND, XOR, and OR have separate precedence levels.
- Logical AND has higher precedence than logical OR.
- Precedence and associativity determine grouping, not necessarily the order in which every operand is evaluated.

---

## ⚠️ Common Mistakes

| Mistake | Incorrect Example | Correct Approach |
|---|---|---|
| Confusing assignment and comparison | `if (a = 10)` | Use `if (a == 10)` when comparing |
| Incorrect integer division expectation | `17 / 5` gives `3.4` | Use `17.0 / 5.0` |
| Division by zero | `a / 0` | Check the denominator before division |
| Confusing logical and bitwise operators | Using `&` instead of `&&` | Use `&&` for logical conditions |
| Incorrect modulus usage | `5.5 % 2` | Use integer operands |
| Misunderstanding post-increment | Assuming `a++` increments before use | Remember that the old value is used first |
| Ignoring precedence | `10 + 5 * 2` | Use parentheses when grouping needs to be explicit |

### 💡 Best Practices

- Use meaningful variable names.
- Add parentheses to make complex expressions easier to understand.
- Avoid unnecessarily complicated expressions.
- Use logical operators for conditions.
- Use bitwise operators only when bit-level operations are required.
- Keep increment and decrement operations clear and readable.
- Always check for division by zero.

---

## 🧠 Practice Exercises

Test your understanding of C operators with the following questions.

### 🟢 Level 1 — Basic

**Exercise 1:** Write a program to perform addition, subtraction, multiplication, division, and modulus on two integers.

**Exercise 2:** Write a program to check whether two numbers are equal or different.

**Exercise 3:** Write a program to check whether a number is greater than, less than, or equal to zero.

### 🟡 Level 2 — Intermediate

**Exercise 4:** Write a program to check whether a person is eligible to vote using a logical operator.

**Exercise 5:** Write a program to demonstrate all compound assignment operators.

**Exercise 6:** Write a program to demonstrate the difference between pre-increment and post-increment.

**Exercise 7:** Write a program to check whether a number is even or odd using the modulus operator.

### 🔴 Level 3 — Advanced

**Exercise 8:** Write a program to find the largest of two numbers using the conditional operator.

**Exercise 9:** Write a program to perform bitwise AND, OR, XOR, and NOT operations.

**Exercise 10:** Predict the output of the following expressions before executing them.

```c
int a = 10;
int b = 5;
int c = 2;

printf("%d\n", a + b * c);
printf("%d\n", (a + b) * c);
printf("%d\n", a > b && b > c);
printf("%d\n", a == 10 || b == 0);
```

### 📌 Practice Guidelines

- Try solving each exercise independently.
- Write the program before checking the solution.
- Compile and execute your programs using GCC.
- Understand why the output is produced.
- Keep your practice programs organized inside the appropriate module folder.

---

## 💻 Practical Programs

The following practical C programs are included in this module.

| No. | Program | Concepts Covered |
|---:|---|---|
| 01 | `01-arithmetic-operators.c` | Arithmetic operators |
| 02 | `02-relational-operators.c` | Relational operators |
| 03 | `03-logical-operators.c` | Logical operators |
| 04 | `04-assignment-operators.c` | Assignment and compound assignment |
| 05 | `05-increment-decrement.c` | Pre-increment, post-increment, pre-decrement and post-decrement |
| 06 | `06-bitwise-operators.c` | Bitwise operators and shifts |
| 07 | `07-conditional-operator.c` | Conditional operator and even/odd checks |
| 08 | `08-operator-precedence.c` | Operator precedence and associativity |
| 09 | `09-modulus-even-odd.c` | Modulus operator and even/odd checks |
| 10 | `10-operator-practice.c` | Combined operator practice |

**Directory:** `02-Operators/programs/`

All ten source files have been created. Compilation, execution and practical verification will be completed during revision.

---

## ✅ Module Completion Checklist

Use this checklist to track your learning progress.

- [ ] Understand operators and operands.
- [ ] Learn arithmetic operators.
- [ ] Learn relational operators.
- [ ] Learn logical operators.
- [ ] Learn assignment operators.
- [ ] Understand increment and decrement operators.
- [ ] Learn bitwise operators.
- [ ] Understand the conditional operator.
- [ ] Learn operator precedence and associativity.
- [ ] Review common mistakes.
- [ ] Complete the practice exercises.
- [ ] Compile and execute practice programs independently.

---

## 📖 Key Takeaways

- Operators perform specific operations on operands.
- Arithmetic operators perform mathematical calculations.
- Relational operators compare values.
- Logical operators combine or reverse conditions.
- Assignment operators update variable values.
- Increment and decrement operators change values by one.
- Bitwise operators manipulate individual bits.
- The conditional operator provides a compact conditional expression.
- Operator precedence and associativity determine how expressions are grouped.

## 🔗 Module Navigation

<p align="center">
  ⬅️ <strong>Previous Module</strong>
  <br>
  <a href="../01-Basics/README.md">📘 Module 01 — C Programming Basics</a>
</p>

<p align="center">
  🏠 <a href="../README.md">C Programming — Main Repository</a>
</p>

<p align="center">
  <strong>Next Module</strong> ➡️
  <br>
  <a href="../03-Control-Statements/README.md">📙 Module 03 — Control Statements</a>
</p>

---

<p align="center">
  <strong>🎓 End of Module 02 — C Programming Operators</strong>
</p>

<p align="center">
  Learn • Practice • Implement • Improve
</p>

---