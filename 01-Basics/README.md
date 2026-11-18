# 01 - C Programming Basics

This module introduces the fundamental concepts of the C programming language. It provides the foundation required for writing, compiling, debugging, and executing C programs.

## Learning Objectives

After completing this module, you should be able to:

- Understand the C programming language and its features.
- Understand the basic structure of a C program.
- Write, compile, and execute a C program.
- Use variables, constants, and data types.
- Perform basic input and output operations.
- Understand comments and format specifiers.
- Identify and correct common programming errors.

## 1. Introduction to C

C is a general-purpose, procedural programming language developed by Dennis Ritchie at Bell Laboratories in the early 1970s.

### Features of C

- Simple and structured programming language.
- Fast and efficient execution.
- Portable across different platforms.
- Supports pointers and direct memory access.
- Rich set of operators and standard library functions.
- Suitable for system and application programming.

### Applications of C

- Operating systems
- Embedded systems
- Device drivers
- Compilers
- Database systems
- System utilities

## 2. Structure of a C Program

A basic C program contains:

1. Header files
2. Main function
3. Variable declarations
4. Executable statements
5. Return statement

Example:

\`\`\`c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!");

    return 0;
}
\`\`\`

### Explanation

- `#include <stdio.h>` includes standard input/output functions.
- `int main(void)` defines the main function.
- `printf()` displays output.
- `return 0` indicates successful program termination.
- Semicolons terminate C statements.

## 3. Variables

A variable is a named memory location used to store data.

Syntax:

\`\`\`c
data_type variable_name = value;
\`\`\`

Example:

\`\`\`c
int age = 20;
float percentage = 85.5f;
char grade = 'A';
\`\`\`

### Rules for Naming Variables

- Names can contain letters, digits, and underscores.
- Names cannot begin with a digit.
- Spaces are not allowed.
- C keywords cannot be used as variable names.
- Variable names are case-sensitive.

## 4. Data Types

Data types specify the kind of value a variable can store.

| Data Type | Purpose | Example |
|---|---|---|
| int | Integer values | 25 |
| float | Decimal values | 10.5f |
| double | Higher-precision decimal values | 25.678 |
| char | Single character | 'A' |

The actual size of a data type depends on the compiler and platform.

## 5. Input and Output

C uses functions from `stdio.h` for basic input and output.

### printf()

Displays output.

\`\`\`c
printf("Welcome to C Programming");
\`\`\`

### scanf()

Accepts input from the user.

\`\`\`c
int age;
scanf("%d", &age);
\`\`\`

The address operator `&` is used here to pass the variable's address to `scanf()`.

## 6. Format Specifiers

| Specifier | Data Type |
|---|---|
| %d | int |
| %f | float |
| %lf | double in scanf |
| %c | char |
| %s | String |

Example:

\`\`\`c
int number = 10;
printf("%d", number);
\`\`\`

## 7. Constants

A constant is a value that should not be modified during program execution.

Example:

\`\`\`c
const float PI = 3.14159f;
\`\`\`

## 8. Comments

Comments explain the purpose of code and are ignored by the compiler.

Single-line comment:

\`\`\`c
// This is a single-line comment
\`\`\`

Multi-line comment:

\`\`\`c
/*
This is a
multi-line comment.
*/
\`\`\`

## 9. Compilation and Execution

Using GCC:

Compile:

\`\`\`bash
gcc hello_world.c -o hello_world
\`\`\`

Run in Git Bash:

\`\`\`bash
./hello_world.exe
\`\`\`

Run on Linux or macOS:

\`\`\`bash
./hello_world
\`\`\`

## 10. Common Programming Errors

- Syntax errors: Violations of C language syntax.
- Runtime errors: Errors that occur while a program is running.
- Logical errors: The program runs but produces incorrect results.
- Compilation errors: Errors detected during compilation.

## 11. Practice Exercises

1. Write a program to print your name.
2. Write a program to display your college name.
3. Declare variables of int, float, double, and char types.
4. Accept an integer from the user and display it.
5. Accept two numbers and display their values.
6. Calculate and display the area of a rectangle.
7. Declare a constant and display its value.

## Module Completion Checklist

- [ ] Understand the introduction and features of C.
- [ ] Understand the structure of a C program.
- [ ] Understand variables and data types.
- [ ] Understand input and output functions.
- [ ] Learn format specifiers and constants.
- [ ] Understand comments and common errors.
- [ ] Compile and execute the first C program.
- [ ] Complete the practice exercises.

## Next Module

[02 - Operators](../02-Operators/README.md)
