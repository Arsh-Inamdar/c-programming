
# 📚 Module 05 — Arrays and Strings in C

A comprehensive guide to storing, accessing, manipulating and processing collections of data using arrays and strings in C.

![C Programming](https://img.shields.io/badge/Language-C-blue.svg)
![Level](https://img.shields.io/badge/Level-Beginner--Intermediate-green.svg)
![Module](https://img.shields.io/badge/Module-05-orange.svg)
![Status](https://img.shields.io/badge/Status-Learning%20Guide-blue.svg)

---

## 📑 Table of Contents

1. [Introduction to Arrays and Strings](#1-introduction-to-arrays-and-strings)
2. [Understanding Arrays](#2-understanding-arrays)
3. [Declaring and Initializing Arrays](#3-declaring-and-initializing-arrays)
4. [Accessing and Modifying Array Elements](#4-accessing-and-modifying-array-elements)
5. [Array Operations](#5-array-operations)
6. [One-Dimensional Arrays](#6-one-dimensional-arrays)
7. [Multidimensional Arrays](#7-multidimensional-arrays)
8. [Two-Dimensional Arrays](#8-two-dimensional-arrays)
9. [Introduction to Strings](#9-introduction-to-strings)
10. [Declaring and Initializing Strings](#10-declaring-and-initializing-strings)
11. [Reading and Displaying Strings](#11-reading-and-displaying-strings)
12. [String Handling Functions](#12-string-handling-functions)
13. [Arrays and Functions](#13-arrays-and-functions)
14. [Common Mistakes](#14-common-mistakes)
15. [Best Practices](#15-best-practices)
16. [Practice Exercises](#16-practice-exercises)
17. [Key Takeaways](#17-key-takeaways)

---

## 🎯 Learning Objectives

After completing this module, you should be able to:

- Understand the purpose and importance of arrays in C.
- Explain how arrays store multiple values of the same data type.
- Declare, initialize and access array elements.
- Use loops to process array elements.
- Perform basic array operations.
- Understand one-dimensional and multidimensional arrays.
- Declare and manipulate two-dimensional arrays.
- Understand the relationship between character arrays and strings.
- Use the null character to terminate strings.
- Read and display strings using standard input/output functions.
- Use standard string-handling functions from `string.h`.
- Pass arrays to functions.
- Identify common array and string programming mistakes.

---

# 1. Introduction to Arrays and Strings

## 1.1 What Is an Array?

An array is a collection of elements of the same data type stored in consecutive memory locations.

Instead of declaring multiple variables to store similar values, we can use a single array.

For example, suppose we want to store the marks of five students.

Without an array:

```c
int mark1 = 75;
int mark2 = 82;
int mark3 = 68;
int mark4 = 91;
int mark5 = 85;
```

Using an array:

```c
int marks[5] = {75, 82, 68, 91, 85};
```

The array stores all five marks under one variable name.

## 1.2 Why Do We Need Arrays?

Arrays are useful when a program needs to handle multiple values of the same data type.

Important advantages:

1. Store multiple values using one variable name.
2. Reduce the need for declaring many individual variables.
3. Access elements using their index.
4. Process large collections of data using loops.
5. Make programs easier to organize and maintain.
6. Support common operations such as searching and sorting.

## 1.3 What Is a String?

A string in C is a sequence of characters terminated by a special null character (`'\0'`).

C does not have a separate built-in string data type. Strings are represented using character arrays.

Example:

```c
char name[] = "Arsh";
```

The string is stored as:

| Index | Character |
|---|---|
| 0 | A |
| 1 | r |
| 2 | s |
| 3 | h |
| 4 | '\0' |

The null character marks the end of the string.

## 1.4 Arrays vs Strings

| Feature | Array | String |
|---|---|---|
| Meaning | Collection of same-type elements | Sequence of characters |
| Data type | Can use int, float, char, etc. | Uses char elements |
| Termination | No automatic terminator | Ends with `'\0'` |
| Example | `int a[5]` | `char name[20]` |
| Header file | Not required | `string.h` for common string functions |

**Important:** Every C string is stored in a character array, but not every character array is necessarily a valid string.

---

# 2. Understanding Arrays

## 2.1 Array Structure

An array contains elements stored in consecutive memory locations.

Consider:

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

Conceptual representation:

| Index | Element | Value |
|---|---|---|
| 0 | numbers[0] | 10 |
| 1 | numbers[1] | 20 |
| 2 | numbers[2] | 30 |
| 3 | numbers[3] | 40 |
| 4 | numbers[4] | 50 |

Each element can be accessed using its index.

## 2.2 Array Indexing

An array index identifies the position of an element.

In C, array indexing starts from zero.

For an array of size 5:

- First element: index 0
- Second element: index 1
- Third element: index 2
- Fourth element: index 3
- Fifth element: index 4

The last valid index is always:

```text
Array size - 1
```

For example:

```c
int numbers[5];
```

Valid indices are from `0` to `4`.

## 2.3 Memory Representation

Suppose an integer occupies 4 bytes and the first element begins at memory address 1000.

Conceptually:

| Element | Example address |
|---|---:|
| numbers[0] | 1000 |
| numbers[1] | 1004 |
| numbers[2] | 1008 |
| numbers[3] | 1012 |
| numbers[4] | 1016 |

The actual address depends on the system and compiler.

## 2.4 Important Characteristics of Arrays

- Elements are stored in consecutive memory locations.
- All elements have the same declared data type.
- Indexing begins at zero.
- Array size is fixed after an ordinary fixed-size array is created.
- Individual elements can be modified.
- C does not automatically check array boundaries.

---

# 3. Declaring and Initializing Arrays

## 3.1 Array Declaration

Array declaration specifies the data type, array name and number of elements.

Syntax:

```c
data_type array_name[array_size];
```

Example:

```c
int marks[5];
float prices[10];
char letters[26];
```

Explanation:

- `int`, `float` and `char` represent data types.
- `marks`, `prices` and `letters` are array names.
- The number inside brackets specifies the number of elements.

## 3.2 Array Initialization

Initialization means assigning initial values to array elements.

Example:

```c
int numbers[5] = {10, 20, 30, 40, 50};
```

All five elements receive values during declaration.

## 3.3 Initialization Without Specifying Size

C can determine the array size from the number of initial values.

Example:

```c
int numbers[] = {10, 20, 30, 40, 50};
```

The compiler determines the array size as 5.

## 3.4 Partial Initialization

An array can be initialized with fewer values than its declared size.

Example:

```c
int numbers[5] = {10, 20};
```

The remaining elements are initialized to zero.

Conceptual result:

```text
10 20 0 0 0
```

## 3.5 Initializing All Elements to Zero

Example:

```c
int numbers[5] = {0};
```

All elements are initialized to zero.

## 3.6 Character Array Initialization

Example:

```c
char letters[5] = {'A', 'B', 'C', 'D', 'E'};
```

This is a character array containing five characters. It is not a null-terminated string.

A string can be initialized as:

```c
char name[5] = "Arsh";
```

The array has room for four characters and the terminating null character.

## 3.7 Using `sizeof` to Find Array Size

The `sizeof` operator returns the size of an object in bytes.

Example:

```c
#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    int totalBytes = sizeof(numbers);
    int elementSize = sizeof(numbers[0]);
    int count = totalBytes / elementSize;

    printf("Total bytes: %zu\n", sizeof(numbers));
    printf("Element size: %zu\n", sizeof(numbers[0]));
    printf("Number of elements: %d\n", count);

    return 0;
}
```

Possible output on a system where `int` occupies 4 bytes:

```text
Total bytes: 20
Element size: 4
Number of elements: 5
```

**Important:** This calculation works when `numbers` is an actual array in the current scope. An array passed to a function is treated as a pointer parameter, so `sizeof` inside that function does not give the original array size.

---

# 4. Accessing and Modifying Array Elements

## 4.1 Accessing Elements

Individual elements can be accessed using their index.

Example:

```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[4]);

    return 0;
}
```

Output:

```text
10
30
50
```

## 4.2 Modifying Elements

Array elements can be modified using assignment statements.

Example:

```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    numbers[2] = 100;

    printf("%d\n", numbers[2]);

    return 0;
}
```

Output:

```text
100
```

## 4.3 Traversing an Array

Traversing means visiting each array element.

Loops are commonly used for array traversal.

Example:

```c
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

## 4.4 Taking Array Input from the User

Example:

```c
#include <stdio.h>

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
    }

    printf("Array elements: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

Possible output:

```text
Enter number: 10
Enter number: 20
Enter number: 30
Enter number: 40
Enter number: 50
Array elements: 10 20 30 40 50
```

---

# 5. Array Operations

Arrays support several common operations.

## 5.1 Traversal

Traversal visits each element of an array.

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {5, 10, 15, 20, 25};

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

Output:

```text
5 10 15 20 25
```

## 5.2 Finding the Sum of Array Elements

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
```

Output:

```text
Sum = 150
```

## 5.3 Finding the Average

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++) {
        sum += a[i];
    }

    average = (float)sum / 5;

    printf("Average = %.2f", average);

    return 0;
}
```

Output:

```text
Average = 30.00
```

## 5.4 Finding the Maximum Element

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {25, 10, 45, 5, 30};
    int max = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("Maximum = %d", max);

    return 0;
}
```

Output:

```text
Maximum = 45
```

## 5.5 Finding the Minimum Element

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {25, 10, 45, 5, 30};
    int min = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("Minimum = %d", min);

    return 0;
}
```

Output:

```text
Minimum = 5
```

## 5.6 Searching an Element

Linear search checks each element until the target is found or the array ends.

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int found = 0;

    for (int i = 0; i < 5; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element found");
    } else {
        printf("Element not found");
    }

    return 0;
}
```

Output:

```text
Element found
```

## 5.7 Reversing an Array

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 4; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

Output:

```text
50 40 30 20 10
```

This example displays the elements in reverse order without changing the original array.

## 5.8 Sorting an Array

Sorting arranges elements in a particular order.

Common sorting orders:

- Ascending order: smallest to largest.
- Descending order: largest to smallest.

Bubble sort repeatedly compares adjacent elements and swaps them when they are in the wrong order.

Example:

```c
#include <stdio.h>

int main() {
    int a[5] = {50, 20, 40, 10, 30};
    int temp;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

---

# 6. One-Dimensional Arrays

## 6.1 What Is a One-Dimensional Array?

A one-dimensional array is a linear collection of elements accessed using a single index.

Example:

```c
int marks[5] = {75, 80, 65, 90, 85};
```

It can be visualized as a single row of values.

## 6.2 Syntax

```c
data_type array_name[size];
```

Example:

```c
float temperature[7];
```

## 6.3 Example: Student Marks

```c
#include <stdio.h>

int main() {
    int marks[5] = {75, 80, 65, 90, 85};

    for (int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
```

Output:

```text
Student 1: 75
Student 2: 80
Student 3: 65
Student 4: 90
Student 5: 85
```

## 6.4 Applications

One-dimensional arrays are used for:

- Student marks.
- Product prices.
- Daily temperatures.
- Employee salaries.
- Lists of numbers.
- Sensor readings.

---

# 7. Multidimensional Arrays

## 7.1 What Is a Multidimensional Array?

A multidimensional array is an array containing two or more dimensions.

It is useful for representing data in tabular or grid form.

Examples:

- Matrices.
- Tables.
- Game boards.
- Seating arrangements.
- Image pixel data.

## 7.2 Types of Multidimensional Arrays

Common types include:

1. Two-dimensional arrays.
2. Three-dimensional arrays.
3. Higher-dimensional arrays.

A two-dimensional array is the most commonly used multidimensional array in beginner C programming.

## 7.3 Declaration Syntax

```c
data_type array_name[rows][columns];
```

Example:

```c
int matrix[3][3];
```

This creates an array with 3 rows and 3 columns.

## 7.4 Initialization

Example:

```c
int matrix[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};
```

Conceptual representation:

| | Column 0 | Column 1 | Column 2 |
|---|---:|---:|---:|
| Row 0 | 10 | 20 | 30 |
| Row 1 | 40 | 50 | 60 |

## 7.5 Accessing Elements

Two indices are required to access an element.

Example:

```c
matrix[0][1]
```

This accesses the element in row 0 and column 1.

For the initialized matrix above, the value is 20.

---

# 8. Two-Dimensional Arrays

## 8.1 Declaration

Example:

```c
int a[2][3];
```

The array contains 2 rows and 3 columns.

Total number of elements:

```text
Rows × Columns
```

For this example:

```text
2 × 3 = 6 elements
```

## 8.2 Input and Display of a Matrix

Example:

```c
#include <stdio.h>

int main() {
    int a[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

Possible output:

```text
Enter element: 1
Enter element: 2
Enter element: 3
Enter element: 4
Enter element: 5
Enter element: 6
Matrix:
1 2 3
4 5 6
```

## 8.3 Addition of Two Matrices

Two matrices with the same dimensions can be added element by element.

Example:

```c
#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

Output:

```text
6 8
10 12
```

## 8.4 Matrix Transpose

The transpose of a matrix is obtained by converting its rows into columns and its columns into rows.

Example:

Original matrix:

```text
1 2 3
4 5 6
```

Transpose:

```text
1 4
2 5
3 6
```

Program:

```c
#include <stdio.h>

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 2; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

Output:

```text
1 4
2 5
3 6
```

## 8.5 Applications of Two-Dimensional Arrays

- Mathematical matrices.
- Student result tables.
- Seating arrangements.
- Board games.
- Tabular records.
- Scientific calculations.

---

# 9. Introduction to Strings

## 9.1 What Is a String in C?

A string is a sequence of characters terminated by the null character `'\0'`.

Example:

```c
char name[] = "Arsh";
```

The characters are stored as:

```text
A  r  s  h  \0
```

The null character indicates the end of the string.

## 9.2 Null Character

The null character is written as:

```c
'\0'
```

It has an integer value of zero.

It is different from the character `'0'`.

| Character | Meaning |
|---|---|
| `'\0'` | Null character |
| `'0'` | Digit zero |
| `'A'` | Uppercase letter A |

A valid C string must have enough space for its terminating null character.

## 9.3 Character Array vs String

Example of a character array:

```c
char letters[3] = {'C', 'A', 'T'};
```

This array contains three characters but has no null terminator.

Example of a string:

```c
char word[4] = {'C', 'A', 'T', '\0'};
```

This is a valid null-terminated string.

## 9.4 String Length

The visible number of characters in `"Arsh"` is 4.

However, the storage required for the string is 5 characters because the null terminator must also be stored.

```c
char name[] = "Arsh";
```

---

# 10. Declaring and Initializing Strings

## 10.1 String Declaration

Strings are declared using character arrays.

Syntax:

```c
char string_name[size];
```

Example:

```c
char name[20];
char city[30];
char college[50];
```

## 10.2 String Initialization Using Double Quotes

Example:

```c
char name[] = "Arsh";
```

The compiler automatically adds the null terminator.

## 10.3 Initialization Using Individual Characters

Example:

```c
char name[5] = {'A', 'r', 's', 'h', '\0'};
```

## 10.4 Specifying Array Size

Example:

```c
char name[10] = "Arsh";
```

The array has space for 10 characters, including the null terminator.

## 10.5 Important Difference Between Single and Double Quotes

Single quotes represent character constants.

Double quotes represent string literals.

Examples:

```c
char letter = 'A';
char name[] = "Arsh";
```

Do not confuse these two forms.

## 10.6 Modifying a String

Individual characters in a writable character array can be modified.

Example:

```c
#include <stdio.h>

int main() {
    char name[] = "Arsh";

    name[0] = 'M';

    printf("%s", name);

    return 0;
}
```

Output:

```text
Mrsh
```

A character array initialized from a string literal can be modified. A pointer to a string literal should not be used to modify the literal.

---

# 11. Reading and Displaying Strings

## 11.1 Using `scanf()` to Read a String

The `%s` format specifier reads a sequence of non-whitespace characters.

Example:

```c
#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    scanf("%19s", name);

    printf("Name: %s", name);

    return 0;
}
```

Possible output:

```text
Enter your name: Arsh
Name: Arsh
```

**Important:** The width limit in `%19s` prevents writing more than 19 input characters into the 20-character array, leaving room for `'\0'`.

`scanf("%s", ...)` stops reading at whitespace. It is not suitable for reading a full sentence.

## 11.2 Using `fgets()` to Read a String

The `fgets()` function can read a line containing spaces.

Syntax:

```c
fgets(string_name, size, stdin);
```

Example:

```c
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Name: %s", name);

    return 0;
}
```

Possible output:

```text
Enter your full name: Arsh Inamdar
Name: Arsh Inamdar
```

`fgets()` reads at most one less than the specified size and adds a null terminator when successful. It may also retain the newline character if there is room.

## 11.3 Removing the Newline from `fgets()`

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        name[strcspn(name, "\n")] = '\0';
    }

    printf("Name: %s", name);

    return 0;
}
```

Output:

```text
Enter your name: Arsh Inamdar
Name: Arsh Inamdar
```

The `strcspn()` function finds the position of the first newline character. If no newline is present, it returns the string length, so the terminating null character remains in place.

## 11.4 Displaying Strings Using `printf()`

Example:

```c
#include <stdio.h>

int main() {
    char name[] = "Arsh";

    printf("%s", name);

    return 0;
}
```

Output:

```text
Arsh
```

## 11.5 Displaying Strings Using `puts()`

The `puts()` function displays a string and automatically adds a newline.

Example:

```c
#include <stdio.h>

int main() {
    char message[] = "Welcome to C Programming";

    puts(message);

    return 0;
}
```

Output:

```text
Welcome to C Programming
```

## 11.6 Difference Between `scanf()`, `fgets()` and `puts()`

| Function | Purpose | Important behavior |
|---|---|---|
| `scanf("%s", ...)` | Read a word | Stops at whitespace |
| `fgets()` | Read a line | Can include spaces |
| `printf("%s", ...)` | Display a string | Uses a format specifier |
| `puts()` | Display a string | Adds a newline |

---

# 12. String Handling Functions

## 12.1 Introduction to `string.h`

C provides standard string-handling functions through the `string.h` header file.

To use these functions, include:

```c
#include <string.h>
```

Important functions include:

| Function | Purpose |
|---|---|
| `strlen()` | Finds string length |
| `strcpy()` | Copies one string into another |
| `strcat()` | Appends one string to another |
| `strcmp()` | Compares two strings |
| `strncpy()` | Copies up to a specified number of characters |
| `strncat()` | Appends up to a specified number of characters |
| `strchr()` | Finds a character in a string |
| `strstr()` | Finds a substring |

These functions operate on null-terminated strings. Destination arrays must have sufficient space when using functions that write into them.

## 12.2 `strlen()` — Finding String Length

The `strlen()` function returns the number of characters before the null terminator.

Syntax:

```c
strlen(string_name);
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Arsh";

    printf("Length = %zu", strlen(name));

    return 0;
}
```

Output:

```text
Length = 4
```

The null terminator is not included in the returned length.

## 12.3 `strcpy()` — Copying a String

The `strcpy()` function copies a source string, including its null terminator, into a destination array.

Syntax:

```c
strcpy(destination, source);
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Programming";
    char destination[20];

    strcpy(destination, source);

    printf("Copied string: %s", destination);

    return 0;
}
```

Output:

```text
Copied string: Programming
```

**Important:** The destination must have enough space for the complete string and its null terminator.

## 12.4 `strcat()` — Joining Strings

The `strcat()` function appends one string to the end of another.

Syntax:

```c
strcat(destination, source);
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char first[30] = "Hello ";
    char second[] = "World";

    strcat(first, second);

    printf("%s", first);

    return 0;
}
```

Output:

```text
Hello World
```

The destination array must have enough free space for the original destination, appended text and null terminator.

## 12.5 `strcmp()` — Comparing Strings

The `strcmp()` function compares two strings lexicographically.

Syntax:

```c
strcmp(string1, string2);
```

Return behavior:

| Return value | Meaning |
|---|---|
| 0 | Both strings are equal |
| Negative value | First string compares before second |
| Positive value | First string compares after second |

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char first[] = "Apple";
    char second[] = "Apple";

    if (strcmp(first, second) == 0) {
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");
    }

    return 0;
}
```

Output:

```text
Strings are equal
```

**Important:** The exact negative or positive value returned by `strcmp()` is not guaranteed. Check whether the result is less than, equal to or greater than zero.

## 12.6 `strncpy()` — Copying a Limited Number of Characters

The `strncpy()` function copies up to a specified number of characters.

Syntax:

```c
strncpy(destination, source, n);
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Programming";
    char destination[20];

    strncpy(destination, source, 4);
    destination[4] = '\0';

    printf("%s", destination);

    return 0;
}
```

Output:

```text
Prog
```

**Important:** `strncpy()` does not always add a null terminator. The programmer must ensure that the destination is properly terminated when necessary.

## 12.7 `strncat()` — Appending a Limited Number of Characters

The `strncat()` function appends at most a specified number of characters from the source string.

Syntax:

```c
strncat(destination, source, n);
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char first[30] = "Hello ";
    char second[] = "Programming";

    strncat(first, second, 4);

    printf("%s", first);

    return 0;
}
```

Output:

```text
Hello Prog
```

The destination must have enough space for the original contents, appended characters and terminating null character.

## 12.8 `strchr()` — Finding a Character

The `strchr()` function finds the first occurrence of a character in a string.

Syntax:

```c
strchr(string_name, character);
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Programming";
    char *result = strchr(name, 'g');

    if (result != NULL) {
        printf("Character found");
    } else {
        printf("Character not found");
    }

    return 0;
}
```

Output:

```text
Character found
```

## 12.9 `strstr()` — Finding a Substring

The `strstr()` function finds the first occurrence of one string inside another.

Syntax:

```c
strstr(main_string, substring);
```

Example:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "C Programming Language";
    char *result = strstr(text, "Programming");

    if (result != NULL) {
        printf("Substring found");
    } else {
        printf("Substring not found");
    }

    return 0;
}
```

Output:

```text
Substring found
```

## 12.10 Summary of String Functions

| Function | Header file | Main purpose |
|---|---|---|
| `strlen()` | `string.h` | Find length |
| `strcpy()` | `string.h` | Copy string |
| `strcat()` | `string.h` | Join strings |
| `strcmp()` | `string.h` | Compare strings |
| `strncpy()` | `string.h` | Copy limited characters |
| `strncat()` | `string.h` | Append limited characters |
| `strchr()` | `string.h` | Find character |
| `strstr()` | `string.h` | Find substring |

---

# 13. Arrays and Functions

## 13.1 Passing an Array to a Function

An array can be passed to a function so that the function can process its elements.

When an array is passed to a function, the parameter is adjusted to a pointer to its first element.

The function does not automatically receive the original array's length. Pass the size separately.

Example:

```c
#include <stdio.h>

void display(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    display(numbers, 5);

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

## 13.2 Modifying Array Elements Through a Function

A function can modify the original array elements because it receives access to the same underlying elements.

Example:

```c
#include <stdio.h>

void update(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] = a[i] * 2;
    }
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    update(numbers, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

Output:

```text
2 4 6 8 10
```

## 13.3 Passing a Two-Dimensional Array to a Function

For a two-dimensional array, the function parameter must provide the column dimension.

Example:

```c
#include <stdio.h>

void display(int a[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    display(matrix, 2);

    return 0;
}
```

Output:

```text
1 2 3
4 5 6
```

## 13.4 Passing a String to a Function

Strings can also be passed to functions using character-array or character-pointer parameters.

Example:

```c
#include <stdio.h>

void display(char name[]) {
    printf("Name: %s", name);
}

int main() {
    char name[] = "Arsh";

    display(name);

    return 0;
}
```

Output:

```text
Name: Arsh
```

## 13.5 Important Notes About Arrays and Functions

- Array parameters provide access to the original array elements.
- The array size is not automatically passed to the function.
- Pass the number of elements separately.
- A function can modify the original array elements.
- A two-dimensional array parameter needs its column dimension.
- A function cannot return an ordinary array type directly in C.

---

# 14. Common Mistakes

Understanding common mistakes helps prevent errors while working with arrays and strings.

## 14.1 Using an Invalid Index

Incorrect:

```c
int a[5] = {1, 2, 3, 4, 5};

printf("%d", a[5]);
```

The valid indices are `0` through `4`.

Correct:

```c
printf("%d", a[4]);
```

## 14.2 Using the Wrong Loop Condition

Incorrect:

```c
for (int i = 0; i <= 5; i++) {
    printf("%d ", a[i]);
}
```

Correct:

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
}
```

## 14.3 Forgetting the Null Terminator

Incorrect:

```c
char name[4] = {'A', 'r', 's', 'h'};
```

This is not a null-terminated string.

Correct:

```c
char name[5] = {'A', 'r', 's', 'h', '\0'};
```

## 14.4 Insufficient String Storage

Incorrect:

```c
char name[4] = "Arsh";
```

There is no room for the terminating null character.

Correct:

```c
char name[5] = "Arsh";
```

## 14.5 Comparing Strings Using `==`

Incorrect:

```c
if (first == second) {
    printf("Equal");
}
```

This compares pointer values when used with string pointers, not the string contents.

Correct:

```c
if (strcmp(first, second) == 0) {
    printf("Equal");
}
```

## 14.6 Using `scanf("%s")` for Full Names

`scanf("%s", name)` stops at whitespace.

For full names or sentences, use `fgets()` with a suitable buffer size.

## 14.7 Forgetting the Required Header File

String functions such as `strlen()` and `strcmp()` require:

```c
#include <string.h>
```

## 14.8 Buffer Overflow

Writing more data into an array than it can hold causes undefined behavior.

Always ensure the destination has enough space, including the null terminator for strings.

## 14.9 Using `sizeof` Incorrectly in Functions

The `sizeof` operator applied to an array parameter gives the size of a pointer, not the original array.

Pass the array length as a separate argument.

## 14.10 Incorrect Two-Dimensional Array Indices

A two-dimensional array requires both row and column indices.

Correct:

```c
matrix[1][2]
```

## 14.11 Forgetting to Initialize Variables

Incorrect:

```c
int sum;

sum = sum + 10;
```

Correct:

```c
int sum = 0;

sum = sum + 10;
```

---

# 15. Best Practices

Follow these practices when working with arrays and strings:

1. Choose meaningful array names.
2. Use constants for fixed array sizes where appropriate.
3. Always check index boundaries.
4. Remember that array indexing begins at zero.
5. Use loops for repetitive array operations.
6. Initialize variables before using them.
7. Allocate enough memory for string characters and the null terminator.
8. Prefer `fgets()` when reading lines containing spaces.
9. Use a width limit with `%s` when reading into a fixed-size character array.
10. Include `string.h` before using standard string functions.
11. Use `strcmp()` to compare string contents.
12. Ensure destination arrays have sufficient capacity before copying or concatenating strings.
13. Pass array sizes explicitly to functions.
14. Avoid accessing elements outside array boundaries.
15. Keep array-processing logic simple and readable.
16. Test programs with different input values, including boundary cases.

---

# 16. Practice Exercises

The following exercises are for independent practice after completing the learning guide.

**Do not consider these exercises completed just because the guide has been created.**

## 16.1 Basic Array Exercises

1. Write a program to declare an integer array of five elements and display all elements.
2. Write a program to accept five numbers from the user and display them.
3. Write a program to calculate the sum of all array elements.
4. Write a program to calculate the average of array elements.
5. Write a program to find the largest element in an array.
6. Write a program to find the smallest element in an array.
7. Write a program to count even and odd elements in an array.
8. Write a program to display array elements in reverse order.
9. Write a program to search for a given element using linear search.
10. Write a program to copy elements from one array to another.

## 16.2 Intermediate Array Exercises

11. Write a program to sort an array in ascending order.
12. Write a program to sort an array in descending order.
13. Write a program to find the second-largest element in an array.
14. Write a program to count duplicate elements in an array.
15. Write a program to merge two arrays.
16. Write a program to remove duplicate elements from an array.
17. Write a program to rotate an array to the left.
18. Write a program to rotate an array to the right.

## 16.3 Two-Dimensional Array Exercises

19. Write a program to declare and display a 3 × 3 matrix.
20. Write a program to accept matrix elements from the user.
21. Write a program to add two matrices.
22. Write a program to subtract two matrices.
23. Write a program to find the transpose of a matrix.
24. Write a program to calculate the sum of diagonal elements.
25. Write a program to find the largest element in a matrix.
26. Write a program to multiply two compatible matrices.

## 16.4 String Exercises

27. Write a program to accept and display a string.
28. Write a program to find the length of a string without using `strlen()`.
29. Write a program to copy one string into another without using `strcpy()`.
30. Write a program to compare two strings without using `strcmp()`.
31. Write a program to concatenate two strings without using `strcat()`.
32. Write a program to reverse a string.
33. Write a program to count vowels and consonants in a string.
34. Write a program to count uppercase and lowercase characters.
35. Write a program to count the number of words in a sentence.
36. Write a program to check whether a string is a palindrome.
37. Write a program to count the occurrences of a particular character.
38. Write a program to remove spaces from a string.

## 16.5 Challenge Exercises

39. Write a program to find the frequency of every element in an array.
40. Write a program to find the common elements between two arrays.
41. Write a program to perform matrix multiplication.
42. Write a program to check whether a matrix is an identity matrix.
43. Write a program to check whether a string is an anagram of another string.
44. Write a program to find the first non-repeating character in a string.
45. Write a program to reverse the order of words in a sentence.

---

# 17. Key Takeaways

After studying this module, remember:

- An array stores multiple elements of the same data type.
- Array indexing starts from zero.
- The last valid index is `size - 1`.
- Arrays are stored in consecutive memory locations.
- The `sizeof` operator can determine an array's total size in bytes.
- Loops are commonly used to traverse arrays.
- One-dimensional arrays use one index.
- Two-dimensional arrays use row and column indices.
- A string is a null-terminated character sequence.
- The null character is represented by `'\0'`.
- `strlen()` finds string length.
- `strcpy()` copies strings.
- `strcat()` joins strings.
- `strcmp()` compares string contents.
- `fgets()` can read strings containing spaces.
- Arrays can be passed to functions.
- Array sizes should be passed separately when required.
- Accessing memory outside an array's boundaries can cause undefined behavior.

---

## ✅ Module Completion Checklist

Use this checklist to track your learning progress.

- [ ] Understand the concept of arrays.
- [ ] Understand array declaration and initialization.
- [ ] Understand array indexing.
- [ ] Access and modify array elements.
- [ ] Perform basic array operations.
- [ ] Understand one-dimensional arrays.
- [ ] Understand multidimensional arrays.
- [ ] Work with two-dimensional arrays.
- [ ] Understand strings and null termination.
- [ ] Declare and initialize strings.
- [ ] Read strings using `scanf()` and `fgets()`.
- [ ] Display strings using `printf()` and `puts()`.
- [ ] Understand standard string-handling functions.
- [ ] Pass arrays and strings to functions.
- [ ] Identify common mistakes.
- [ ] Complete the practice exercises.

---

## 🔗 Module Navigation

<p align="center">
  ⬅️ **Previous Module**
  <br>
  <a href="../04-Loops/README.md">Module 04 — Loops</a>
</p>

<p align="center">
  **Current Module: Module 05 — Arrays and Strings**
</p>

<p align="center">
  **Next Module**
  <br>
  [Module 06 — Functions](../06-Functions/README.md)
  <br>
  ➡️
</p>

---

<p align="center">
  **C Programming Learning Repository**
  <br>
  Learn • Practice • Build • Improve
</p>

<p align="center">
  Made with dedication as part of the C Programming learning journey.
</p>
