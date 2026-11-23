
# 📘 Module 06 — Functions in C

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-green.svg)
![Module](https://img.shields.io/badge/Module-06%20of%2010-orange.svg)
![Topic](https://img.shields.io/badge/Topic-Functions-purple.svg)

## 📖 Introduction

Functions are one of the most important concepts in C programming. They allow programmers to divide a large program into smaller, manageable and reusable blocks of code.

Instead of writing the same instructions repeatedly, we can create a function once and call it whenever required.

In this module, we will learn how to declare, define and call functions, work with parameters and return values, understand recursion, and explore variable scope and storage classes.

By the end of this module, you will understand how to organize C programs using functions and write structured, reusable code.

---

## 📑 Table of Contents

1. [Introduction to Functions](#1-introduction-to-functions)
2. [Need and Advantages of Functions](#2-need-and-advantages-of-functions)
3. [Types of Functions](#3-types-of-functions)
4. [Library Functions](#4-library-functions)
5. [User-Defined Functions](#5-user-defined-functions)
6. [Function Declaration (Prototypes)](#6-function-declaration-prototypes)
7. [Function Definition](#7-function-definition)
8. [Function Calling](#8-function-calling)
9. [Function Arguments and Parameters](#9-function-arguments-and-parameters)
10. [Return Types and Return Statements](#10-return-types-and-return-statements)
11. [Types of User-Defined Functions](#11-types-of-user-defined-functions)
12. [Call by Value](#12-call-by-value)
13. [Call by Reference Using Pointers](#13-call-by-reference-using-pointers)
14. [Recursion](#14-recursion)
15. [Scope and Lifetime of Variables](#15-scope-and-lifetime-of-variables)
16. [Storage Classes](#16-storage-classes)
17. [Common Mistakes](#17-common-mistakes)
18. [Best Practices](#18-best-practices)
19. [Practice Exercises](#19-practice-exercises)
20. [Key Takeaways](#20-key-takeaways)

---

## 🎯 Learning Objectives

After completing this module, you will be able to:

- Understand the purpose and importance of functions in C.
- Differentiate between library and user-defined functions.
- Declare, define and call functions.
- Understand function prototypes and their importance.
- Work with function parameters and arguments.
- Understand return types and return statements.
- Implement all four common categories of user-defined functions.
- Differentiate between call by value and pointer-based reference-style operations.
- Understand and implement recursion.
- Identify local, global and block-scope variables.
- Understand the scope and lifetime of variables.
- Explain and use C storage classes.
- Write modular and reusable C programs.

---

# 1. Introduction to Functions

A function is a named block of code that performs a specific task.

A function can accept input, process data and return a result to the calling part of the program.

Functions help divide a program into smaller logical sections.

### 1.1 Basic Syntax

```c
return_type function_name(parameters)
{
    // Statements
}
```

**Explanation:**

| Component | Description |
|---|---|
| Return type | Specifies the type of value returned by the function |
| Function name | Identifies the function |
| Parameters | Receive input values from the caller |
| Function body | Contains the statements to execute |

### 1.2 Simple Function Example

```c
#include <stdio.h>

void greet()
{
    printf("Welcome to C Programming!\n");
}

int main()
{
    greet();

    return 0;
}
```

**Output:**

```text
Welcome to C Programming!
```

**Explanation:**

- `greet()` is a user-defined function.
- `void` indicates that the function does not return a value.
- `main()` calls the `greet()` function.
- The statements inside `greet()` execute when it is called.

### 1.3 Function Execution Flow

A typical function execution follows these steps:

1. Program execution begins from `main()`.
2. The calling function invokes another function.
3. Control transfers to the called function.
4. The called function executes its statements.
5. Control returns to the calling function when execution finishes or a return statement is encountered.

### 1.4 Function Flow Example

```c
#include <stdio.h>

void display()
{
    printf("Inside display function\n");
}

int main()
{
    printf("Inside main function\n");

    display();

    printf("Back inside main function\n");

    return 0;
}
```

**Output:**

```text
Inside main function
Inside display function
Back inside main function
```

**Important Note:**

Every standard C program starts execution from the `main()` function. Other functions are executed when they are called, directly or indirectly.

---

# 2. Need and Advantages of Functions

Functions are used to make programs easier to write, understand, test and maintain.

### 2.1 Need for Functions

Consider a program that needs to calculate the square of several numbers.

Without functions, the same calculation may need to be written repeatedly.

By creating a function, we can reuse the same logic whenever required.

### 2.2 Advantages of Functions

| Advantage | Description |
|---|---|
| Code Reusability | Write code once and use it multiple times |
| Modularity | Divide a large program into smaller parts |
| Readability | Make programs easier to understand |
| Maintainability | Modify a particular task without rewriting the entire program |
| Debugging | Identify and fix errors in smaller sections |
| Testing | Test individual functions independently |
| Reduced Repetition | Avoid writing the same logic repeatedly |

### 2.3 Example Without Reusing a Function

```c
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;

    printf("Square of a = %d\n", a * a);
    printf("Square of b = %d\n", b * b);
    printf("Square of c = %d\n", c * c);

    return 0;
}
```

**Output:**

```text
Square of a = 25
Square of b = 100
Square of c = 225
```

### 2.4 Example Using a Function

```c
#include <stdio.h>

void square(int number)
{
    printf("Square = %d\n", number * number);
}

int main()
{
    square(5);
    square(10);
    square(15);

    return 0;
}
```

**Output:**

```text
Square = 25
Square = 100
Square = 225
```

**Explanation:**

The `square()` function contains the calculation once and is reused for different values.

---

# 3. Types of Functions

Functions in C are broadly classified into two main categories.

### 3.1 Library Functions

These are predefined functions provided by the C standard library.

Examples:

- `printf()`
- `scanf()`
- `strlen()`
- `sqrt()`
- `strcmp()`

### 3.2 User-Defined Functions

These are functions created by programmers to perform specific tasks.

Examples:

- `calculateSum()`
- `findMaximum()`
- `displayMessage()`
- `calculateFactorial()`

### 3.3 Classification

```text
                 Functions in C
                       |
             +---------+---------+
             |                   |
       Library Functions   User-Defined Functions
             |                   |
        Predefined             Created by
        Functions              Programmers
```

**Important Note:**

Library functions are declared in standard library headers. User-defined functions are declared and implemented by the programmer.

---

# 4. Library Functions

Library functions are predefined functions available through the C standard library.

They help perform common programming tasks without requiring programmers to implement the entire logic themselves.

### 4.1 Common Library Functions

| Function | Header File | Purpose |
|---|---|---|
| `printf()` | `stdio.h` | Displays formatted output |
| `scanf()` | `stdio.h` | Reads formatted input |
| `getchar()` | `stdio.h` | Reads a character |
| `putchar()` | `stdio.h` | Displays a character |
| `strlen()` | `string.h` | Calculates string length |
| `strcpy()` | `string.h` | Copies a string |
| `strcmp()` | `string.h` | Compares two strings |
| `sqrt()` | `math.h` | Calculates square root |
| `pow()` | `math.h` | Calculates a power |
| `toupper()` | `ctype.h` | Converts a character to uppercase |
| `tolower()` | `ctype.h` | Converts a character to lowercase |

### 4.2 Example Using `strlen()`

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Programming";

    printf("Length = %zu\n", strlen(name));

    return 0;
}
```

**Output:**

```text
Length = 11
```

### 4.3 Example Using `sqrt()`

```c
#include <stdio.h>
#include <math.h>

int main()
{
    double number = 64;

    printf("Square root = %.2f\n", sqrt(number));

    return 0;
}
```

**Output:**

```text
Square root = 8.00
```

**Important Note:**

- Include the appropriate header file before using a library function.
- Some toolchains require additional linker options for mathematical functions. For example, GCC on some systems uses `-lm`.
- Always check the function's expected argument types and return type.

---

# 5. User-Defined Functions

A user-defined function is a function created by the programmer to perform a particular task.

It helps divide a program into smaller and reusable sections.

### 5.1 General Syntax

```c
return_type function_name(parameters)
{
    statements;

    return value;
}
```

The return statement is required when a non-void function must return a value.

A void function does not return a value.

### 5.2 Example of a User-Defined Function

```c
#include <stdio.h>

void displayMessage()
{
    printf("Learning Functions in C\n");
}

int main()
{
    displayMessage();

    return 0;
}
```

**Output:**

```text
Learning Functions in C
```

### 5.3 Example With Parameters

```c
#include <stdio.h>

void displayNumber(int number)
{
    printf("Number = %d\n", number);
}

int main()
{
    displayNumber(25);

    return 0;
}
```

**Output:**

```text
Number = 25
```

### 5.4 Example Returning a Value

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 20);

    printf("Sum = %d\n", result);

    return 0;
}
```

**Output:**

```text
Sum = 30
```

---

# 6. Function Declaration (Prototypes)

A function declaration, also called a function prototype, informs the compiler about a function before it is called.

It specifies:

- Function name
- Return type
- Number of parameters
- Parameter types

### 6.1 Syntax

```c
return_type function_name(parameter_types);
```

### 6.2 Example

```c
#include <stdio.h>

int add(int, int);

int main()
{
    int result = add(10, 20);

    printf("Sum = %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
```

**Output:**

```text
Sum = 30
```

### 6.3 Declaration With Parameter Names

Parameter names may also be included in a function prototype.

```c
int add(int a, int b);
```

This is equivalent to:

```c
int add(int, int);
```

### 6.4 Importance of Function Prototypes

1. Inform the compiler about the function before its use.
2. Help check the number and types of arguments.
3. Help check the expected return type.
4. Allow function definitions to appear after `main()`.
5. Improve organization when programs contain multiple functions.

**Important Notes:**

- A function prototype normally ends with a semicolon.
- The parameter names in a prototype do not need to match the names in the function definition.
- A function must have a compatible declaration and definition.
- In C, an empty parameter list in a declaration such as `int calculate();` does not specify that the function takes no arguments. Use `int calculate(void);` to explicitly specify no parameters.

---

# 7. Function Definition

A function definition contains the actual implementation of the function.

It specifies what the function does when called.

### 7.1 Syntax

```c
return_type function_name(parameters)
{
    statements;

    return value;
}
```

### 7.2 Example

```c
#include <stdio.h>

int multiply(int a, int b)
{
    int result = a * b;

    return result;
}

int main()
{
    int answer = multiply(5, 4);

    printf("Product = %d\n", answer);

    return 0;
}
```

**Output:**

```text
Product = 20
```

### 7.3 Components of a Function Definition

| Component | Description |
|---|---|
| Return type | Specifies the type of returned value |
| Function name | Name used to call the function |
| Parameters | Variables receiving input |
| Function body | Contains executable statements |
| Return statement | Sends a value back when required |

**Important Note:**

A function definition provides the implementation. A function prototype only declares the function's interface.

---

# 8. Function Calling

A function call is an instruction that transfers program control to a function.

When a function is called, its statements execute and control returns to the calling function after completion.

### 8.1 Syntax

```c
function_name(arguments);
```

### 8.2 Example

```c
#include <stdio.h>

void display()
{
    printf("Function is executing\n");
}

int main()
{
    printf("Before function call\n");

    display();

    printf("After function call\n");

    return 0;
}
```

**Output:**

```text
Before function call
Function is executing
After function call
```

### 8.3 Calling a Function Multiple Times

```c
#include <stdio.h>

void welcome()
{
    printf("Welcome!\n");
}

int main()
{
    welcome();
    welcome();
    welcome();

    return 0;
}
```

**Output:**

```text
Welcome!
Welcome!
Welcome!
```

**Important Note:**

A function can be called multiple times from different parts of a program, provided its declaration is visible and the call satisfies its interface.

---

# 9. Function Arguments and Parameters

Arguments and parameters are related concepts used when passing information to functions.

### 9.1 Parameters

Parameters are variables declared in a function definition or declaration to receive input values.

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Here, `a` and `b` are parameters.

### 9.2 Arguments

Arguments are the actual values or expressions supplied when calling a function.

Example:

```c
add(10, 20);
```

Here, `10` and `20` are arguments.

### 9.3 Difference Between Arguments and Parameters

| Arguments | Parameters |
|---|---|
| Values supplied during a function call | Variables declared in the function definition |
| Also called actual arguments | Also called formal parameters |
| Exist in the calling expression | Receive values inside the called function |

### 9.4 Example

```c
#include <stdio.h>

void displaySum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

int main()
{
    displaySum(15, 25);

    return 0;
}
```

**Output:**

```text
Sum = 40
```

Here:

- `a` and `b` are parameters.
- `15` and `25` are arguments.

### 9.5 Multiple Parameters

A function can accept multiple parameters of different data types.

```c
#include <stdio.h>

void studentDetails(int rollNo, char grade, float percentage)
{
    printf("Roll Number = %d\n", rollNo);
    printf("Grade = %c\n", grade);
    printf("Percentage = %.2f\n", percentage);
}

int main()
{
    studentDetails(101, 'A', 89.50f);

    return 0;
}
```

**Output:**

```text
Roll Number = 101
Grade = A
Percentage = 89.50
```

**Important Note:**

The number, order and types of arguments should be compatible with the function parameters.

---

# 10. Return Types and Return Statements

The return type specifies the type of value a function sends back to its caller.

### 10.1 Common Return Types

| Return Type | Description |
|---|---|
| `int` | Returns an integer |
| `float` | Returns a floating-point value |
| `double` | Returns a double-precision value |
| `char` | Returns a character |
| `void` | Does not return a value |

### 10.2 Function Returning an Integer

```c
#include <stdio.h>

int square(int number)
{
    return number * number;
}

int main()
{
    int result = square(6);

    printf("Square = %d\n", result);

    return 0;
}
```

**Output:**

```text
Square = 36
```

### 10.3 Function Returning a Float

```c
#include <stdio.h>

float calculateArea(float radius)
{
    return 3.14f * radius * radius;
}

int main()
{
    float area = calculateArea(5.0f);

    printf("Area = %.2f\n", area);

    return 0;
}
```

**Output:**

```text
Area = 78.50
```

### 10.4 Void Function

A void function performs a task without returning a value.

```c
#include <stdio.h>

void display()
{
    printf("This function returns no value\n");
}

int main()
{
    display();

    return 0;
}
```

**Output:**

```text
This function returns no value
```

### 10.5 Return Statement

The return statement terminates the current function and optionally sends a value back to its caller.

Example:

```c
int getNumber()
{
    return 100;
}
```

**Important Notes:**

- The returned value must be compatible with the function's declared return type.
- A non-void function should return an appropriate value on every path where a value is required.
- A void function can use `return;` to exit early.
- A return statement in `main()` with `return 0;` indicates successful program termination.

---

# 11. Types of User-Defined Functions

User-defined functions are commonly classified into four categories based on whether they accept arguments and return values.

### 11.1 Four Categories

| Type | Arguments | Return Value |
|---|---|---|
| Type 1 | No | No |
| Type 2 | Yes | No |
| Type 3 | No | Yes |
| Type 4 | Yes | Yes |

### 11.2 Type 1: No Arguments and No Return Value

The function does not accept input and does not return a value.

```c
#include <stdio.h>

void display()
{
    printf("Hello, C Programming!\n");
}

int main()
{
    display();

    return 0;
}
```

**Output:**

```text
Hello, C Programming!
```

### 11.3 Type 2: Arguments and No Return Value

The function accepts input but does not return a value.

```c
#include <stdio.h>

void displaySum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

int main()
{
    displaySum(10, 20);

    return 0;
}
```

**Output:**

```text
Sum = 30
```

### 11.4 Type 3: No Arguments and Returns a Value

The function does not accept arguments but returns a value.

```c
#include <stdio.h>

int getNumber(void)
{
    return 50;
}

int main()
{
    int number = getNumber();

    printf("Number = %d\n", number);

    return 0;
}
```

**Output:**

```text
Number = 50
```

### 11.5 Type 4: Arguments and Returns a Value

The function accepts arguments and returns a result.

```c
#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int result = multiply(5, 6);

    printf("Product = %d\n", result);

    return 0;
}
```

**Output:**

```text
Product = 30
```

### 11.6 Comparison of Four Types

| Type | Function Declaration | Example |
|---|---|---|
| No arguments, no return | `void display(void);` | Display a message |
| Arguments, no return | `void add(int, int);` | Display a sum |
| No arguments, return | `int getNumber(void);` | Return a number |
| Arguments, return | `int add(int, int);` | Return a sum |

**Important Note:**

These four categories are a common educational classification. They describe how a function receives input and provides output.

---

# 12. Call by Value

Call by value means that a function receives a copy of the value supplied by the caller.

Changes made to the function's parameter do not modify the original variable in the calling function.

### 12.1 Example

```c
#include <stdio.h>

void changeValue(int number)
{
    number = 100;
    printf("Inside function = %d\n", number);
}

int main()
{
    int value = 50;

    changeValue(value);

    printf("Inside main = %d\n", value);

    return 0;
}
```

**Output:**

```text
Inside function = 100
Inside main = 50
```

### 12.2 Explanation

1. The variable `value` contains 50.
2. The function receives a copy of 50.
3. The parameter `number` is changed to 100.
4. The original variable `value` remains unchanged.

### 12.3 Advantages of Call by Value

- Protects the original variable from direct modification.
- Makes functions easier to reason about.
- Useful when a function only needs to process a copy of a value.

**Important Note:**

C passes function arguments by value. Even when a pointer is passed, the pointer itself is passed by value.

---

# 13. Call by Reference Using Pointers

C does not support true call by reference in the same way as languages such as C++.

However, similar behavior can be achieved by passing pointers to functions.

A pointer contains the address of another variable. The called function can use that address to access and modify the original variable.

### 13.1 Example

```c
#include <stdio.h>

void changeValue(int *number)
{
    *number = 100;
}

int main()
{
    int value = 50;

    changeValue(&value);

    printf("Value = %d\n", value);

    return 0;
}
```

**Output:**

```text
Value = 100
```

### 13.2 Explanation

- `&value` passes the address of the original variable.
- `int *number` receives that address through a pointer parameter.
- `*number = 100` modifies the value stored at that address.
- The original variable is updated.

### 13.3 Swapping Two Numbers Using Pointers

```c
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    swap(&x, &y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
```

**Output:**

```text
x = 20
y = 10
```

### 13.4 Difference Between Call by Value and Pointer-Based Modification

| Call by Value | Pointer-Based Modification |
|---|---|
| Passes a copy of the value | Passes a copy of an address |
| Original variable is not directly modified | Original variable can be modified |
| Uses ordinary parameters | Uses pointer parameters |
| Example: `change(x)` | Example: `change(&x)` |

**Important Notes:**

- Always pass a valid address when a function expects a pointer.
- Check pointers before dereferencing them when they may be null.
- Never dereference an uninitialized or invalid pointer.
- C still uses pass by value for every function argument.

---

# 14. Recursion

Recursion is a programming technique in which a function calls itself to solve a problem.

A recursive function breaks a problem into smaller versions of the same problem.

### 14.1 Two Important Parts of Recursion

1. **Base Case:** The condition that stops further recursive calls.
2. **Recursive Case:** The part where the function calls itself with a smaller or simpler problem.

Without a valid base case, recursion may continue until the program runs out of available stack space.

### 14.2 Basic Syntax

```c
return_type function_name(parameters)
{
    if (base_condition)
    {
        return value;
    }

    return function_name(modified_parameters);
}
```

### 14.3 Example: Countdown Using Recursion

```c
#include <stdio.h>

void countdown(int number)
{
    if (number == 0)
    {
        printf("Start!\n");
        return;
    }

    printf("%d\n", number);

    countdown(number - 1);
}

int main()
{
    countdown(5);

    return 0;
}
```

**Output:**

```text
5
4
3
2
1
Start!
```

### 14.4 Factorial Using Recursion

The factorial of a positive integer is the product of all positive integers from 1 to that number.

For example:

```text
5! = 5 × 4 × 3 × 2 × 1
5! = 120
```

Mathematically:

```text
n! = n × (n - 1)!
0! = 1
```

**Program:**

```c
#include <stdio.h>

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return number * factorial(number - 1);
}

int main()
{
    int result = factorial(5);

    printf("Factorial = %d\n", result);

    return 0;
}
```

**Output:**

```text
Factorial = 120
```

### 14.5 Fibonacci Series Using Recursion

The Fibonacci sequence is a series in which each term is the sum of the previous two terms.

```text
0, 1, 1, 2, 3, 5, 8, 13, ...
```

**Program:**

```c
#include <stdio.h>

int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
```

**Output:**

```text
0 1 1 2 3 5 8
```

### 14.6 Recursion vs Iteration

| Recursion | Iteration |
|---|---|
| Function calls itself | Uses loops |
| Requires a base case | Requires a loop condition |
| Uses function call stack space | Usually uses less additional stack space |
| Can make some problems easier to express | Often more efficient for repetitive operations |
| Example: Recursive factorial | Example: Factorial using a loop |

### 14.7 Advantages of Recursion

- Useful for problems that can be divided into smaller similar problems.
- Can produce simpler solutions for tree traversal and divide-and-conquer algorithms.
- Helps express mathematical definitions naturally.

### 14.8 Disadvantages of Recursion

- Function calls consume stack space.
- Excessive recursion may cause stack overflow.
- Some recursive solutions repeat calculations.
- Recursive solutions can be harder to debug.

**Important Notes:**

- Every recursive function should have a valid base case.
- Each recursive call should move toward the base case.
- Recursive algorithms are not always faster than iterative alternatives.
- The factorial example uses `int`, so large values can overflow. For the usual 32-bit `int`, 12! fits but 13! does not.

---

# 15. Scope and Lifetime of Variables

Scope and lifetime are two important concepts that describe how variables behave in a C program.

### 15.1 Scope

Scope refers to the region of a program where an identifier can be accessed by its name.

### 15.2 Lifetime

Lifetime refers to the period during program execution for which an object's storage exists.

### 15.3 Local Variables

A local variable is declared inside a function or block.

It can normally be accessed only within its declaring scope.

```c
#include <stdio.h>

void display()
{
    int number = 10;

    printf("Number = %d\n", number);
}

int main()
{
    display();

    return 0;
}
```

**Output:**

```text
Number = 10
```

### 15.4 Global Variables

A global variable is declared outside all functions.

It can be accessed by functions in its scope after its declaration, subject to visibility and linkage rules.

```c
#include <stdio.h>

int number = 100;

void display()
{
    printf("Number = %d\n", number);
}

int main()
{
    display();

    return 0;
}
```

**Output:**

```text
Number = 100
```

### 15.5 Block Scope

A variable declared inside a block is generally accessible only within that block.

```c
#include <stdio.h>

int main()
{
    int number = 10;

    if (number > 5)
    {
        int result = 20;

        printf("Result = %d\n", result);
    }

    return 0;
}
```

**Output:**

```text
Result = 20
```

The variable `result` cannot be accessed outside the `if` block.

### 15.6 Local and Global Variables With the Same Name

A local variable can hide a global variable with the same name within its scope.

```c
#include <stdio.h>

int number = 100;

int main()
{
    int number = 50;

    printf("Number = %d\n", number);

    return 0;
}
```

**Output:**

```text
Number = 50
```

### 15.7 Scope and Lifetime Comparison

| Variable | Scope | Typical Lifetime |
|---|---|---|
| Local automatic variable | Block scope | During execution of its block |
| Global variable | File scope | Entire program execution |
| Static local variable | Block scope | Entire program execution |
| Function parameter | Function body scope | During the function call |

**Important Note:**

Scope and lifetime are different. A static local variable has block scope but exists throughout the program's execution.

---

# 16. Storage Classes

Storage classes describe important properties of identifiers, including storage duration, scope and linkage.

The commonly taught storage-class specifiers in C are:

1. `auto`
2. `register`
3. `static`
4. `extern`

### 16.1 Auto Storage Class

The `auto` storage-class specifier is the default for ordinary local variables declared inside a block.

```c
#include <stdio.h>

int main()
{
    auto int number = 10;

    printf("Number = %d\n", number);

    return 0;
}
```

**Output:**

```text
Number = 10
```

**Features:**

- Normally used for local variables.
- Has automatic storage duration.
- Exists during execution of its block.
- Its value is not automatically preserved between separate block entries.

### 16.2 Register Storage Class

The `register` storage-class specifier suggests that a variable may be accessed frequently.

```c
#include <stdio.h>

int main()
{
    register int count = 5;

    printf("Count = %d\n", count);

    return 0;
}
```

**Output:**

```text
Count = 5
```

**Features:**

- Used for block-scope variables.
- Has automatic storage duration.
- The compiler may ignore the suggestion about using a CPU register.
- The address-of operator cannot be applied directly to an object declared with the `register` storage-class specifier.

### 16.3 Static Storage Class

The `static` storage-class specifier can be used to give a local variable a lifetime that lasts for the entire program execution.

A static local variable retains its value between function calls.

```c
#include <stdio.h>

void counter()
{
    static int count = 0;

    count++;

    printf("Count = %d\n", count);
}

int main()
{
    counter();
    counter();
    counter();

    return 0;
}
```

**Output:**

```text
Count = 1
Count = 2
Count = 3
```

**Features:**

- Static local variables have block scope.
- They have static storage duration.
- They are initialized only once.
- They retain their values between function calls.

### 16.4 Extern Storage Class

The `extern` storage-class specifier declares an identifier that refers to an object or function defined elsewhere.

It is commonly used when sharing global variables between source files.

**Example Using One File:**

```c
#include <stdio.h>

int number = 100;

int main()
{
    extern int number;

    printf("Number = %d\n", number);

    return 0;
}
```

**Output:**

```text
Number = 100
```

**Features:**

- Commonly used to refer to a global variable defined elsewhere.
- Helps share declarations between source files.
- An `extern` declaration usually does not create a new object definition.

### 16.5 Comparison of Storage Classes

| Storage Class | Typical Scope | Storage Duration | Main Purpose |
|---|---|---|---|
| `auto` | Block | Automatic | Ordinary local variables |
| `register` | Block | Automatic | Suggest frequent access |
| `static` | Depends on declaration | Static | Preserve storage for program lifetime |
| `extern` | Depends on declaration | Usually refers to static-duration objects | Refer to an externally defined identifier |

### 16.6 Important Differences: Local Static and Global Static

The `static` keyword has different effects depending on where it is used.

**Static Local Variable:**

- Declared inside a function or block.
- Has block scope.
- Retains its value between function calls.
- Has static storage duration.

**Static File-Scope Variable:**

- Declared outside functions.
- Has file scope.
- Has internal linkage.
- Can be accessed by functions in the same source file that can see its declaration.

**Important Notes:**

- `register` is a suggestion to the compiler, not a guarantee.
- A static local variable is initialized once and retains its value.
- A file-scope `static` variable is not accessible by name from other translation units.
- Storage classes should be understood through scope, storage duration and linkage rather than simply assuming they all specify a physical memory location.

---

# 17. Common Mistakes

Beginners often make mistakes while declaring, defining and calling functions.

Understanding these mistakes helps write correct and reliable programs.

### 17.1 Forgetting the Function Prototype

Incorrect:

```c
#include <stdio.h>

int main()
{
    int result = add(10, 20);

    printf("%d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
```

The compiler has not seen a declaration of `add()` before its use.

Correct:

```c
#include <stdio.h>

int add(int, int);

int main()
{
    int result = add(10, 20);

    printf("%d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
```

### 17.2 Missing Semicolon in a Prototype

Incorrect:

```c
int add(int, int)
```

Correct:

```c
int add(int, int);
```

### 17.3 Incorrect Number of Arguments

Incorrect:

```c
int add(int a, int b)
{
    return a + b;
}

int main()
{
    add(10);

    return 0;
}
```

Correct:

```c
add(10, 20);
```

### 17.4 Incorrect Return Type

Incorrect:

```c
void calculate()
{
    return 10;
}
```

Correct:

```c
int calculate(void)
{
    return 10;
}
```

### 17.5 Forgetting the Base Case in Recursion

Incorrect:

```c
void display()
{
    display();
}
```

This function keeps calling itself without a stopping condition.

Correct:

```c
void display(int number)
{
    if (number == 0)
    {
        return;
    }

    display(number - 1);
}
```

### 17.6 Expecting Call by Value to Modify the Original Variable

Incorrect expectation:

```c
void change(int number)
{
    number = 100;
}
```

Calling `change(value)` does not change the original `value`.

Use a pointer parameter when the function needs to modify the original object.

### 17.7 Accessing a Local Variable Outside Its Scope

A variable declared inside a function or block cannot normally be accessed outside that scope.

### 17.8 Using an Uninitialized Variable

Incorrect:

```c
int number;

printf("%d", number);
```

Correct:

```c
int number = 10;

printf("%d", number);
```

### 17.9 Ignoring Function Return Values

If a function returns a useful value, make sure the program handles it appropriately.

### 17.10 Returning an Address of a Local Variable

Incorrect:

```c
int *getNumber(void)
{
    int number = 10;

    return &number;
}
```

The local variable's lifetime ends when the function returns. The returned pointer becomes invalid.

### 17.11 Using Incompatible Function Declarations

The prototype and function definition must have compatible types and parameter lists.

### 17.12 Incorrect Pointer Dereferencing

When using pointer parameters, make sure the pointer refers to a valid object before dereferencing it.

---

# 18. Best Practices

Follow these practices while writing functions in C.

1. Give functions meaningful names that describe their purpose.
2. Keep each function focused on one logical task.
3. Use function prototypes where needed.
4. Choose suitable return types.
5. Pass only the required arguments.
6. Avoid unnecessarily long functions.
7. Initialize local variables before using them.
8. Use `const` for pointer parameters when the function should not modify the pointed-to data.
9. Avoid unnecessary global variables.
10. Use recursion only when it makes the solution clear and manageable.
11. Ensure every recursive function has a valid base case.
12. Check pointer arguments before dereferencing them when null pointers are possible.
13. Keep function declarations and definitions consistent.
14. Use comments when the purpose or behavior of a function is not obvious.
15. Test functions independently whenever possible.
16. Prefer clear and readable code over unnecessarily complicated logic.
17. Avoid returning pointers to local automatic variables.
18. Use descriptive parameter names.
19. Document important assumptions about function inputs and outputs.
20. Handle invalid input and boundary conditions carefully.

---

# 19. Practice Exercises

Complete these exercises after studying the module.

These exercises are intentionally left unsolved for independent practice and future revision.

## 19.1 Basic Function Exercises

1. Write a function to display "Hello, World!".
2. Write a function to display your name and college name.
3. Write a function to print the first 10 natural numbers.
4. Write a function to calculate the square of a number.
5. Write a function to calculate the cube of a number.
6. Write a function to check whether a number is even or odd.
7. Write a function to check whether a number is positive, negative or zero.
8. Write a function to find the largest of two numbers.
9. Write a function to find the largest of three numbers.
10. Write a function to calculate the sum of two integers.

## 19.2 Function Arguments and Return Value Exercises

11. Write a function that accepts two integers and returns their sum.
12. Write a function that accepts two integers and returns their difference.
13. Write a function that accepts two numbers and returns their product.
14. Write a function to calculate the average of three numbers.
15. Write a function to calculate the area of a circle.
16. Write a function to calculate the area of a rectangle.
17. Write a function to convert Celsius to Fahrenheit.
18. Write a function to calculate the simple interest.
19. Write a function to check whether a number is prime.
20. Write a function to calculate the factorial of a number.

## 19.3 Call by Value and Pointer Exercises

21. Write a program to demonstrate call by value.
22. Write a function that modifies a variable using a pointer.
23. Write a function to swap two numbers using pointers.
24. Write a function to find the maximum of two numbers using pointer parameters.
25. Write a function that calculates the sum and difference of two numbers using pointer parameters.

## 19.4 Recursion Exercises

26. Write a recursive function to print natural numbers from 1 to N.
27. Write a recursive function to print numbers from N to 1.
28. Write a recursive function to calculate factorial.
29. Write a recursive function to calculate the sum of natural numbers.
30. Write a recursive function to calculate a number raised to a power.
31. Write a recursive function to generate Fibonacci numbers.
32. Write a recursive function to find the sum of digits of a number.
33. Write a recursive function to reverse a number.
34. Write a recursive function to calculate the greatest common divisor of two numbers.
35. Write a recursive function to check whether a string is a palindrome.

## 19.5 Scope and Storage Class Exercises

36. Write a program demonstrating local variables.
37. Write a program demonstrating global variables.
38. Write a program demonstrating block scope.
39. Write a program to demonstrate a static local variable.
40. Write a program to demonstrate the use of `extern`.
41. Write a program to compare automatic and static local variables.
42. Write a program to demonstrate how a local variable hides a global variable.

## 19.6 Conceptual and Application Exercises

43. Explain the difference between a function declaration and a function definition.
44. Explain the difference between arguments and parameters.
45. Explain the four categories of user-defined functions.
46. Explain call by value and pointer-based modification in C.
47. Explain the importance of the base case in recursion.
48. Differentiate between recursion and iteration.
49. Explain the difference between scope and lifetime.
50. Explain the four commonly taught storage-class specifiers in C.
51. Write a menu-driven calculator using separate functions for arithmetic operations.
52. Create a student result program using functions to calculate total, percentage and grade.
53. Create a number utility program using separate functions for prime checking, factorial and digit sum.
54. Write a program to find the maximum and minimum elements of an array using functions.
55. Write a program to perform matrix addition using functions.

---

# 20. Key Takeaways

After completing this module, remember these important points:

- A function is a reusable block of code that performs a specific task.
- Functions improve modularity, readability, reusability and maintainability.
- C functions can be library functions or user-defined functions.
- A function prototype declares the function interface.
- A function definition contains the actual implementation.
- A function call executes the function.
- Parameters receive input, while arguments supply values.
- The return type specifies the kind of value a function returns.
- A void function does not return a value.
- User-defined functions are commonly classified into four categories based on arguments and return values.
- C uses call by value for function arguments.
- Pointer parameters allow functions to modify objects belonging to the caller.
- Recursion occurs when a function calls itself.
- Every recursive function needs a valid base case.
- Scope determines where an identifier can be accessed.
- Lifetime determines how long an object exists.
- Storage-class specifiers affect properties such as storage duration, scope and linkage.
- Good function design makes programs easier to develop, test and maintain.

---

## ✅ Module Completion Checklist

Use this checklist to track your learning progress.

- [ ] Understand the introduction to functions.
- [ ] Understand the need and advantages of functions.
- [ ] Differentiate between library and user-defined functions.
- [ ] Understand common library functions.
- [ ] Understand user-defined functions.
- [ ] Learn function declarations and prototypes.
- [ ] Learn function definitions.
- [ ] Understand function calling.
- [ ] Differentiate between arguments and parameters.
- [ ] Understand return types and return statements.
- [ ] Learn all four categories of user-defined functions.
- [ ] Understand call by value.
- [ ] Understand pointer-based modification.
- [ ] Understand recursion and its base case.
- [ ] Understand local, global and block-scope variables.
- [ ] Understand scope and lifetime.
- [ ] Learn the commonly taught storage classes.
- [ ] Review common mistakes and best practices.
- [ ] Attempt the practice exercises independently.
- [ ] Revise the complete module.

---

## 🔗 Module Navigation

⬅️ **Previous Module**

[📗 Module 05 — Arrays and Strings](../05-Arrays-and-Strings/README.md)

➡️ **Next Module**

[👉 Module 07 — Pointers](../07-Pointers/README.md)

🏠 **Main Repository**

[📚 C Programming — Complete Learning Roadmap](../README.md)

---

<p align="center">
  <b>🎯 End of Module 06 — Functions in C</b>
  <br>
  Keep Learning • Keep Practicing • Keep Building
</p>
