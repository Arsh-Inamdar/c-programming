# 📘 01 - C Programming Basics

> A beginner-friendly guide to understanding the fundamentals of the C programming language.

Welcome to the first module of the C Programming repository! This module introduces the essential concepts required to understand, write, compile, and execute C programs.

---

## 📚 Table of Contents

1. [🎯 Learning Objectives](#-learning-objectives)
2. [💡 Introduction to C](#-1-introduction-to-c)
3. [🏗️ Structure of a C Program](#️-2-structure-of-a-c-program)
4. [📦 Variables](#-3-variables)
5. [🔢 Data Types](#-4-data-types)
6. [⌨️ Input and Output](#️-5-input-and-output)
7. [🔣 Format Specifiers](#-6-format-specifiers)
8. [🔒 Constants](#-7-constants)
9. [💬 Comments](#-8-comments)
10. [⚙️ Compilation and Execution](#️-9-compilation-and-execution)
11. [⚠️ Common Programming Errors](#️-10-common-programming-errors)
12. [📝 Practice Exercises](#-11-practice-exercises)
13. [✅ Module Completion Checklist](#-module-completion-checklist)

---

## 🎯 Learning Objectives

After completing this module, you should be able to:

- Understand the C programming language and its features.
- Explain the basic structure of a C program.
- Understand variables, constants, and data types.
- Perform basic input and output operations.
- Identify and use format specifiers.
- Understand comments and common programming errors.
- Compile and execute a basic C program.

---

## 💡 1. Introduction to C

C is a general-purpose, procedural programming language developed by Dennis Ritchie at Bell Laboratories in the early 1970s.

It is widely used for developing efficient software and system-level applications.

### ✨ Features of C

- Simple and structured programming language.
- Fast and efficient execution.
- Portable across different platforms.
- Supports pointers and direct memory access.
- Provides a rich collection of operators and standard library functions.
- Suitable for system and application programming.

### 🌍 Applications of C

- Operating systems
- Embedded systems
- Device drivers
- Compilers
- Database systems
- System utilities

---

## 🏗️ 2. Structure of a C Program

A basic C program generally contains:

1. Header files
2. Main function
3. Variable declarations
4. Executable statements
5. Return statement

### Example

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!");

    return 0;
}
```

### 🔍 Explanation

| Component | Purpose |
|---|---|
| `#include <stdio.h>` | Includes standard input/output declarations |
| `int main(void)` | Defines the main function |
| `printf()` | Displays output |
| `return 0;` | Indicates successful program termination |
| `;` | Terminates a statement |

---

## 📦 3. Variables

A variable is a named memory location used to store data.

### Syntax

```c
data_type variable_name = value;
```

### Example

```c
int age = 20;
float percentage = 85.5f;
char grade = 'A';
```

### 📝 Rules for Naming Variables

- Names can contain letters, digits, and underscores.
- Names cannot begin with a digit.
- Spaces are not allowed.
- C keywords cannot be used as variable names.
- Variable names are case-sensitive.

### Types of Variable Operations

| Operation | Example |
|---|---|
| Declaration | `int age;` |
| Initialization | `int age = 20;` |
| Assignment | `age = 21;` |

---

## 🔢 4. Data Types

Data types specify the kind of value a variable can store.

| Data Type | Purpose | Example |
|---|---|---|
| `int` | Integer values | `25` |
| `float` | Decimal values | `10.5f` |
| `double` | Higher-precision decimal values | `25.678` |
| `char` | Single character | `'A'` |

📌 The actual size of a data type depends on the compiler and platform.

---

## ⌨️ 5. Input and Output

C uses functions from `stdio.h` for basic input and output operations.

### 🖥️ printf()

The `printf()` function displays output.

```c
printf("Welcome to C Programming");
```

### ⌨️ scanf()

The `scanf()` function accepts input from the user.

```c
int age;
scanf("%d", &age);
```

The address operator `&` passes the variable's memory address to `scanf()`.

---

## 🔣 6. Format Specifiers

Format specifiers tell input/output functions how to interpret values.

| Specifier | Data Type | Common Usage |
|---|---|---|
| `%d` | `int` | Integer |
| `%f` | `float` | Decimal |
| `%lf` | `double` | Input using `scanf()` |
| `%c` | `char` | Single character |
| `%s` | Character array | String |

📌 For `printf()`, `%f` is used to display a `double` value as well.

### Example

```c
int number = 10;
printf("Number: %d", number);
```

---

## 🔒 7. Constants

A constant is a value that should not be modified during program execution.

The `const` keyword can be used to declare a constant.

### Example

```c
const float PI = 3.14159f;
```

---

## 💬 8. Comments

Comments explain the purpose of code and are ignored by the compiler.

### Single-line Comment

```c
// This is a single-line comment
```

### Multi-line Comment

```c
/*
This is a
multi-line comment.
*/
```

---

## ⚙️ 9. Compilation and Execution

C source code must be compiled before it can be executed.

GCC is a commonly used C compiler.

### Step 1: Compile

From the repository root directory:

```bash
gcc 01-Basics/hello_world.c -o 01-Basics/hello_world.exe
```

### Step 2: Execute in Git Bash

```bash
./01-Basics/hello_world.exe
```

### Step 3: Execute on Linux or macOS

```bash
./hello_world
```

📌 The Linux/macOS command assumes the executable was compiled in the current directory with that name.

---

## ⚠️ 10. Common Programming Errors

| Error | Explanation |
|---|---|
| Syntax Error | Violation of C language syntax |
| Compilation Error | Error detected during compilation |
| Runtime Error | Error occurring while the program executes |
| Logical Error | Program runs but produces an incorrect result |

---

## 📝 11. Practice Exercises

Use these exercises to test your understanding of the fundamentals.

### Beginner Level

1. Write a program to print your name.
2. Display your college name.
3. Declare variables of `int`, `float`, `double`, and `char` types.
4. Accept an integer from the user and display it.

### Intermediate Level

5. Accept two numbers and display their values.
6. Calculate the area of a rectangle.
7. Declare a constant and display its value.

---

## ✅ Module Completion Checklist

- [ ] Understand the introduction and features of C.
- [ ] Understand the structure of a C program.
- [ ] Understand variables and their operations.
- [ ] Understand fundamental data types.
- [ ] Understand input and output functions.
- [ ] Learn format specifiers.
- [ ] Understand constants and comments.
- [ ] Understand compilation and execution.
- [ ] Identify common programming errors.
- [ ] Review the practice exercises.

---

## 🚀 What's Next?

The next module introduces operators and expressions in C.

**Next Module:** [02 - Operators](../02-Operators/README.md)

---

## 🔗 Repository Navigation

- [🏠 Back to Main README](../README.md)
- [➡️ Next: Operators](../02-Operators/README.md)

---

<p align="center">
  <b>Keep Learning. Keep Practising. Keep Building. 💻</b>
</p>
