
# 📘 Module 07 — Pointers in C

![Language](https://img.shields.io/badge/Language-C-blue.svg)

![Level](https://img.shields.io/badge/Level-Beginner%20to%20Advanced-green.svg)

![Module](https://img.shields.io/badge/Module-07%20of%2010-orange.svg)

![Topic](https://img.shields.io/badge/Topic-Pointers-purple.svg)

---

## 📖 Introduction

Pointers are one of the most powerful and important concepts in the C programming language. They allow programmers to work directly with memory addresses and access or modify data indirectly.

In C, every variable is stored at a particular memory location. A pointer is a special type of variable that stores the memory address of another variable.

Pointers make it possible to perform operations such as accessing array elements efficiently, modifying variables through functions, handling strings, creating dynamic data structures and managing memory during program execution.

In this module, we will learn pointer fundamentals, memory addresses, pointer arithmetic, pointers with arrays and strings, pointers with functions, pointer to pointer, structure pointers and dynamic memory allocation.

By the end of this module, you will understand how pointers work and how to use them safely and effectively in C programs.

---

## 📑 Table of Contents

1. [Introduction to Pointers](#1-introduction-to-pointers)
2. [Need and Advantages of Pointers](#2-need-and-advantages-of-pointers)
3. [Memory Concepts in C](#3-memory-concepts-in-c)
4. [Pointer Declaration](#4-pointer-declaration)
5. [Pointer Initialization](#5-pointer-initialization)
6. [Address-of Operator](#6-address-of-operator)
7. [Dereference Operator](#7-dereference-operator)
8. [NULL Pointers](#8-null-pointers)
9. [Pointer Arithmetic](#9-pointer-arithmetic)
10. [Pointer Comparison and Difference](#10-pointer-comparison-and-difference)
11. [Pointers with Arrays](#11-pointers-with-arrays)
12. [Pointers with Strings](#12-pointers-with-strings)
13. [Pointers with Functions](#13-pointers-with-functions)
14. [Pointer to Pointer](#14-pointer-to-pointer)
15. [Advanced Pointer Concepts](#15-advanced-pointer-concepts)
16. [Pointers with Structures](#16-pointers-with-structures)
17. [Dynamic Memory Allocation](#17-dynamic-memory-allocation)
18. [Common Pointer Mistakes](#18-common-pointer-mistakes)
19. [Best Practices](#19-best-practices)
20. [Practice Exercises](#20-practice-exercises)
21. [Key Takeaways](#21-key-takeaways)

---

## 🎯 Learning Objectives

After completing this module, you will be able to:

- Understand the meaning and purpose of pointers in C.
- Understand how variables are stored in memory.
- Declare and initialize pointer variables.
- Use the address-of (`&`) operator.
- Access and modify values using the dereference (`*`) operator.
- Understand NULL pointers and safe pointer initialization.
- Perform arithmetic operations on pointers.
- Compare pointers and calculate pointer differences where valid.
- Access and manipulate arrays using pointers.
- Perform string operations using pointers.
- Pass pointers as function arguments.
- Understand pointer to pointer concepts.
- Differentiate between void pointers, constant pointers and pointers to constants.
- Access structure members using structure pointers.
- Allocate, resize and release memory dynamically.
- Identify common pointer errors and avoid unsafe memory access.
- Develop practical C programs using pointers.

---

# 1. Introduction to Pointers

A pointer is a variable that stores the memory address of another variable.

Normally, when we declare a variable, we access its value directly using its name. With pointers, we can access the same value indirectly through its memory address.

### 1.1 Understanding a Pointer

Consider the following variable:

```c
int number = 25;
```

Here:

- `int` specifies the data type.
- `number` is the variable name.
- `25` is the value stored in the variable.

Every variable is stored at a memory location. A pointer can store the address of that location.

For example:

```c
int number = 25;
int *ptr = &number;
```

Here:

- `number` stores the value `25`.
- `&number` gives the memory address of `number`.
- `ptr` stores that address.
- `*ptr` accesses the value stored at that address.

### 1.2 Simple Pointer Example

```c
#include <stdio.h>

int main()
{
    int number = 25;
    int *ptr = &number;

    printf("Value of number = %d\n", number);
    printf("Address of number = %p\n", (void *)&number);
    printf("Value stored in pointer = %p\n", (void *)ptr);
    printf("Value accessed using pointer = %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value of number = 25
Address of number = 0x...
Value stored in pointer = 0x...
Value accessed using pointer = 25
```

**Explanation:**

- `number` stores the integer value `25`.
- `&number` obtains the address of the variable.
- `ptr` stores the address of `number`.
- `*ptr` accesses the value at the address stored in `ptr`.
- The address shown in the output depends on the system and execution.

### 1.3 Visual Representation of a Pointer

Consider this example:

```c
int number = 25;
int *ptr = &number;
```

The relationship can be represented as:

```text
        Variable                  Pointer
    +-------------+          +-------------+
    |   number    |          |     ptr     |
    +-------------+          +-------------+
    |     25      |          | Address of  |
    +-------------+          |   number    |
                             +-------------+
                                   |
                                   |
                                   v
                             +-------------+
                             |   number    |
                             +-------------+
                             |     25      |
                             +-------------+
```

The pointer stores the address of `number`, not the value `25` itself.

### 1.4 Important Pointer Terminology

| Term | Meaning |
|---|---|
| Pointer | A variable that stores a memory address |
| Address | Location of a variable in memory |
| Address-of operator (`&`) | Obtains the address of a variable |
| Dereference operator (`*`) | Accesses the object pointed to |
| NULL pointer | A pointer that does not point to an object |
| Pointer variable | A variable declared to store an address |

**Important Note:**

A pointer should point to a valid object before it is dereferenced. Accessing memory through an invalid, uninitialized or NULL pointer results in undefined behavior.

---

# 2. Need and Advantages of Pointers

Pointers are important because they allow programs to work with memory addresses instead of accessing data only through variable names.

They provide flexibility when handling arrays, strings, functions, structures and dynamically allocated memory.

### 2.1 Need for Pointers

Consider a situation where a function needs to modify the value of a variable declared in `main()`.

If we pass the variable directly to a function, C passes its value. The function receives a separate parameter variable.

Pointers allow us to pass the variable's address so that the function can access and modify the original object.

### 2.2 Advantages of Pointers

| Advantage | Description |
|---|---|
| Direct Memory Access | Work with objects through their memory addresses |
| Efficient Array Handling | Traverse and process array elements using pointers |
| Function Communication | Allow functions to modify caller-owned objects |
| Dynamic Memory Allocation | Allocate memory during program execution |
| String Handling | Perform string operations using character pointers |
| Data Structures | Help implement linked lists, trees and other structures |
| Code Flexibility | Support operations involving indirect access to data |

### 2.3 Example: Modifying a Variable Using a Pointer

```c
#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;

    printf("Before modification = %d\n", number);

    *ptr = 50;

    printf("After modification = %d\n", number);

    return 0;
}
```

**Output:**

```text
Before modification = 10
After modification = 50
```

**Explanation:**

- Initially, `number` contains `10`.
- `ptr` stores the address of `number`.
- `*ptr = 50` changes the value stored at that address.
- Since the pointer refers to `number`, the original variable becomes `50`.

### 2.4 Applications of Pointers

Pointers are used in many areas of C programming:

1. Passing arrays and structures to functions.
2. Modifying variables through function arguments.
3. Creating dynamic arrays.
4. Implementing linked lists and trees.
5. Managing dynamically allocated memory.
6. Working with strings and character arrays.
7. Implementing low-level system programming operations.

**Important Note:**

Pointers provide powerful memory access capabilities, but incorrect pointer usage can cause memory corruption, crashes and undefined behavior. They must be handled carefully.

---

# 3. Memory Concepts in C

To understand pointers properly, it is important to understand how variables are stored in computer memory.

When a program executes, its variables and other objects occupy memory locations.

Each memory location has an address that can be used to identify its position.

### 3.1 Memory Address

A memory address identifies a particular location in memory.

Consider:

```c
int number = 100;
```

The variable `number` is stored at some memory address.

We can obtain its address using the address-of operator:

```c
printf("%p", (void *)&number);
```

The `%p` format specifier is used to display a pointer value.

**Example Output:**

```text
0x7ffd1234
```

The displayed address is only an example. Actual addresses vary between systems and program executions.

### 3.2 Memory Representation of a Variable

Suppose an integer variable contains the value `100`.

A simplified representation is:

```text
Memory Address       Stored Value
+----------------+   +----------------+
| 0x1000         |   | 100            |
+----------------+   +----------------+
```

Here, `0x1000` is an illustrative address, not a guaranteed address.

### 3.3 Pointer and Variable Relationship

Consider:

```c
int number = 100;
int *ptr = &number;
```

The relationship is:

```text
number = 100

ptr = address of number

*ptr = 100
```

The pointer stores the address, while dereferencing the pointer accesses the value at that address.

### 3.4 Size of Variables and Pointers

Different data types may require different amounts of memory.

The `sizeof` operator determines the size of a type or object in bytes.

Example:

```c
#include <stdio.h>

int main()
{
    int number = 10;
    int *ptr = &number;

    printf("Size of integer = %zu bytes\n", sizeof(number));
    printf("Size of pointer = %zu bytes\n", sizeof(ptr));

    return 0;
}
```

**Example Output:**

```text
Size of integer = 4 bytes
Size of pointer = 8 bytes
```

**Explanation:**

- `sizeof(number)` gives the size of the integer object.
- `sizeof(ptr)` gives the size of the pointer variable.
- Pointer size depends on the system architecture and implementation.
- The example output is common on 64-bit systems, but it is not universal.

**Important Notes:**

- A pointer's size is not necessarily equal to the size of the data type it points to.
- `sizeof` returns a value of type `size_t`.
- Use `%zu` to print a `size_t` value.
- Memory addresses should be displayed using `%p` with a `void *` argument.

---

# 4. Pointer Declaration

Pointer declaration tells the compiler that a variable is intended to store the address of an object of a particular type.

The pointer type determines the type of object that can be accessed through the pointer.

### 4.1 Syntax

```c
data_type *pointer_name;
```

**Explanation:**

| Component | Description |
|---|---|
| Data type | Specifies the type of object the pointer can point to |
| `*` | Indicates that the declared variable is a pointer |
| Pointer name | Identifies the pointer variable |

### 4.2 Pointer Declaration Examples

```c
int *intPtr;
float *floatPtr;
char *charPtr;
double *doublePtr;
```

These declarations create pointer variables for different object types.

### 4.3 Example Program

```c
#include <stdio.h>

int main()
{
    int number = 10;
    float price = 25.5f;
    char grade = 'A';

    int *intPtr = &number;
    float *floatPtr = &price;
    char *charPtr = &grade;

    printf("Integer value = %d\n", *intPtr);
    printf("Float value = %.2f\n", *floatPtr);
    printf("Character value = %c\n", *charPtr);

    return 0;
}
```

**Output:**

```text
Integer value = 10
Float value = 25.50
Character value = A
```

**Explanation:**

- `intPtr` points to an integer variable.
- `floatPtr` points to a floating-point variable.
- `charPtr` points to a character variable.
- The dereference operator accesses the values stored in those variables.

### 4.4 Declaring Multiple Pointers

Multiple pointer variables can be declared in one statement.

```c
int *ptr1, *ptr2;
```

Both `ptr1` and `ptr2` are pointers to integers.

**Important Note:**

In a declaration such as:

```c
int *ptr1, number;
```

Only `ptr1` is a pointer. `number` is a normal integer variable.

The asterisk applies to each individual declarator, not automatically to every variable in the statement.

---

# 5. Pointer Initialization

Pointer initialization means assigning a valid memory address to a pointer variable.

A pointer should be initialized before it is used to access an object.

### 5.1 Syntax

```c
data_type variable;
data_type *pointer = &variable;
```

Here, the address of `variable` is assigned to `pointer`.

### 5.2 Example Program

```c
#include <stdio.h>

int main()
{
    int number = 75;
    int *ptr = &number;

    printf("Variable value = %d\n", number);
    printf("Pointer value = %p\n", (void *)ptr);
    printf("Value through pointer = %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Variable value = 75
Pointer value = 0x...
Value through pointer = 75
```

The address shown in the output depends on the system.

### 5.3 Initializing a Pointer After Declaration

A pointer can also be initialized after its declaration.

```c
#include <stdio.h>

int main()
{
    int number = 40;
    int *ptr;

    ptr = &number;

    printf("Value = %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value = 40
```

### 5.4 Uninitialized Pointers

An uninitialized automatic pointer contains an indeterminate value.

Dereferencing such a pointer is unsafe and results in undefined behavior.

Incorrect example:

```c
int *ptr;

*ptr = 100;
```

The pointer has not been assigned the address of a valid object.

Correct approach:

```c
int number;
int *ptr = &number;

*ptr = 100;
```

Now `ptr` points to a valid integer object.

**Important Note:**

Always initialize pointers before using them. If a pointer does not yet point to an object, initialize it to `NULL`.

---

# 6. Address-of Operator

The address-of operator (`&`) is used to obtain the memory address of a variable or another suitable object.

It is commonly used when initializing pointers.

### 6.1 Syntax

```c
&variable_name
```

The expression produces the address of the specified object.

### 6.2 Example Program

```c
#include <stdio.h>

int main()
{
    int number = 50;

    printf("Value = %d\n", number);
    printf("Address = %p\n", (void *)&number);

    return 0;
}
```

**Output:**

```text
Value = 50
Address = 0x...
```

The actual address varies between executions and systems.

### 6.3 Using the Address-of Operator with a Pointer

```c
#include <stdio.h>

int main()
{
    int number = 90;
    int *ptr;

    ptr = &number;

    printf("Address of number = %p\n", (void *)&number);
    printf("Address stored in ptr = %p\n", (void *)ptr);

    return 0;
}
```

**Output:**

```text
Address of number = 0x...
Address stored in ptr = 0x...
```

Both expressions represent the same address in this example.

### 6.4 Difference Between `&` and `*`

| Operator | Name | Purpose |
|---|---|---|
| `&` | Address-of operator | Obtains an object's address |
| `*` | Dereference operator | Accesses the object through a pointer |

Example:

```c
int number = 25;
int *ptr = &number;
```

- `&number` gives the address of `number`.
- `ptr` stores that address.
- `*ptr` accesses the value `25`.

**Important Note:**

The `&` symbol is also used in other C contexts, such as the bitwise AND operator. Its meaning depends on how it is used in an expression.

---

# 7. Dereference Operator

The dereference operator (`*`) is used to access the object pointed to by a pointer.

It allows programmers to read or modify the value stored at the memory location referenced by a valid pointer.

### 7.1 Syntax

```c
*pointer_name
```

The expression accesses the object to which the pointer refers.

### 7.2 Example Program

```c
#include <stdio.h>

int main()
{
    int number = 60;
    int *ptr = &number;

    printf("Value of number = %d\n", number);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value of number = 60
Value using pointer = 60
```

**Explanation:**

- `number` contains `60`.
- `ptr` stores the address of `number`.
- `*ptr` accesses the value stored at that address.

### 7.3 Modifying a Variable Using Dereferencing

A pointer can also be used to modify the object it points to.

```c
#include <stdio.h>

int main()
{
    int number = 20;
    int *ptr = &number;

    printf("Before modification = %d\n", number);

    *ptr = 100;

    printf("After modification = %d\n", number);

    return 0;
}
```

**Output:**

```text
Before modification = 20
After modification = 100
```

**Explanation:**

- Initially, `number` contains `20`.
- `ptr` stores the address of `number`.
- `*ptr = 100` modifies the object through the pointer.
- The original variable now contains `100`.

### 7.4 Reading and Writing Through a Pointer

| Operation | Example | Purpose |
|---|---|---|
| Read | `value = *ptr;` | Read the pointed-to value |
| Write | `*ptr = 50;` | Modify the pointed-to value |
| Increment value | `(*ptr)++;` | Increase the pointed-to integer |
| Decrement value | `(*ptr)--;` | Decrease the pointed-to integer |

**Important Notes:**

- A pointer must point to a valid, suitably aligned object before dereferencing.
- Dereferencing a NULL pointer is undefined behavior.
- Dereferencing an uninitialized or invalid pointer is unsafe.
- Parentheses in `(*ptr)++` make it clear that the pointed-to value is incremented, not the pointer address.

---

## 8. NULL Pointers

A **NULL pointer** is a pointer that does not point to any valid memory location.

It is used to represent that a pointer currently has no valid address assigned to it.

### 8.1 Declaration of a NULL Pointer

**Syntax:**

```c
int *ptr = NULL;
```

Here:
- `int *` declares a pointer to an integer.
- `NULL` indicates that the pointer does not point to a valid object.

### 8.2 Example Program

```c
#include <stdio.h>

int main(void) {
    int *ptr = NULL;

    if (ptr == NULL) {
        printf("Pointer is NULL.\n");
    }

    return 0;
}
```

**Output:**

```text
Pointer is NULL.
```

### 8.3 Checking a Pointer Before Dereferencing

Always check whether a pointer is valid before accessing the value through it.

```c
#include <stdio.h>

int main(void) {
    int number = 50;
    int *ptr = &number;

    if (ptr != NULL) {
        printf("Value: %d\n", *ptr);
    }

    return 0;
}
```

**Output:**

```text
Value: 50
```

### 8.4 Important Points About NULL Pointers

- `NULL` represents a null pointer constant.
- A NULL pointer does not point to a valid object or function.
- A NULL pointer must not be dereferenced.
- A pointer can be assigned `NULL` when it is no longer being used.
- Always initialize pointers before using them.

**Important:** Dereferencing a NULL pointer causes undefined behavior and may crash the program.

---

## 9. Pointer Arithmetic

**Pointer arithmetic** means performing arithmetic operations on pointers to move between elements of an array.

Unlike normal integer arithmetic, pointer arithmetic depends on the data type pointed to by the pointer.

For example, if an integer pointer points to an array element, incrementing it moves to the next integer element, not simply to the next byte.

### 9.1 Pointer Increment

The increment operator `++` moves a pointer to the next element.

**Syntax:**

```c
ptr++;
```

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40};
    int *ptr = numbers;

    printf("Value: %d\n", *ptr);

    ptr++;

    printf("Next Value: %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value: 10
Next Value: 20
```

### 9.2 Pointer Decrement

The decrement operator `--` moves a pointer to the previous element.

**Syntax:**

```c
ptr--;
```

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40};
    int *ptr = &numbers[3];

    printf("Value: %d\n", *ptr);

    ptr--;

    printf("Previous Value: %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value: 40
Previous Value: 30
```

### 9.3 Pointer Addition

An integer can be added to a pointer to move it forward by a specified number of elements.

**Syntax:**

```c
ptr = ptr + n;
```

Where `n` represents the number of elements to move.

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    ptr = ptr + 3;

    printf("Value: %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value: 40
```

### 9.4 Pointer Subtraction

An integer can be subtracted from a pointer to move it backward by a specified number of elements.

**Syntax:**

```c
ptr = ptr - n;
```

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = &numbers[4];

    ptr = ptr - 2;

    printf("Value: %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value: 30
```

### 9.5 Valid Pointer Arithmetic Operations

| Operation | Description |
|---|---|
| `ptr++` | Moves to the next element |
| `ptr--` | Moves to the previous element |
| `ptr + n` | Moves forward by `n` elements |
| `ptr - n` | Moves backward by `n` elements |

### 9.6 Important Rules of Pointer Arithmetic

- Pointer arithmetic is generally used with arrays.
- Pointer movement depends on the size of the pointed-to data type.
- Pointer arithmetic must remain within the same array object or reach one position past its last element.
- A one-past-the-end pointer can be formed but must never be dereferenced.
- Do not perform arithmetic on a NULL pointer.
- Standard C does not support arithmetic on `void *` pointers.

**Example:**

For an integer array:

```c
int numbers[] = {10, 20, 30};
int *ptr = numbers;

ptr++;
```

The pointer now refers to `numbers[1]`.

---

## 10. Pointer Comparison and Difference

Pointers can be compared and subtracted under specific conditions.

These operations are useful when working with arrays and checking the positions of elements.

### 10.1 Pointer Comparison

Pointers to elements of the same array can be compared using relational operators.

**Operators:**

| Operator | Meaning |
|---|---|
| `==` | Equal to |
| `!=` | Not equal to |
| `<` | Less than |
| `>` | Greater than |
| `<=` | Less than or equal to |
| `>=` | Greater than or equal to |

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40};

    int *ptr1 = &numbers[0];
    int *ptr2 = &numbers[2];

    if (ptr1 < ptr2) {
        printf("ptr1 points to an earlier element.\n");
    }

    if (ptr1 != ptr2) {
        printf("Both pointers are different.\n");
    }

    return 0;
}
```

**Output:**

```text
ptr1 points to an earlier element.
Both pointers are different.
```

### 10.2 Pointer Difference

Subtracting two pointers that point into the same array gives the number of elements between their positions.

**Syntax:**

```c
difference = ptr2 - ptr1;
```

The result has type `ptrdiff_t`, which is defined in the `<stddef.h>` header.

### Example Program

```c
#include <stdio.h>
#include <stddef.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};

    int *ptr1 = &numbers[1];
    int *ptr2 = &numbers[4];

    ptrdiff_t difference = ptr2 - ptr1;

    printf("Pointer Difference: %td\n", difference);

    return 0;
}
```

**Output:**

```text
Pointer Difference: 3
```

### 10.3 Important Points

- Pointer subtraction gives the difference in elements, not bytes.
- The result of pointer subtraction has type `ptrdiff_t`.
- Use `%td` to print a `ptrdiff_t` value.
- Pointer subtraction is defined only when both pointers refer to elements of the same array or one position past that array.
- Relational comparisons such as `<` and `>` are defined for pointers into the same array and its one-past position.
- Do not assume that comparing unrelated pointers with relational operators gives a meaningful memory order.

---

## 11. Pointers with Arrays

Pointers and arrays are closely related in C.

The name of an array usually converts to a pointer to its first element when used in an expression.

For example:

```c
int numbers[] = {10, 20, 30, 40};

int *ptr = numbers;
```

Here, `ptr` points to the first element of the array.

### 11.1 Accessing Array Elements Using Pointers

Array elements can be accessed using pointer arithmetic and the dereference operator.

**Syntax:**

```c
*(ptr + index)
```

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("%d\n", *(ptr + 0));
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));

    return 0;
}
```

**Output:**

```text
10
20
30
```

### 11.2 Traversing an Array Using Pointers

An array can be traversed using a pointer instead of using array indexing.

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
```

**Output:**

```text
10 20 30 40 50
```

### 11.3 Calculating the Sum of Array Elements Using Pointers

Pointers can be used to access each array element and calculate the total sum.

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    printf("Sum: %d\n", sum);

    return 0;
}
```

**Output:**

```text
Sum: 150
```

### 11.4 Finding the Largest Array Element Using Pointers

A pointer can be used to access array elements while finding the largest value.

### Example Program

```c
#include <stdio.h>

int main(void) {
    int numbers[] = {25, 10, 75, 40, 60};
    int *ptr = numbers;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int largest = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("Largest Element: %d\n", largest);

    return 0;
}
```

**Output:**

```text
Largest Element: 75
```

### 11.5 Array Indexing and Pointer Notation

In C, array indexing and pointer notation are closely related.

| Array Notation | Pointer Notation |
|---|---|
| `numbers[0]` | `*(numbers + 0)` |
| `numbers[1]` | `*(numbers + 1)` |
| `numbers[2]` | `*(numbers + 2)` |
| `numbers[i]` | `*(numbers + i)` |

### 11.6 Difference Between Arrays and Pointers

Although arrays and pointers are closely related, they are not the same.

| Array | Pointer |
|---|---|
| Stores a fixed sequence of elements | Stores an address |
| Array name is not a modifiable pointer variable | Pointer variable can be reassigned |
| `sizeof(array)` gives the total size of the array when it is an actual array object | `sizeof(pointer)` gives the size of the pointer itself |
| Cannot assign a new address to an array name | Can assign another valid address to a pointer |

**Important:** When an array is passed to a function, it is adjusted to a pointer parameter. The function does not automatically receive the original array's total size.

---

## 12. Pointers with Strings

In C, a string is a sequence of characters terminated by the null character `'\0'`.

Pointers can be used to access, traverse, copy, and modify character arrays.

### 12.1 Declaring a Character Pointer

**Syntax:**

```c
char *ptr;
```

A character pointer stores the address of a character.

### Example Program

```c
#include <stdio.h>

int main(void) {
    char name[] = "Arsh";
    char *ptr = name;

    printf("String: %s\n", ptr);

    return 0;
}
```

**Output:**

```text
String: Arsh
```

### 12.2 Accessing Characters Using Pointers

A pointer can access individual characters of a string using dereferencing.

### Example Program

```c
#include <stdio.h>

int main(void) {
    char name[] = "POINTER";
    char *ptr = name;

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}
```

**Output:**

```text
P O I N T E R
```

### 12.3 Finding String Length Using Pointers

A pointer can traverse a string until it reaches the null character.

### Example Program

```c
#include <stdio.h>

int main(void) {
    char name[] = "Programming";
    char *ptr = name;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("String Length: %d\n", length);

    return 0;
}
```

**Output:**

```text
String Length: 11
```

### 12.4 Copying a String Using Pointers

A string can be copied from one character array to another using pointers.

### Example Program

```c
#include <stdio.h>

int main(void) {
    char source[] = "Computer";
    char destination[20];

    char *src = source;
    char *dest = destination;

    while ((*dest++ = *src++) != '\0') {
    }

    printf("Copied String: %s\n", destination);

    return 0;
}
```

**Output:**

```text
Copied String: Computer
```

### 12.5 Reversing a String Using Pointers

Pointers can access characters from both ends of a string to reverse its contents.

### Example Program

```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "POINTER";
    int length = (int)strlen(text);

    char *left = text;
    char *right = text + length - 1;

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    printf("Reversed String: %s\n", text);

    return 0;
}
```

**Output:**

```text
Reversed String: RETNIOP
```

### 12.6 Character Pointer and String Literal

A string literal should not be modified.

**Correct declaration:**

```c
const char *message = "Hello";
```

The pointer can be used to read the characters, but modifying the string literal through it is not allowed.

If you need to modify a string, use a character array:

```c
char message[] = "Hello";
message[0] = 'Y';
```

**Output:**

```text
Yello
```

### 12.7 Important Points About Strings and Pointers

- A C string ends with `'\0'`.
- A character pointer can point to the first character of a string.
- Incrementing a character pointer moves to the next character.
- Always ensure the destination array has enough space when copying a string.
- Do not access characters beyond the valid array bounds.
- Do not modify a string literal.
- Use `const char *` when a pointer is only meant to read a string.

---

## 13. Pointers with Functions

Pointers can be passed as arguments to functions. This allows a function to access and modify the original variables.

### 13.1 Passing a Pointer to a Function

**Syntax:**

```c
return_type function_name(data_type *ptr);
```

### Example Program

```c
#include <stdio.h>

void display(int *ptr) {
    printf("Value: %d\n", *ptr);
}

int main(void) {
    int number = 50;

    display(&number);

    return 0;
}
```

**Output:**

```text
Value: 50
```

### 13.2 Swapping Two Numbers Using Pointers

Pointers allow a function to swap the original values of two variables.

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10;
    int y = 20;

    swap(&x, &y);

    printf("X = %d\n", x);
    printf("Y = %d\n", y);

    return 0;
}
```

**Output:**

```text
X = 20
Y = 10
```

### 13.3 Returning a Pointer from a Function

A function can return a pointer, provided the returned pointer refers to an object that remains valid after the function returns.

```c
#include <stdio.h>

int *getNumber(void) {
    static int number = 100;
    return &number;
}

int main(void) {
    int *ptr = getNumber();

    printf("Value: %d\n", *ptr);

    return 0;
}
```

**Output:**

```text
Value: 100
```

**Important:** Never return the address of a local automatic variable because its lifetime ends when the function returns.

---

## 14. Pointer to Pointer

A **pointer to pointer** is a pointer variable that stores the address of another pointer.

It is also called a double pointer.

### 14.1 Declaration

**Syntax:**

```c
data_type **ptr;
```

### 14.2 Example Program

```c
#include <stdio.h>

int main(void) {
    int number = 100;

    int *ptr = &number;
    int **doublePtr = &ptr;

    printf("Value: %d\n", number);
    printf("Using Pointer: %d\n", *ptr);
    printf("Using Double Pointer: %d\n", **doublePtr);

    return 0;
}
```

**Output:**

```text
Value: 100
Using Pointer: 100
Using Double Pointer: 100
```

### 14.3 Understanding Double Pointers

| Expression | Meaning |
|---|---|
| `number` | Original variable |
| `&number` | Address of the variable |
| `ptr` | Stores the address of `number` |
| `*ptr` | Accesses the value of `number` |
| `doublePtr` | Stores the address of `ptr` |
| `*doublePtr` | Accesses the pointer `ptr` |
| `**doublePtr` | Accesses the original value |

**Applications:**
- Modifying a pointer inside a function.
- Working with dynamically allocated multidimensional data.
- Handling arrays of strings.
- Managing complex data structures.

---

## 15. Advanced Pointer Concepts

C provides additional pointer concepts that help programmers manage memory and control how data is accessed.

### 15.1 Void Pointer

A `void` pointer is a generic pointer that can store the address of an object of any data type.

**Syntax:**

```c
void *ptr;
```

Example:

```c
#include <stdio.h>

int main(void) {
    int number = 50;

    void *ptr = &number;

    printf("Value: %d\n", *(int *)ptr);

    return 0;
}
```

**Output:**

```text
Value: 50
```

A void pointer must be converted to an appropriate object pointer type before dereferencing.

### 15.2 Pointer to Constant

A pointer to constant data does not allow modification of the pointed-to value through that pointer.

```c
const int *ptr;
```

Example:

```c
int number = 10;
const int *ptr = &number;
```

You can change where `ptr` points, but you cannot modify `number` through `ptr`.

### 15.3 Constant Pointer

A constant pointer cannot be made to point to another address after initialization.

```c
int *const ptr = &number;
```

You can modify the value through the pointer, but you cannot reassign the pointer.

### 15.4 Constant Pointer to Constant Data

Both the pointer and the pointed-to value are treated as constant through that pointer.

```c
const int *const ptr = &number;
```

### 15.5 Comparison

| Declaration | Change Pointer Address | Modify Value Through Pointer |
|---|---|---|
| `int *ptr` | Yes | Yes |
| `const int *ptr` | Yes | No |
| `int *const ptr` | No | Yes |
| `const int *const ptr` | No | No |

---

## 16. Pointers with Structures

Pointers can store the address of structure variables.

They provide an efficient way to access and modify structure members.

### 16.1 Structure Pointer Declaration

**Syntax:**

```c
struct StructureName *ptr;
```

### 16.2 Accessing Structure Members Using Pointers

The arrow operator `->` is used to access structure members through a pointer.

**Syntax:**

```c
ptr->member;
```

### Example Program

```c
#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main(void) {
    struct Student student = {101, 85.5};

    struct Student *ptr = &student;

    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
```

**Output:**

```text
Roll Number: 101
Marks: 85.50
```

### 16.3 Dot Operator and Arrow Operator

| Operator | Usage |
|---|---|
| `.` | Accesses members using a structure variable |
| `->` | Accesses members using a structure pointer |

Example:

```c
student.roll;
ptr->roll;
```

Both expressions access the `roll` member, assuming `ptr` points to `student`.

---

## 17. Dynamic Memory Allocation

Dynamic memory allocation allows a program to request memory while it is running.

C provides memory management functions through the `<stdlib.h>` header.

### 17.1 Memory Allocation Functions

| Function | Purpose |
|---|---|
| `malloc()` | Allocates a block of memory |
| `calloc()` | Allocates memory for multiple elements and initializes all bytes to zero |
| `realloc()` | Changes the size of an existing allocated memory block |
| `free()` | Releases dynamically allocated memory |

### 17.2 malloc()

The `malloc()` function allocates a specified number of bytes.

**Syntax:**

```c
ptr = malloc(size);
```

Example:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(5 * sizeof(int));

    if (ptr == NULL) {
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}
```

**Output:**

```text
10 20 30 40 50
```

### 17.3 calloc()

The `calloc()` function allocates memory for multiple elements and initializes the allocated bytes to zero.

**Syntax:**

```c
ptr = calloc(number_of_elements, size_of_each_element);
```

### 17.4 realloc()

The `realloc()` function changes the size of a previously allocated memory block.

**Syntax:**

```c
new_ptr = realloc(ptr, new_size);
```

Use a temporary pointer to store the result so that the original allocation is not lost if reallocation fails.

### 17.5 free()

The `free()` function releases dynamically allocated memory.

**Syntax:**

```c
free(ptr);
ptr = NULL;
```

### 17.6 Important Rules

- Include `<stdlib.h>` when using dynamic memory allocation functions.
- Always check whether `malloc()`, `calloc()`, or `realloc()` returned `NULL`.
- Release allocated memory using `free()` when it is no longer needed.
- Do not access memory after it has been freed.
- Do not free the same allocation more than once.
- Do not use a pointer after its allocated memory has been released.
- Use `sizeof` to calculate allocation sizes correctly.

---

## 18. Common Pointer Mistakes

Pointers are powerful, but incorrect pointer usage can cause crashes, memory errors, and undefined behavior.

| Mistake | Explanation |
|---|---|
| Uninitialized pointer | Using a pointer without assigning a valid address |
| NULL pointer dereferencing | Accessing a value through a NULL pointer |
| Dangling pointer | Using a pointer after the object it refers to has expired or been freed |
| Memory leak | Allocated memory is never released |
| Invalid pointer arithmetic | Moving outside the permitted array bounds |
| Double free | Releasing the same allocated memory more than once |
| Returning local variable address | Returning a pointer to a local automatic variable |
| Buffer overflow | Writing beyond the allocated array size |

### Example of Incorrect Usage

```c
int *ptr;

*ptr = 100;
```

The pointer is uninitialized and does not point to a valid object.

### Correct Usage

```c
int number;
int *ptr = &number;

*ptr = 100;
```

Always initialize pointers and ensure they refer to valid objects before dereferencing them.

---

## 19. Best Practices for Using Pointers

Follow these practices when writing C programs involving pointers:

1. Initialize pointers before using them.
2. Use `NULL` when a pointer does not refer to a valid object.
3. Check pointers before dereferencing when they may be NULL.
4. Use the correct pointer data type.
5. Avoid accessing memory outside valid array bounds.
6. Use `const` when data should not be modified through a pointer.
7. Check dynamic memory allocation results.
8. Release dynamically allocated memory using `free()`.
9. Set pointers to `NULL` after releasing memory when appropriate.
10. Avoid returning pointers to expired local variables.
11. Use meaningful pointer variable names.
12. Keep pointer operations simple and readable.

---

## 20. Practice Exercises

Try solving these exercises after completing the practical programs.

1. Explain what a pointer is and why it is used in C.
2. Differentiate between the address-of and dereference operators.
3. Explain pointer arithmetic with an example.
4. Differentiate between an array and a pointer.
5. Explain the difference between NULL and an uninitialized pointer.
6. What is a double pointer?
7. Differentiate between `malloc()` and `calloc()`.
8. Explain the purpose of `realloc()` and `free()`.
9. Differentiate between a pointer to constant and a constant pointer.
10. Explain dangling pointers and memory leaks.

---

## 21. Key Takeaways

After completing this module, you should understand:

- Pointer declaration and initialization.
- Address-of and dereference operators.
- NULL pointers and pointer safety.
- Pointer arithmetic and comparison.
- Accessing arrays and strings using pointers.
- Passing pointers to functions.
- Pointer to pointer concepts.
- Void pointers and constant pointers.
- Accessing structures through pointers.
- Dynamic memory allocation and deallocation.
- Common pointer errors and safe programming practices.

Pointers are one of the most important concepts in C programming. A strong understanding of pointers helps build a foundation for data structures, dynamic memory management, and advanced programming.

---

## 📚 Practical Programs

The following programs provide hands-on practice for the concepts covered in this module.

### 07.1 Pointer Fundamentals

1. [Pointer Declaration and Initialization](programs/01-pointer-declaration-initialization.c)
2. [Address of a Variable](programs/02-address-of-variable.c)
3. [Dereferencing a Pointer](programs/03-dereferencing-pointer.c)
4. [Modify a Variable Using Pointer](programs/04-modify-variable-using-pointer.c)
5. [Multiple Pointers](programs/05-multiple-pointers.c)
6. [Size of a Pointer](programs/06-size-of-pointer.c)
7. [NULL Pointer](programs/07-null-pointer.c)

### 07.2 Pointer Arithmetic

8. [Pointer Increment](programs/08-pointer-increment.c)
9. [Pointer Decrement](programs/09-pointer-decrement.c)
10. [Pointer Addition](programs/10-pointer-addition.c)
11. [Pointer Subtraction](programs/11-pointer-subtraction.c)
12. [Difference Between Pointers](programs/12-difference-between-pointers.c)

### 07.3 Pointers with Arrays and Strings

13. [Access Array Elements Using Pointer](programs/13-access-array-elements-using-pointer.c)
14. [Traverse an Array Using Pointer](programs/14-traverse-array-using-pointer.c)
15. [Sum of Array Elements Using Pointer](programs/15-sum-array-elements-using-pointer.c)
16. [Find Largest Array Element Using Pointer](programs/16-largest-array-element-using-pointer.c)
17. [String Length Using Pointer](programs/17-string-length-using-pointer.c)
18. [Copy String Using Pointer](programs/18-copy-string-using-pointer.c)
19. [Reverse a String Using Pointer](programs/19-reverse-string-using-pointer.c)

### 07.4 Pointers with Functions

20. [Pass Pointer to Function](programs/20-pass-pointer-to-function.c)
21. [Swap Two Numbers Using Pointers](programs/21-swap-two-numbers-using-pointers.c)
22. [Modify Variable Using Function Pointer Argument](programs/22-modify-variable-using-function.c)
23. [Return Pointer from Function](programs/23-return-pointer-from-function.c)
24. [Sum of Two Numbers Using Pointers](programs/24-sum-using-pointers.c)
25. [Find Maximum Using Pointers and Functions](programs/25-maximum-using-pointers.c)

### 07.5 Pointer to Pointer and Advanced Pointers

26. [Pointer to Pointer](programs/26-pointer-to-pointer.c)
27. [Access Value Using Double Pointer](programs/27-double-pointer-access.c)
28. [Void Pointer](programs/28-void-pointer.c)
29. [Constant Pointer and Pointer to Constant](programs/29-constant-pointer.c)

### 07.6 Pointers with Structures

30. [Structure Pointer](programs/30-structure-pointer.c)
31. [Structure Pointer with Function](programs/31-structure-pointer-function.c)

### 07.7 Dynamic Memory Allocation

32. [Dynamic Memory Allocation Using malloc()](programs/32-dynamic-memory-malloc.c)
33. [Dynamic Memory Allocation Using calloc()](programs/33-dynamic-memory-calloc.c)
34. [Resize Memory Using realloc()](programs/34-resize-memory-realloc.c)
35. [Dynamic Array Using Pointers](programs/35-dynamic-array-using-pointers.c)

---

## 🔗 Module Navigation

⬅️ **[Previous Module — Functions](../06-Functions/README.md)**

🏠 **[Return to Main Repository](../README.md)**

➡️ **[Next Module — Structures and Unions](../08-Structures-and-Unions/README.md)**
