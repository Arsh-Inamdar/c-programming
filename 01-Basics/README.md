
# 📘 C Programming — Basics

<p align="center">
  <strong>MODULE 01 · C PROGRAMMING LEARNING SERIES</strong>
</p>

<p align="center">
  A beginner-friendly guide to understanding the fundamentals of the C programming language.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language C">
  <img src="https://img.shields.io/badge/Level-Beginner-green.svg" alt="Beginner Level">
  <img src="https://img.shields.io/badge/Module-01-orange.svg" alt="Module 01">
</p>

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
13. [🧠 Key Takeaways](#-key-takeaways)
14. [✅ Module Completion Checklist](#-module-completion-checklist)
15. [🔗 Module Navigation](#-module-navigation)

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

### 💻 Example

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

### 📌 Important Notes

- Every C program requires a `main()` function as its entry point.
- The `stdio.h` header provides declarations for standard input/output functions.
- C statements generally end with a semicolon.
- C is case-sensitive. For example, `main` and `Main` are different identifiers.

---

## 📦 3. Variables

A variable is a named memory location used to store data.

### 📝 Syntax

```c
data_type variable_name = value;
```

### 💻 Example

```c
int age = 20;
float percentage = 85.5f;
char grade = 'A';
```

### 📋 Rules for Naming Variables

- Names can contain letters, digits, and underscores.
- Names cannot begin with a digit.
- Spaces are not allowed.
- C keywords cannot be used as variable names.
- Variable names are case-sensitive.

### 🔄 Types of Variable Operations

| Operation | Example |
|---|---|
| Declaration | `int age;` |
| Initialization | `int age = 20;` |
| Assignment | `age = 21;` |

### 📌 Important Notes

- A variable must be declared before it is used.
- Its data type determines the kind of value it can store.
- A variable's value can change during program execution.

---

## 🔢 4. Data Types

Data types specify the kind of value a variable can store.

### 📊 Basic Data Types

| Data Type | Purpose | Example |
|---|---|---|
| `int` | Integer values | `25` |
| `float` | Decimal values | `10.5f` |
| `double` | Higher-precision decimal values | `25.678` |
| `char` | Single character | `'A'` |

### 💻 Example

```c
int age = 20;
float percentage = 85.5f;
double salary = 25000.75;
char grade = 'A';
```

### 📌 Important Notes

- `int` stores integer values.
- `float` stores single-precision floating-point values.
- `double` stores double-precision floating-point values.
- `char` stores a character value.
- The actual size of a data type depends on the compiler and platform.

---

## ⌨️ 5. Input and Output

C uses functions from `stdio.h` for basic input and output operations.

### 🖥️ printf()

The `printf()` function displays output on the screen.

**Syntax:**

```c
printf("format string", variables);
```

**Example:**

```c
printf("Welcome to C Programming");
```

**Output:**

```text
Welcome to C Programming
```

### ⌨️ scanf()

The `scanf()` function accepts input from the user.

**Syntax:**

```c
scanf("format string", &variable);
```

**Example:**

```c
int age;

printf("Enter your age: ");
scanf("%d", &age);
```

**Sample Input:**

```text
Enter your age: 20
```

The address operator `&` passes the variable's memory address to `scanf()`.

### 📌 Important Notes

- `printf()` is used to display information.
- `scanf()` is used to accept input.
- The address operator `&` is generally required for ordinary scalar variables passed to `scanf()`.
- Always use a format specifier that matches the variable's type.

---

## 🔣 6. Format Specifiers

Format specifiers tell input/output functions how to interpret values.

### 📊 Common Format Specifiers

| Specifier | Data Type | Common Usage |
|---|---|---|
| `%d` | `int` | Integer |
| `%f` | `float` | Decimal |
| `%lf` | `double` | Input using `scanf()` |
| `%c` | `char` | Single character |
| `%s` | Character array | String |

### 💻 Example

```c
#include <stdio.h>

int main(void)
{
    int number = 10;

    printf("Number: %d\n", number);

    return 0;
}
```

**Output:**

```text
Number: 10
```

### 📌 Important Notes

- In `printf()`, `%f` is used to display a `double` value as well.
- In `scanf()`, `%f` is used for `float` and `%lf` is used for `double`.
- `%c` is used for a single character.
- `%s` is used for a string stored in a character array.

---

## 🔒 7. Constants

A constant is a value that should not be modified during program execution.

The `const` keyword can be used to declare a constant.

### 💻 Example

```c
#include <stdio.h>

int main(void)
{
    const float PI = 3.14159f;

    printf("Value of PI: %f\n", PI);

    return 0;
}
```

**Output:**

```text
Value of PI: 3.141590
```

### 📌 Important Notes

- A constant should be initialized when it is declared.
- Its value cannot be modified through that constant identifier after initialization.
- Constants help make programs easier to understand and maintain.

---

## 💬 8. Comments

Comments explain the purpose of code and are ignored by the compiler.

C supports two types of comments.

### 📝 Single-line Comment

A single-line comment begins with `//`.

```c
// This is a single-line comment
```

### 📝 Multi-line Comment

A multi-line comment begins with `/*` and ends with `*/`.

```c
/*
This is a
multi-line comment.
*/
```

### 📌 Important Notes

- Comments improve code readability.
- They help explain complex logic.
- Comments are not executed as program statements.
- Multi-line comments cannot be nested in standard C.

---

## ⚙️ 9. Compilation and Execution

C source code must be compiled before it can be executed.

GCC is a commonly used C compiler.

### 🔧 Step 1: Compile

From the repository root directory:

```bash
gcc -Wall -Wextra -std=c11 -pedantic 01-Basics/programs/01-hello-world.c -o hello_world.exe
```

This command compiles the source file and creates an executable file.

### ▶️ Step 2: Execute in Git Bash

```bash
./hello_world.exe
```

### 🐧 Step 3: Execute on Linux or macOS

Compile the program using GCC:

```bash
gcc -Wall -Wextra -std=c11 -pedantic 01-Basics/programs/01-hello-world.c -o hello_world
```

Execute it:

```bash
./hello_world
```

### 📂 Practical Programs

The source-code programs for this module are organized in the `programs/` directory.

| No. | Program | Source File |
|:---:|---|---|
| 01 | Hello World | `programs/01-hello-world.c` |
| 02 | Program Structure | `programs/02-program-structure.c` |
| 03 | Variables and Data Types | `programs/03-variables-and-data-types.c` |
| 04 | Input and Output | `programs/04-input-and-output.c` |
| 05 | Format Specifiers | `programs/05-format-specifiers.c` |
| 06 | Constants | `programs/06-constants.c` |
| 07 | Comments | `programs/07-comments.c` |

All seven practical programs for this module are available in the `programs/` directory.

### 📌 Important Notes

- `.c` is the usual extension for C source files.
- GCC converts source code into an executable program.
- The `-o` option specifies the output executable name.
- Compilation errors must be corrected before the program can run.
- The executable file extension depends on the operating system.

---

## ⚠️ 10. Common Programming Errors

| Error | Explanation |
|---|---|
| Syntax Error | Violation of C language syntax |
| Compilation Error | Error detected during compilation |
| Runtime Error | Error occurring while the program executes |
| Logical Error | Program runs but produces an incorrect result |

### 🚫 Common Mistakes to Avoid

- Forgetting semicolons.
- Using an undeclared variable.
- Using an incorrect format specifier.
- Forgetting `&` when using `scanf()` with ordinary scalar variables.
- Using single quotes for strings instead of double quotes.
- Writing `Printf` instead of `printf`.
- Forgetting to include the required header file.

---

## 📝 11. Practice Exercises

Use these exercises to test your understanding of the fundamentals.

### 🟢 Beginner Level

1. Write a program to print your name.
2. Display your college name.
3. Declare variables of `int`, `float`, `double`, and `char` types.
4. Accept an integer from the user and display it.

### 🟡 Intermediate Level

5. Accept two numbers and display their values.
6. Calculate the area of a rectangle.
7. Declare a constant and display its value.

---

## 🧠 Key Takeaways

- C is a general-purpose procedural programming language.
- Every standard hosted C program begins execution from `main()`.
- Variables store data in memory.
- Data types define the kind of values variables can hold.
- `printf()` displays output, while `scanf()` accepts input.
- Format specifiers connect input/output operations with data types.
- Constants represent values that should not be modified.
- Comments make code easier to understand.
- GCC compiles C source code into executable programs.

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
- [ ] Revise the key takeaways.

---

## 🔗 Module Navigation

| Navigation | Resource |
|---|---|
| 🏠 Main Repository | [Back to C Programming README](../README.md) |
| ➡️ Next Module | [02 - Operators](../02-Operators/README.md) |

---

<p align="center">
  <strong>Keep Learning. Keep Practising. Keep Building. 💻</strong>
</p>

<p align="center">
  <sub>MODULE 01 · C PROGRAMMING LEARNING SERIES</sub>
</p>
