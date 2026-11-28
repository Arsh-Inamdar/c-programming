# 08. Structures and Unions in C

<p align="center">
  <strong>Mastering User-Defined Data Types in C</strong>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language C">
  <img src="https://img.shields.io/badge/Level-Intermediate-orange.svg" alt="Intermediate Level">
  <img src="https://img.shields.io/badge/Module-08-purple.svg" alt="Module 08">
</p>

---

## 📌 Introduction

Structures and unions are user-defined data types in C that allow programmers to organize and manage related data efficiently.

A structure groups multiple variables, potentially of different data types, under a single name. A union also groups different data types, but its members share the same memory location.

These concepts are essential when developing programs that represent real-world entities, manage collections of records, work with memory efficiently, and build more complex data structures.

In this module, we will explore structures and unions from their basic declarations to advanced concepts such as nested structures, pointers, bit fields, memory alignment, and practical applications.

---

## 🎯 Learning Objectives

By completing this module, you will be able to:

- Understand the purpose and advantages of structures and unions.
- Declare, define, initialize, and access structure variables.
- Work with structure members of different data types.
- Create and process arrays of structures.
- Implement nested structures.
- Pass structures to functions and return structures from functions.
- Work with structure pointers and the arrow (`->`) operator.
- Use `typedef` to create convenient structure type names.
- Understand self-referential structures.
- Explore structure padding, alignment, and memory allocation.
- Use bit fields to manage individual bits.
- Declare, initialize, and access union members.
- Understand memory sharing in unions.
- Differentiate between structures and unions.
- Apply structures and unions in practical C programs.

---

## 📚 Table of Contents

1. [Introduction to Structures](#1-introduction-to-structures)
2. [Structure Declaration and Definition](#2-structure-declaration-and-definition)
3. [Structure Variables and Initialization](#3-structure-variables-and-initialization)
4. [Accessing Structure Members](#4-accessing-structure-members)
5. [Modifying and Updating Structure Members](#5-modifying-and-updating-structure-members)
6. [Structures with Different Data Types](#6-structures-with-different-data-types)
7. [Arrays of Structures](#7-arrays-of-structures)
8. [Input and Output of Structures](#8-input-and-output-of-structures)
9. [Nested Structures](#9-nested-structures)
10. [Passing Structures to Functions](#10-passing-structures-to-functions)
11. [Structure Pointers and Arrow Operator](#11-structure-pointers-and-arrow-operator)
12. [Returning Structures from Functions](#12-returning-structures-from-functions)
13. [typedef with Structures](#13-typedef-with-structures)
14. [Self-Referential Structures](#14-self-referential-structures)
15. [Structure Padding, Alignment and sizeof](#15-structure-padding-alignment-and-sizeof)
16. [Bit Fields in Structures](#16-bit-fields-in-structures)
17. [Introduction to Unions](#17-introduction-to-unions)
18. [Union Declaration, Initialization and Memory Sharing](#18-union-declaration-initialization-and-memory-sharing)
19. [Structures vs Unions and Practical Applications](#19-structures-vs-unions-and-practical-applications)
20. [Common Mistakes, Best Practices and Key Takeaways](#20-common-mistakes-best-practices-and-key-takeaways)
21. [Practical Programs](#21-practical-programs)
22. [Module Completion Checklist and Navigation](#22-module-completion-checklist-and-navigation)
---

## 1. Introduction to Structures

### 1.1 What Is a Structure?

A structure is a user-defined data type in C that groups multiple variables of different data types under a single name.

Each variable inside a structure is called a **member** or **structure member**.

Consider a student record. It may contain:

- Roll number (`int`)
- Name (`char` array)
- Marks (`float`)
- Grade (`char`)

Without structures, we would need separate variables for every piece of information. Managing multiple student records this way can become difficult.

A structure allows us to combine all related information into one logical unit.

### 1.2 Why Do We Need Structures?

Structures are useful when a program needs to represent entities containing multiple related attributes.

For example:

| Entity | Possible structure members |
|---|---|
| Student | Roll number, name, marks |
| Employee | ID, name, salary |
| Book | Title, author, price |
| Product | Product ID, name, quantity |
| Date | Day, month, year |

**Advantages of structures:**

1. **Logical grouping:** Related information is stored together.
2. **Different data types:** A single structure can contain integers, characters, floating-point values, arrays, and other structures.
3. **Better organization:** Programs become easier to understand and maintain.
4. **Reusable definitions:** One structure definition can be used to create many variables.
5. **Function integration:** Structures can be passed to functions and returned from functions.
6. **Complex data structures:** Structures are fundamental to linked lists, trees, graphs, and other data structures.

### 1.3 Structure vs Ordinary Variables

Consider a program that stores information about one student.

Without a structure:

```c
int rollNumber = 101;
char name[50] = "Arjun";
float marks = 89.5f;
```

These variables are independent. Their relationship exists only through the programmer's naming and usage.

Using a structure, we can group the information into one student record:

```c
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
```

Now the three members belong to one user-defined data type.

### 1.4 Important Characteristics of Structures

- A structure can contain members of different data types.
- Each member has its own storage within the structure object.
- Structure members are accessed using the dot (`.`) operator when working with a structure variable.
- Multiple variables can be created using the same structure definition.
- A structure can contain arrays, pointers, and other structures.
- The compiler may insert padding bytes between members for alignment.

**Remember:** A structure definition describes a data type. Actual storage for its members is allocated when structure variables are created.

---

## 2. Structure Declaration and Definition

### 2.1 Basic Syntax

A structure is declared using the `struct` keyword.

**Syntax:**

```c
struct StructureName {
    dataType member1;
    dataType member2;
    dataType member3;
};
```

**Explanation:**

- `struct` is the keyword used to define a structure type.
- `StructureName` is the name of the structure tag.
- The statements inside the braces declare its members.
- Each member has its own data type and identifier.
- The semicolon after the closing brace is mandatory.

### 2.2 Declaring a Structure Type

Example:

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    return 0;
}
```

**Explanation:**

In this example:

- `Student` is the structure tag.
- `rollNumber` is an integer member.
- `name` is a character array member.
- `marks` is a floating-point member.

This declaration introduces the structure type. It does not create a `Student` variable.

### 2.3 Declaring Structure Variables Separately

After defining a structure type, we can declare variables using the `struct` keyword and structure tag.

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student1;
    struct Student student2;

    return 0;
}
```

Here, `student1` and `student2` are two separate structure variables of type `struct Student`.

Each variable has its own members and storage.

### 2.4 Declaring Variables Along with the Structure Definition

Structure variables can also be declared immediately after the closing brace.

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
} student1, student2;

int main(void) {
    return 0;
}
```

In this example, the structure type and two variables are declared together.

This approach is valid, although declaring variables separately is often clearer in larger programs.

### 2.5 Structure Tag and Structure Variable

A structure tag identifies the structure type, while a structure variable represents an actual object of that type.

```c
struct Employee {
    int id;
    float salary;
};

int main(void) {
    struct Employee employee1;

    return 0;
}
```

In this example:

- `Employee` is the structure tag.
- `employee1` is the structure variable.
- `id` and `salary` are structure members.

**Important:** In C, the structure tag and its variables belong to different identifier namespaces. A structure tag is used with the `struct` keyword unless a `typedef` alias is created.

### 2.6 Structure Declaration Without a Tag

C also supports anonymous structure types.

```c
struct {
    int id;
    float salary;
} employee1, employee2;
```

Here, the structure has no tag. The variables are declared directly.

This approach is useful for a small, limited declaration, but it does not provide a reusable structure tag for declaring additional variables later.

### 2.7 Forward Declaration of a Structure

A structure can be declared before its complete definition.

```c
struct Node;

struct Node {
    int data;
    struct Node *next;
};
```

The first line introduces the structure tag `Node`. Its complete definition follows later.

Forward declarations are useful when working with pointers and mutually related structure types.

---

## 3. Structure Variables and Initialization

### 3.1 Declaring Structure Variables

Once a structure type has been defined, we can create one or more variables of that type.

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student1;
    struct Student student2;

    return 0;
}
```

Both variables have the same member arrangement, but each variable stores its own values.

### 3.2 Initializing Structure Variables

A structure variable can be initialized when it is declared.

**Syntax:**

```c
struct StructureName variableName = {
    value1,
    value2,
    value3
};
```

The values are assigned to members in the order in which the members are declared.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student1 = {101, "Arjun", 89.5f};

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Name: Arjun
Marks: 89.50
```

**Explanation:**

- `101` initializes `rollNumber`.
- `"Arjun"` initializes the character array `name`.
- `89.5f` initializes `marks`.
- The values follow the order of member declarations.

### 3.3 Partial Structure Initialization

C allows a structure variable to be initialized with fewer values than the number of members.

Members that are not explicitly initialized are initialized to zero.

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
    int experience;
};

int main(void) {
    struct Employee employee1 = {101, 45000.0f};

    printf("ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Experience: %d\n", employee1.experience);

    return 0;
}
```

**Expected Output:**

```text
ID: 101
Salary: 45000.00
Experience: 0
```

Here, `experience` is initialized to zero because it was omitted from the initializer.

### 3.4 Designated Initializers

C99 introduced designated initializers, which allow structure members to be initialized by specifying their names.

**Syntax:**

```c
struct StructureName variableName = {
    .member1 = value1,
    .member2 = value2
};
```

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student1 = {
        .marks = 92.5f,
        .name = "Priya",
        .rollNumber = 102
    };

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 102
Name: Priya
Marks: 92.50
```

**Advantages:**

- Members can be initialized in a different order.
- The code is easier to read when structures contain many members.
- The member names make the initialization more understandable.

**Note:** Designated initializers are supported from the C99 standard onward.

### 3.5 Initializing Structure Variables to Zero

A structure variable can be initialized with `{0}`.

```c
#include <stdio.h>

struct Product {
    int productId;
    float price;
    int quantity;
};

int main(void) {
    struct Product product1 = {0};

    printf("Product ID: %d\n", product1.productId);
    printf("Price: %.2f\n", product1.price);
    printf("Quantity: %d\n", product1.quantity);

    return 0;
}
```

**Expected Output:**

```text
Product ID: 0
Price: 0.00
Quantity: 0
```

This initializes the first member to zero and all remaining members are initialized according to aggregate initialization rules.

### 3.6 Copying One Structure Variable to Another

Structure variables of the same compatible structure type can be assigned directly.

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float marks;
};

int main(void) {
    struct Student student1 = {101, 85.5f};
    struct Student student2;

    student2 = student1;

    printf("Student 1: %d, %.2f\n",
           student1.rollNumber, student1.marks);

    printf("Student 2: %d, %.2f\n",
           student2.rollNumber, student2.marks);

    return 0;
}
```

**Expected Output:**

```text
Student 1: 101, 85.50
Student 2: 101, 85.50
```

The assignment copies the values of all structure members.

**Important:** Structure assignment performs a member-wise value copy. If a structure contains pointer members, the pointer values are copied, not the memory they point to. This is a shallow copy.

### 3.7 Important Rules for Structure Initialization

1. Structure members are initialized in declaration order when positional initialization is used.
2. Members omitted from an aggregate initializer are initialized to zero.
3. Designated initializers identify members by name.
4. A structure variable can be assigned to another compatible structure variable.
5. A structure containing an array member can be initialized using an aggregate initializer.
6. An already declared structure variable cannot be initialized again using an initializer list through ordinary assignment.

**Remember:** Initialization happens when a variable is created. Later changes to its members are performed using assignment statements.

---

## 4. Accessing Structure Members

### 4.1 Introduction

After creating a structure variable, we can access its individual members using the **dot (`.`) operator**.

The dot operator connects a structure variable with one of its members.

Each member can be accessed independently using the structure variable name and member name.

### 4.2 Syntax of the Dot Operator

**Syntax:**

```c
structureVariable.memberName;
```

**Explanation:**

- `structureVariable` is the name of the structure variable.
- `.` is the member access operator.
- `memberName` is the name of the member that we want to access.

### 4.3 Accessing Individual Structure Members

Consider the following example:

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main(void) {
    struct Student student1 = {101, "Arjun", 89.5f};

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Name: Arjun
Marks: 89.50
```

**Explanation:**

- `student1.rollNumber` accesses the integer member.
- `student1.name` accesses the character array member.
- `student1.marks` accesses the floating-point member.

Each expression accesses the corresponding member of `student1`.

### 4.4 Accessing Members of Multiple Structure Variables

A structure definition can be used to create multiple variables.

Each variable has its own independent set of members.

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main(void) {
    struct Employee employee1 = {101, 35000.0f};
    struct Employee employee2 = {102, 45000.0f};

    printf("Employee 1 ID: %d\n", employee1.id);
    printf("Employee 1 Salary: %.2f\n", employee1.salary);

    printf("\nEmployee 2 ID: %d\n", employee2.id);
    printf("Employee 2 Salary: %.2f\n", employee2.salary);

    return 0;
}
```

**Expected Output:**

```text
Employee 1 ID: 101
Employee 1 Salary: 35000.00

Employee 2 ID: 102
Employee 2 Salary: 45000.00
```

**Explanation:**

Although both variables use the same structure definition, their member values are stored independently.

Changing `employee1.salary` does not automatically change `employee2.salary`.

### 4.5 Accessing Structure Members in Expressions

Structure members can also be used directly in arithmetic and logical expressions.

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float marks;
};

int main(void) {
    struct Student student1 = {101, 85.0f};

    float bonusMarks = 5.0f;
    float totalMarks;

    totalMarks = student1.marks + bonusMarks;

    printf("Original Marks: %.2f\n", student1.marks);
    printf("Bonus Marks: %.2f\n", bonusMarks);
    printf("Total Marks: %.2f\n", totalMarks);

    return 0;
}
```

**Expected Output:**

```text
Original Marks: 85.00
Bonus Marks: 5.00
Total Marks: 90.00
```

Here, `student1.marks` is used as an operand in an arithmetic expression.

### 4.6 Accessing Character Array Members

A structure can contain character arrays that store strings.

These members can be accessed using the dot operator and displayed using the `%s` format specifier.

```c
#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    float price;
};

int main(void) {
    struct Book book1 = {
        "The C Programming Language",
        "Dennis Ritchie",
        550.0f
    };

    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Price: %.2f\n", book1.price);

    return 0;
}
```

**Expected Output:**

```text
Book Title: The C Programming Language
Author: Dennis Ritchie
Price: 550.00
```

**Note:** A character array member can be initialized as part of the structure initializer. However, an existing character array member cannot be assigned a new string using the ordinary `=` operator after declaration. Functions such as `strcpy()` can be used for that purpose.

### 4.7 Accessing Members of an Array of Structures

When an array contains structure variables, we can access a particular member by combining the array index with the dot operator.

**Syntax:**

```c
arrayName[index].memberName;
```

Example:

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float marks;
};

int main(void) {
    struct Student students[3] = {
        {101, 85.5f},
        {102, 90.0f},
        {103, 78.5f}
    };

    printf("Second Student Roll Number: %d\n",
           students[1].rollNumber);

    printf("Second Student Marks: %.2f\n",
           students[1].marks);

    return 0;
}
```

**Expected Output:**

```text
Second Student Roll Number: 102
Second Student Marks: 90.00
```

Here, `students[1]` refers to the second structure variable in the array.

The dot operator then accesses its individual members.

**Remember:** Array indexing starts from zero in C.

### 4.8 Important Points About Accessing Structure Members

1. The dot operator is used to access members through a structure variable.
2. The member name must exist in the corresponding structure definition.
3. Each structure variable maintains its own member values.
4. Structure members can be used in expressions, function arguments, and output statements.
5. Array elements containing structures can be accessed using an index followed by the dot operator.
6. Structure pointers use the arrow (`->`) operator for direct member access, which will be discussed later.

---

## 5. Modifying and Updating Structure Members

### 5.1 Introduction

Structure members are not limited to storing their initial values.

After declaring a structure variable, we can modify individual members using assignment statements.

The dot operator is used to identify the member whose value needs to be changed.

### 5.2 Modifying Individual Members

**Syntax:**

```c
structureVariable.memberName = newValue;
```

Example:

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float marks;
};

int main(void) {
    struct Student student1 = {101, 75.0f};

    printf("Before Updating: %.2f\n", student1.marks);

    student1.marks = 90.0f;

    printf("After Updating: %.2f\n", student1.marks);

    return 0;
}
```

**Expected Output:**

```text
Before Updating: 75.00
After Updating: 90.00
```

**Explanation:**

Initially, the `marks` member contains `75.0`.

The assignment statement:

```c
student1.marks = 90.0f;
```

updates that member to `90.0`.

Other members of the structure remain unchanged.

### 5.3 Updating Multiple Structure Members

We can update multiple members independently using separate assignment statements.

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
    int experience;
};

int main(void) {
    struct Employee employee1 = {101, 30000.0f, 2};

    employee1.salary = 45000.0f;
    employee1.experience = 3;

    printf("Employee ID: %d\n", employee1.id);
    printf("Updated Salary: %.2f\n", employee1.salary);
    printf("Updated Experience: %d years\n",
           employee1.experience);

    return 0;
}
```

**Expected Output:**

```text
Employee ID: 101
Updated Salary: 45000.00
Updated Experience: 3 years
```

The `id` member remains unchanged because only the salary and experience members were updated.

### 5.4 Updating Structure Members Using Arithmetic Operations

Structure members can be modified using arithmetic operators.

For example, we can increase an employee's salary by a percentage.

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main(void) {
    struct Employee employee1 = {101, 40000.0f};

    printf("Original Salary: %.2f\n", employee1.salary);

    employee1.salary = employee1.salary + 5000.0f;

    printf("Updated Salary: %.2f\n", employee1.salary);

    return 0;
}
```

**Expected Output:**

```text
Original Salary: 40000.00
Updated Salary: 45000.00
```

We can also use compound assignment operators:

```c
employee1.salary += 5000.0f;
```

This performs the same update.

### 5.5 Updating Members Using Increment and Decrement Operators

If a structure member is an integer, we can use increment and decrement operators to modify its value.

```c
#include <stdio.h>

struct Product {
    int productId;
    int quantity;
};

int main(void) {
    struct Product product1 = {501, 10};

    printf("Initial Quantity: %d\n", product1.quantity);

    product1.quantity++;

    printf("After Adding One: %d\n", product1.quantity);

    product1.quantity--;

    printf("After Removing One: %d\n", product1.quantity);

    return 0;
}
```

**Expected Output:**

```text
Initial Quantity: 10
After Adding One: 11
After Removing One: 10
```

The increment operator increases the quantity by one, while the decrement operator decreases it by one.

### 5.6 Updating Structure Members Through Conditional Statements

Structure members can be used in conditions and modified according to the result.

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float marks;
    char grade;
};

int main(void) {
    struct Student student1 = {101, 92.0f, 'C'};

    if (student1.marks >= 90.0f) {
        student1.grade = 'A';
    }
    else if (student1.marks >= 75.0f) {
        student1.grade = 'B';
    }
    else {
        student1.grade = 'C';
    }

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);
    printf("Updated Grade: %c\n", student1.grade);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Marks: 92.00
Updated Grade: A
```

Here, the program checks the student's marks and updates the `grade` member accordingly.

### 5.7 Modifying Structure Members Through User Input

We can also use input functions to update structure members at runtime.

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float marks;
};

int main(void) {
    struct Student student1 = {101, 75.0f};

    printf("Enter updated marks: ");

    if (scanf("%f", &student1.marks) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Updated Student Record\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
```

**Sample Input:**

```text
88.5
```

**Expected Output:**

```text
Enter updated marks: 88.5
Updated Student Record
Roll Number: 101
Marks: 88.50
```

**Explanation:**

- `student1.marks` identifies the member that needs to be updated.
- `&student1.marks` provides its address to `scanf()`.
- The entered value is stored directly in the structure member.
- The updated value is displayed using `printf()`.

Checking the return value of `scanf()` helps detect invalid input.

### 5.8 Important Rules for Modifying Structure Members

1. Individual structure members can be updated using assignment statements.
2. The assigned value must be compatible with the member's data type.
3. Updating one member does not automatically modify other members.
4. Arithmetic, increment, and decrement operators can be used where appropriate.
5. Structure members can be modified inside conditional statements and loops.
6. Input functions can store values directly into individual members.
7. Array members cannot be assigned new arrays using ordinary array assignment.

**Remember:** The dot operator is used both to access and to modify members of a structure variable.

---


---

## 6. Structures with Different Data Types

### 6.1 Overview

One of the most useful features of structures in C is that a single structure can contain members of different data types.

Unlike arrays, where all elements must have the same data type, structures allow us to group related information of different types under one name.

For example, a student record may contain:

- An integer for the student's roll number.
- A character array for the student's name.
- A floating-point value for the student's percentage.
- A character for the student's grade.

### 6.2 Combining Integer, Floating-Point, and Character Members

A structure can contain members such as `int`, `float`, `double`, and `char`.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char grade;
    float percentage;
    double attendance;
};

int main(void) {
    struct Student student1 = {101, 'A', 89.5f, 92.75};

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Grade: %c\n", student1.grade);
    printf("Percentage: %.2f\n", student1.percentage);
    printf("Attendance: %.2lf%%\n", student1.attendance);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Grade: A
Percentage: 89.50
Attendance: 92.75%
```

**Explanation:**

- `rollNumber` stores an integer value.
- `grade` stores a single character.
- `percentage` stores a floating-point value.
- `attendance` stores a double-precision value.

All these members belong to the same `Student` structure.

### 6.3 Using Arrays as Structure Members

A structure member can also be an array.

This is useful when a record needs to store multiple characters, numbers, or other values of the same type.

For example, a student's name can be stored using a character array.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float percentage;
};

int main(void) {
    struct Student student1 = {
        101,
        "Arjun",
        88.5f
    };

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Percentage: %.2f\n", student1.percentage);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Name: Arjun
Percentage: 88.50
```

**Explanation:**

The `name` member is a character array of 50 elements. It can store a string containing up to 49 characters plus the terminating null character.

Other array members can also be used:

```c
struct Marks {
    int subjectMarks[5];
};
```

Here, `subjectMarks` stores five integer values.

**Important:** Structure members that are arrays cannot be assigned directly using the assignment operator after the structure has been created. Use functions such as `strcpy()` for character arrays or loops for other arrays.

### 6.4 Using Pointers as Structure Members

A structure can contain pointer members.

A pointer member stores the address of another variable rather than directly storing that variable's value.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
    int *experience;
};

int main(void) {
    int years = 3;

    struct Employee employee1;

    employee1.id = 201;
    employee1.salary = 45000.0f;
    employee1.experience = &years;

    printf("Employee ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Experience: %d years\n", *employee1.experience);

    return 0;
}
```

**Expected Output:**

```text
Employee ID: 201
Salary: 45000.00
Experience: 3 years
```

**Explanation:**

- `experience` is a pointer to an integer.
- `&years` assigns the address of the `years` variable to the pointer.
- `*employee1.experience` accesses the value stored at that address.

**Important:** A pointer member should point to a valid object before it is dereferenced. The pointed-to object's lifetime must also be long enough for every use of the pointer.

### 6.5 Complete Example: Structure with Multiple Data Types

The following example combines integer, character array, floating-point, and array members.

**Example:**

```c
#include <stdio.h>

struct Product {
    int productId;
    char name[30];
    float price;
    int stock[3];
};

int main(void) {
    struct Product product1 = {
        501,
        "Keyboard",
        799.50f,
        {10, 15, 20}
    };

    printf("Product ID: %d\n", product1.productId);
    printf("Product Name: %s\n", product1.name);
    printf("Price: %.2f\n", product1.price);

    printf("Stock Details:\n");

    for (int i = 0; i < 3; i++) {
        printf("Warehouse %d: %d units\n",
               i + 1, product1.stock[i]);
    }

    return 0;
}
```

**Expected Output:**

```text
Product ID: 501
Product Name: Keyboard
Price: 799.50
Stock Details:
Warehouse 1: 10 units
Warehouse 2: 15 units
Warehouse 3: 20 units
```

**Explanation:**

This example demonstrates how a structure can combine different types of information in one record.

The `stock` member is an integer array, while the other members store an integer, a string, and a floating-point value.

### 6.6 Important Considerations

When using different data types inside structures, remember the following:

1. A structure can contain members of different data types.
2. Structure members can be ordinary variables, arrays, or pointers.
3. Every member has its own data type and memory requirements.
4. Array members are part of the structure itself.
5. Pointer members store addresses, not copies of the pointed-to data.
6. A pointer must refer to a valid object before it is dereferenced.
7. Structure members are accessed using the dot operator when working with a structure variable.

---

## 7. Arrays of Structures

### 7.1 Introduction to Arrays of Structures

An array of structures is an array in which every element is a structure variable of the same structure type.

It is useful when we need to store multiple records containing the same set of information.

For example, a student management program may need to store information about 50 students.

Creating 50 separate structure variables would be inconvenient. Instead, we can declare an array of structures.

**General Syntax:**

```c
struct StructureName arrayName[size];
```

Where:

- `struct StructureName` specifies the structure type.
- `arrayName` is the name of the array.
- `size` specifies the maximum number of structure elements.

### 7.2 Declaring an Array of Structures

Consider a structure that stores student information.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float percentage;
};

int main(void) {
    struct Student students[3];

    return 0;
}
```

**Explanation:**

The declaration:

```c
struct Student students[3];
```

creates an array containing three structure variables:

- `students[0]`
- `students[1]`
- `students[2]`

Each element contains its own `rollNumber`, `name`, and `percentage` members.

### 7.3 Initializing an Array of Structures

An array of structures can be initialized when it is declared.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float percentage;
};

int main(void) {
    struct Student students[3] = {
        {101, "Aarav", 85.5f},
        {102, "Diya", 91.0f},
        {103, "Rohan", 78.5f}
    };

    printf("Student Records:\n");

    for (int i = 0; i < 3; i++) {
        printf("%d  %s  %.2f%%\n",
               students[i].rollNumber,
               students[i].name,
               students[i].percentage);
    }

    return 0;
}
```

**Expected Output:**

```text
Student Records:
101  Aarav  85.50%
102  Diya  91.00%
103  Rohan  78.50%
```

**Explanation:**

Each inner set of braces initializes one structure element.

For example:

```c
{101, "Aarav", 85.5f}
```

initializes the first student record.

Similarly, the next two sets initialize the second and third records.

### 7.4 Accessing Members of an Array of Structures

To access a member of an individual structure element, combine the array subscript operator `[]` with the dot operator `.`.

**General Syntax:**

```c
arrayName[index].memberName
```

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float percentage;
};

int main(void) {
    struct Student students[2] = {
        {101, "Aarav", 85.5f},
        {102, "Diya", 91.0f}
    };

    printf("First Student: %s\n", students[0].name);
    printf("Second Student: %s\n", students[1].name);

    students[0].percentage = 89.0f;

    printf("Updated Percentage: %.2f\n",
           students[0].percentage);

    return 0;
}
```

**Expected Output:**

```text
First Student: Aarav
Second Student: Diya
Updated Percentage: 89.00
```

**Explanation:**

- `students[0].name` accesses the name of the first student.
- `students[1].name` accesses the name of the second student.
- `students[0].percentage` accesses the first student's percentage.

The array index identifies the structure variable, and the dot operator identifies the member within that variable.

### 7.5 Traversing an Array of Structures Using Loops

Loops are commonly used to process every element of an array of structures.

A `for` loop can access each record using its index.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main(void) {
    struct Employee employees[4] = {
        {201, 25000.0f},
        {202, 30000.0f},
        {203, 28000.0f},
        {204, 35000.0f}
    };

    for (int i = 0; i < 4; i++) {
        printf("Employee ID: %d\n", employees[i].id);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }

    return 0;
}
```

**Expected Output:**

```text
Employee ID: 201
Salary: 25000.00

Employee ID: 202
Salary: 30000.00

Employee ID: 203
Salary: 28000.00

Employee ID: 204
Salary: 35000.00
```

**Explanation:**

The loop executes four times, with `i` ranging from 0 to 3.

During each iteration:

1. `employees[i]` selects one structure element.
2. `.id` accesses its employee ID.
3. `.salary` accesses its salary.

This approach avoids writing separate statements for every employee.

### 7.6 Accepting and Displaying an Array of Structures

An array of structures can store records entered by the user at runtime.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float percentage;
};

int main(void) {
    struct Student students[3];

    printf("Enter details of 3 students:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll number: ");
        if (scanf("%d", &students[i].rollNumber) != 1) {
            printf("Invalid roll number.\n");
            return 1;
        }

        printf("Enter name: ");
        if (scanf("%29s", students[i].name) != 1) {
            printf("Invalid name.\n");
            return 1;
        }

        printf("Enter percentage: ");
        if (scanf("%f", &students[i].percentage) != 1) {
            printf("Invalid percentage.\n");
            return 1;
        }
    }

    printf("\n--- Student Records ---\n");

    for (int i = 0; i < 3; i++) {
        printf("\nRoll Number: %d\n",
               students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f%%\n",
               students[i].percentage);
    }

    return 0;
}
```

**Sample Input:**

```text
101
Aarav
85.5
102
Diya
91.0
103
Rohan
78.5
```

**Expected Output:**

```text
Enter details of 3 students:

Student 1
Enter roll number: 101
Enter name: Aarav
Enter percentage: 85.5

Student 2
Enter roll number: 102
Enter name: Diya
Enter percentage: 91.0

Student 3
Enter roll number: 103
Enter name: Rohan
Enter percentage: 78.5

--- Student Records ---

Roll Number: 101
Name: Aarav
Percentage: 85.50%

Roll Number: 102
Name: Diya
Percentage: 91.00%

Roll Number: 103
Name: Rohan
Percentage: 78.50%
```

**Explanation:**

The first loop accepts the details of three students and stores them in separate structure elements.

The second loop displays all stored records.

The `%29s` format specifier limits the input to 29 characters, leaving space for the terminating null character in the 30-character array.

**Note:** `%s` reads only one word. Names containing spaces require a line-based input approach, such as `fgets()`.

### 7.7 Searching for a Record in an Array of Structures

We can search an array of structures using a loop and a condition.

For example, a student can be searched using their roll number.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float percentage;
};

int main(void) {
    struct Student students[4] = {
        {101, "Aarav", 85.5f},
        {102, "Diya", 91.0f},
        {103, "Rohan", 78.5f},
        {104, "Meera", 88.0f}
    };

    int searchRoll;
    int found = 0;

    printf("Enter roll number to search: ");
    if (scanf("%d", &searchRoll) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < 4; i++) {
        if (students[i].rollNumber == searchRoll) {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n",
                   students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Percentage: %.2f%%\n",
                   students[i].percentage);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student record not found.\n");
    }

    return 0;
}
```

**Sample Input:**

```text
Enter roll number to search: 103
```

**Expected Output:**

```text
Student Found!
Roll Number: 103
Name: Rohan
Percentage: 78.50%
```

**Explanation:**

1. The program accepts a roll number to search.
2. The loop checks each student record.
3. The condition compares the stored roll number with the search value.
4. If a match is found, the corresponding record is displayed.
5. The `break` statement stops the search after finding the record.
6. If no match is found, the program displays an appropriate message.

This is an example of a linear search using an array of structures.

### 7.8 Updating a Record in an Array of Structures

We can also modify a particular record by locating its array element and updating one or more members.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main(void) {
    struct Employee employees[3] = {
        {201, "Aarav", 25000.0f},
        {202, "Diya", 30000.0f},
        {203, "Rohan", 28000.0f}
    };

    int searchId;
    int found = 0;

    printf("Enter employee ID to update: ");
    if (scanf("%d", &searchId) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        if (employees[i].id == searchId) {
            printf("Current Salary: %.2f\n",
                   employees[i].salary);

            printf("Enter new salary: ");
            if (scanf("%f", &employees[i].salary) != 1) {
                printf("Invalid salary.\n");
                return 1;
            }

            found = 1;
            printf("Employee record updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Employee record not found.\n");
    }

    printf("\n--- Employee Records ---\n");

    for (int i = 0; i < 3; i++) {
        printf("%d  %s  %.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].salary);
    }

    return 0;
}
```

**Sample Input:**

```text
Enter employee ID to update: 202
Enter new salary: 35000
```

**Expected Output:**

```text
Current Salary: 30000.00
Employee record updated successfully.

--- Employee Records ---
201  Aarav  25000.00
202  Diya  35000.00
203  Rohan  28000.00
```

**Explanation:**

The program searches for an employee using their ID.

When a matching record is found, it updates the salary member directly:

```c
employees[i].salary = newSalary;
```

In this example, the new salary is read directly into the selected structure member.

### 7.9 Important Considerations

When working with arrays of structures, remember the following:

1. Every element of an array of structures has the same structure type.
2. Array indexing starts from zero.
3. Use the array subscript operator `[]` to select a structure element.
4. Use the dot operator `.` to access a member of that element.
5. Loops make it easier to input, display, search, and update records.
6. The array size determines how many records can be stored.
7. Always ensure that an array index is within its valid range.
8. Validate user input before using values read through `scanf()`.
9. Arrays of structures are useful in student management, employee records, inventory systems, and other record-based applications.

---

---

## 8. Input and Output of Structures

### 8.1 Introduction

Structures allow us to group related information into a single record. In practical applications, we often need to accept structure data from users and display the stored information.

C does not provide a special input or output function for structures. Instead, we use standard input/output functions such as `scanf()` and `printf()` to work with individual structure members.

The dot operator (`.`) is used to access members when working with a structure variable.

### 8.2 Accepting Integer and Floating-Point Members

To accept values for structure members, pass the address of each member to `scanf()`.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main(void) {
    struct Employee employee1;

    printf("Enter employee ID: ");
    if (scanf("%d", &employee1.id) != 1) {
        printf("Invalid ID.\n");
        return 1;
    }

    printf("Enter employee salary: ");
    if (scanf("%f", &employee1.salary) != 1) {
        printf("Invalid salary.\n");
        return 1;
    }

    printf("\nEmployee Details\n");
    printf("ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);

    return 0;
}
```

**Sample Input:**

```text
Enter employee ID: 101
Enter employee salary: 35000
```

**Expected Output:**

```text
Employee Details
ID: 101
Salary: 35000.00
```

**Explanation:**

- `&employee1.id` provides the address of the integer member.
- `&employee1.salary` provides the address of the floating-point member.
- `%d` is used for an integer.
- `%f` is used for reading a `float`.

Always check the return value of `scanf()` to ensure that the expected input was successfully read.

### 8.3 Accepting Character Array Members

Character arrays are commonly used to store names, addresses, and other text information inside structures.

For a single-word string, `%s` can be used with `scanf()`.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
};

int main(void) {
    struct Student student1;

    printf("Enter roll number: ");
    if (scanf("%d", &student1.rollNumber) != 1) {
        printf("Invalid roll number.\n");
        return 1;
    }

    printf("Enter student name: ");
    if (scanf("%29s", student1.name) != 1) {
        printf("Invalid name.\n");
        return 1;
    }

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);

    return 0;
}
```

**Sample Input:**

```text
Enter roll number: 102
Enter student name: Aarav
```

**Expected Output:**

```text
Student Details
Roll Number: 102
Name: Aarav
```

**Explanation:**

Unlike ordinary integer members, a character array name is already an address that points to its first element.

Therefore, we use:

```c
scanf("%29s", student1.name);
```

We do not use `&student1.name` with `%s`.

The width limit prevents writing more characters than the array can hold. The remaining position is reserved for the null character.

**Note:** `%s` reads only until the first whitespace character. For names or addresses containing spaces, use `fgets()`.

### 8.4 Reading Strings Containing Spaces

The `fgets()` function can read a complete line, including spaces.

**Example:**

```c
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
};

int main(void) {
    struct Student student1;

    printf("Enter roll number: ");
    if (scanf("%d", &student1.rollNumber) != 1) {
        printf("Invalid roll number.\n");
        return 1;
    }

    getchar();

    printf("Enter full name: ");
    if (fgets(student1.name, sizeof(student1.name), stdin) == NULL) {
        printf("Unable to read name.\n");
        return 1;
    }

    student1.name[strcspn(student1.name, "\n")] = '\0';

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Full Name: %s\n", student1.name);

    return 0;
}
```

**Sample Input:**

```text
Enter roll number: 103
Enter full name: Aarav Sharma
```

**Expected Output:**

```text
Student Details
Roll Number: 103
Full Name: Aarav Sharma
```

**Explanation:**

- `fgets()` reads a line into the character array.
- `sizeof(student1.name)` provides the array capacity.
- `getchar()` consumes the newline left behind by the previous `scanf()` call.
- `strcspn()` locates the newline character, if present.
- The newline is replaced with `'\0'`.

For more complex input handling, check and handle the input stream carefully rather than assuming that one `getchar()` always resolves every possible input condition.

### 8.5 Displaying Structure Members

The `printf()` function displays individual structure members using their corresponding format specifiers.

**Example:**

```c
#include <stdio.h>

struct Book {
    int bookId;
    char title[40];
    float price;
};

int main(void) {
    struct Book book1 = {501, "C Programming", 450.50f};

    printf("Book ID: %d\n", book1.bookId);
    printf("Book Title: %s\n", book1.title);
    printf("Book Price: %.2f\n", book1.price);

    return 0;
}
```

**Expected Output:**

```text
Book ID: 501
Book Title: C Programming
Book Price: 450.50
```

Each member is accessed separately using the dot operator.

### 8.6 Complete Example: Employee Record Input and Output

The following program accepts an employee's details and displays the complete record.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    char name[40];
    float salary;
};

int main(void) {
    struct Employee employee1;

    printf("Enter employee ID: ");
    if (scanf("%d", &employee1.id) != 1) {
        printf("Invalid employee ID.\n");
        return 1;
    }

    printf("Enter employee name: ");
    if (scanf("%39s", employee1.name) != 1) {
        printf("Invalid employee name.\n");
        return 1;
    }

    printf("Enter employee salary: ");
    if (scanf("%f", &employee1.salary) != 1) {
        printf("Invalid salary.\n");
        return 1;
    }

    printf("\n--- Employee Record ---\n");
    printf("Employee ID: %d\n", employee1.id);
    printf("Employee Name: %s\n", employee1.name);
    printf("Employee Salary: %.2f\n", employee1.salary);

    return 0;
}
```

**Sample Input:**

```text
Enter employee ID: 201
Enter employee name: Rohan
Enter employee salary: 42000
```

**Expected Output:**

```text
--- Employee Record ---
Employee ID: 201
Employee Name: Rohan
Employee Salary: 42000.00
```

### 8.7 Important Considerations

1. Use `scanf()` to accept values for individual structure members.
2. Use `printf()` to display structure members.
3. Use the address operator (`&`) for ordinary scalar members when reading with `scanf()`.
4. Do not use `&` with a character array name when reading it with `%s`.
5. Use a field width with `%s` to prevent buffer overflow.
6. Use `fgets()` when strings may contain spaces.
7. Check input function return values before using the received data.
8. Use the correct format specifier for every member's data type.

---

## 9. Nested Structures

### 9.1 Introduction to Nested Structures

A nested structure is a structure that contains another structure as one of its members.

It allows us to represent complex information by grouping related data into smaller structures.

For example, a student record may contain:

- Student ID
- Student name
- Date of birth
- Address

The date of birth and address can be represented using separate structures and then included inside the main student structure.

This makes programs more organized, reusable, and easier to maintain.

### 9.2 Declaring a Structure Inside Another Structure

A structure type can be declared separately and then used as a member of another structure.

**General Syntax:**

```c
struct InnerStructure {
    data_type member1;
    data_type member2;
};

struct OuterStructure {
    data_type member;
    struct InnerStructure innerMember;
};
```

The inner structure becomes a member of the outer structure.

**Example:**

```c
#include <stdio.h>

struct Address {
    int houseNumber;
    char city[30];
};

struct Student {
    int rollNumber;
    char name[30];
    struct Address address;
};

int main(void) {
    struct Student student1 = {
        101,
        "Aarav",
        {25, "Pune"}
    };

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("House Number: %d\n", student1.address.houseNumber);
    printf("City: %s\n", student1.address.city);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Name: Aarav
House Number: 25
City: Pune
```

**Explanation:**

The `Student` structure contains an `Address` structure member.

The declaration:

```c
struct Address address;
```

makes `address` a member of the `Student` structure.

The inner structure members are accessed using two dot operators:

```c
student1.address.houseNumber
student1.address.city
```

The first dot accesses the nested structure member, while the second dot accesses a member inside that nested structure.

### 9.3 Accessing Members of Nested Structures

Nested structure members are accessed by chaining the dot operator.

**General Syntax:**

```c
outerVariable.innerMember.memberName
```

**Example:**

```c
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[30];
    struct Date joiningDate;
};

int main(void) {
    struct Employee employee1 = {
        201,
        "Rohan",
        {15, 6, 2024}
    };

    printf("Employee ID: %d\n", employee1.id);
    printf("Employee Name: %s\n", employee1.name);

    printf("Joining Date: %02d-%02d-%04d\n",
           employee1.joiningDate.day,
           employee1.joiningDate.month,
           employee1.joiningDate.year);

    return 0;
}
```

**Expected Output:**

```text
Employee ID: 201
Employee Name: Rohan
Joining Date: 15-06-2024
```

**Explanation:**

The `Employee` structure contains a nested `Date` structure.

The expression:

```c
employee1.joiningDate.day
```

accesses the `day` member of the nested structure.

Similarly, `month` and `year` are accessed through the `joiningDate` member.

### 9.4 Initializing Nested Structures

Nested structures can be initialized using nested sets of braces.

**Example:**

```c
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Event {
    char name[30];
    struct Time startTime;
};

int main(void) {
    struct Event event1 = {
        "Meeting",
        {10, 30, 0}
    };

    printf("Event: %s\n", event1.name);
    printf("Start Time: %02d:%02d:%02d\n",
           event1.startTime.hours,
           event1.startTime.minutes,
           event1.startTime.seconds);

    return 0;
}
```

**Expected Output:**

```text
Event: Meeting
Start Time: 10:30:00
```

**Explanation:**

The first initializer assigns the event name.

The nested initializer:

```c
{10, 30, 0}
```

initializes the `Time` structure member in declaration order.

Nested structures can also be initialized using designated initializers in C99 and later.

**Example:**

```c
struct Event event2 = {
    .name = "Workshop",
    .startTime = {
        .hours = 14,
        .minutes = 15,
        .seconds = 0
    }
};
```

Designated initializers make the intended member assignments clearer, especially when a structure contains many members.

### 9.5 Accepting Input for Nested Structures

We can accept values for both outer and inner structure members using standard input functions.

**Example:**

```c
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[30];
    struct Date joiningDate;
};

int main(void) {
    struct Employee employee1;

    printf("Enter employee ID: ");
    if (scanf("%d", &employee1.id) != 1) {
        printf("Invalid ID.\n");
        return 1;
    }

    printf("Enter employee name: ");
    if (scanf("%29s", employee1.name) != 1) {
        printf("Invalid name.\n");
        return 1;
    }

    printf("Enter joining date (DD MM YYYY): ");
    if (scanf("%d %d %d",
              &employee1.joiningDate.day,
              &employee1.joiningDate.month,
              &employee1.joiningDate.year) != 3) {
        printf("Invalid date input.\n");
        return 1;
    }

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", employee1.id);
    printf("Name: %s\n", employee1.name);
    printf("Joining Date: %02d-%02d-%04d\n",
           employee1.joiningDate.day,
           employee1.joiningDate.month,
           employee1.joiningDate.year);

    return 0;
}
```

**Sample Input:**

```text
Enter employee ID: 301
Enter employee name: Meera
Enter joining date (DD MM YYYY): 10 8 2025
```

**Expected Output:**

```text
--- Employee Details ---
ID: 301
Name: Meera
Joining Date: 10-08-2025
```

**Explanation:**

The program reads the employee's ordinary members and then reads the three members of the nested `Date` structure.

Each nested member is accessed using the outer structure variable followed by the nested structure member and its individual member name.

### 9.6 Multiple Nested Structures

A structure can contain more than one nested structure.

This is useful when a record contains multiple groups of related information.

**Example:**

```c
#include <stdio.h>

struct Address {
    char city[30];
    int pinCode;
};

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNumber;
    char name[30];
    struct Address address;
    struct Date birthDate;
};

int main(void) {
    struct Student student1 = {
        101,
        "Diya",
        {"Pune", 411041},
        {12, 5, 2005}
    };

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);

    printf("City: %s\n", student1.address.city);
    printf("PIN Code: %d\n", student1.address.pinCode);

    printf("Birth Date: %02d-%02d-%04d\n",
           student1.birthDate.day,
           student1.birthDate.month,
           student1.birthDate.year);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Name: Diya
City: Pune
PIN Code: 411041
Birth Date: 12-05-2005
```

**Explanation:**

The `Student` structure contains two nested structures:

- `Address` stores location-related information.
- `Date` stores date-related information.

This approach separates different categories of information while keeping them together in one student record.

### 9.7 Advantages of Nested Structures

1. **Better organization:** Related information can be grouped into smaller structures.
2. **Code reusability:** The same inner structure type can be reused in multiple outer structures.
3. **Improved readability:** Complex records become easier to understand.
4. **Modular design:** Each structure can represent a specific part of a larger record.
5. **Real-world modeling:** Nested structures are useful for representing addresses, dates, employee details, product specifications, and other complex records.

### 9.8 Important Considerations

1. A structure can contain another structure as a member.
2. The inner structure type should be declared before it is used as a member, unless an appropriate forward declaration is used.
3. Use multiple dot operators to access deeply nested members.
4. Nested structures can be initialized using nested braces.
5. Designated initializers can make nested initialization easier to read.
6. Nested structure members can be modified independently.
7. Structures can contain multiple nested structures.
8. A nested structure is a complete member of its containing structure, not a pointer to another structure unless explicitly declared as one.

---

## 10. Passing Structures to Functions

### 10.1 Introduction

In C, structures can be passed to functions just like ordinary variables.

This allows functions to process structure data without placing all the program logic inside `main()`.

A structure can be passed to a function in two common ways:

1. Passing a structure by value.
2. Passing a pointer to a structure.

When a structure is passed by value, the function receives its own copy of the structure.

When a pointer to a structure is passed, the function receives the address of the original structure and can access or modify its members through that pointer.

### 10.2 Passing a Structure by Value

When a structure is passed by value, all its members are copied into the function parameter.

Changes made to the parameter do not affect the original structure variable.

**General Syntax:**

```c
returnType functionName(struct StructureName variable);
```

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float percentage;
};

void displayStudent(struct Student student) {
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Percentage: %.2f\n", student.percentage);
}

int main(void) {
    struct Student student1 = {101, 88.5f};

    displayStudent(student1);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Percentage: 88.50
```

**Explanation:**

The function call:

```c
displayStudent(student1);
```

passes a copy of `student1` to the function.

The parameter `student` receives that copy, and the function accesses its members using the dot operator.

The original structure remains unchanged.

### 10.3 Modifying a Structure Copy Inside a Function

Because a structure is passed by value, modifying the parameter does not modify the original structure.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

void increaseSalary(struct Employee employee) {
    employee.salary = employee.salary + 5000.0f;

    printf("Salary inside function: %.2f\n",
           employee.salary);
}

int main(void) {
    struct Employee employee1 = {201, 30000.0f};

    printf("Original salary: %.2f\n", employee1.salary);

    increaseSalary(employee1);

    printf("Salary after function call: %.2f\n",
           employee1.salary);

    return 0;
}
```

**Expected Output:**

```text
Original salary: 30000.00
Salary inside function: 35000.00
Salary after function call: 30000.00
```

**Explanation:**

The function receives a copy of `employee1`.

The salary of the copied structure is increased, but the original salary remains unchanged.

This behavior is an important characteristic of passing structures by value.

### 10.4 Passing a Structure Using a Pointer

Instead of copying the complete structure, we can pass its address to a function.

The function parameter is then a pointer to the structure.

**General Syntax:**

```c
returnType functionName(struct StructureName *pointer);
```

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

void displayEmployee(struct Employee *employee) {
    printf("Employee ID: %d\n", employee->id);
    printf("Salary: %.2f\n", employee->salary);
}

int main(void) {
    struct Employee employee1 = {202, 45000.0f};

    displayEmployee(&employee1);

    return 0;
}
```

**Expected Output:**

```text
Employee ID: 202
Salary: 45000.00
```

**Explanation:**

- `&employee1` passes the address of the structure.
- `employee` receives that address through a structure pointer.
- The arrow operator (`->`) accesses the members through the pointer.

This method avoids creating a complete structure copy.

### 10.5 Modifying the Original Structure Through a Function

When a pointer to a structure is passed, the function can modify the original structure members.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

void increaseSalary(struct Employee *employee) {
    employee->salary += 5000.0f;
}

int main(void) {
    struct Employee employee1 = {203, 30000.0f};

    printf("Before Update: %.2f\n", employee1.salary);

    increaseSalary(&employee1);

    printf("After Update: %.2f\n", employee1.salary);

    return 0;
}
```

**Expected Output:**

```text
Before Update: 30000.00
After Update: 35000.00
```

**Explanation:**

The function receives the address of the original structure.

The statement:

```c
employee->salary += 5000.0f;
```

modifies the salary member of the original structure.

Therefore, the updated value is visible in `main()`.

### 10.6 Passing an Array of Structures to a Function

An array of structures can also be passed to a function.

When an array is passed to a function, the array parameter is adjusted to a pointer to its first element. The function therefore works with the original array elements.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float percentage;
};

void displayStudents(struct Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Percentage: %.2f\n\n",
               students[i].percentage);
    }
}

int main(void) {
    struct Student students[3] = {
        {101, 85.5f},
        {102, 91.0f},
        {103, 78.5f}
    };

    displayStudents(students, 3);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Percentage: 85.50

Roll Number: 102
Percentage: 91.00

Roll Number: 103
Percentage: 78.50
```

**Explanation:**

The function receives the array and its size.

The loop accesses each structure element and displays its members.

The size is passed separately because an array parameter does not automatically provide the number of elements.

### 10.7 Choosing Between Value and Pointer Passing

| Feature | Pass by Value | Pass Using Pointer |
|---|---|---|
| Argument | Structure variable | Address of structure |
| Function parameter | Structure variable | Structure pointer |
| Data handling | Works with a copy | Accesses original object |
| Original structure | Not modified through the copy | Can be modified |
| Member access | Dot operator (`.`) | Arrow operator (`->`) |
| Typical use | Small records or read-only processing | Updating records or avoiding large copies |

**Important:** Passing a pointer does not automatically make the structure read-only. If a function only needs to read a structure, a pointer to `const` can be used:

```c
void displayStudent(const struct Student *student);
```

This prevents the function from modifying the structure through that pointer.

### 10.8 Important Considerations

1. Structures can be passed to functions by value.
2. Passing by value creates a separate structure copy.
3. Changes to a copied parameter do not modify the original structure.
4. A pointer to a structure can be passed to access the original object.
5. Use `->` to access members through a structure pointer.
6. Arrays of structures can be passed to functions.
7. Pass the array size separately when the function needs to know the number of elements.
8. Use a pointer to `const` when a function only needs to read the structure.

---

## 11. Structure Pointers and Arrow Operator

### 11.1 Introduction to Structure Pointers

A structure pointer is a pointer variable that stores the address of a structure variable.

Just like pointers to integers or characters, structure pointers allow us to work with data indirectly through memory addresses.

They are particularly useful when:

- Passing structures to functions.
- Modifying structure members through functions.
- Working with dynamically allocated structures.
- Implementing linked lists and other dynamic data structures.

### 11.2 Declaring a Structure Pointer

A structure pointer is declared using the structure type followed by the pointer variable name.

**General Syntax:**

```c
struct StructureName *pointerName;
```

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float percentage;
};

int main(void) {
    struct Student student1 = {101, 88.5f};

    struct Student *ptr;

    ptr = &student1;

    printf("Structure address: %p\n", (void *)ptr);

    return 0;
}
```

**Expected Output:**

```text
Structure address: <memory address>
```

**Explanation:**

- `ptr` is a pointer to a `struct Student`.
- `&student1` obtains the address of the structure variable.
- The pointer stores that address.

The displayed memory address varies between executions and systems.

### 11.3 Accessing Structure Members Using a Pointer

There are two ways to access a structure member through a pointer:

1. Dereferencing the pointer and using the dot operator.
2. Using the arrow operator (`->`).

**Method 1: Dereferencing with the Dot Operator**

```c
(*ptr).rollNumber
```

The parentheses are necessary because the dot operator has higher precedence than the unary dereference operator.

**Method 2: Using the Arrow Operator**

```c
ptr->rollNumber
```

The arrow operator is a shorter and more convenient way to access members through a structure pointer.

### 11.4 Understanding the Arrow Operator

The arrow operator (`->`) is used to access a member of a structure through a pointer.

**General Syntax:**

```c
pointerName->memberName
```

It is equivalent to:

```c
(*pointerName).memberName
```

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char grade;
};

int main(void) {
    struct Student student1 = {101, 'A'};

    struct Student *ptr = &student1;

    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Grade: %c\n", ptr->grade);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Grade: A
```

**Explanation:**

The pointer `ptr` stores the address of `student1`.

The expressions:

```c
ptr->rollNumber
ptr->grade
```

access the corresponding members through that pointer.

### 11.5 Modifying Members Using a Structure Pointer

A structure pointer can be used to modify the members of the structure it points to.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main(void) {
    struct Employee employee1 = {301, 30000.0f};

    struct Employee *ptr = &employee1;

    printf("Before Update: %.2f\n", ptr->salary);

    ptr->salary = 40000.0f;

    printf("After Update: %.2f\n", employee1.salary);

    return 0;
}
```

**Expected Output:**

```text
Before Update: 30000.00
After Update: 40000.00
```

**Explanation:**

The expression:

```c
ptr->salary = 40000.0f;
```

modifies the salary member of the structure pointed to by `ptr`.

Since the pointer refers to `employee1`, the change is visible through the original structure variable.

### 11.6 Structure Pointer with Character Array Members

A structure pointer can also access character array members.

**Example:**

```c
#include <stdio.h>

struct Book {
    int bookId;
    char title[40];
};

int main(void) {
    struct Book book1 = {501, "C Programming"};

    struct Book *ptr = &book1;

    printf("Book ID: %d\n", ptr->bookId);
    printf("Book Title: %s\n", ptr->title);

    return 0;
}
```

**Expected Output:**

```text
Book ID: 501
Book Title: C Programming
```

**Explanation:**

The arrow operator accesses both the integer member and the character array member through the structure pointer.

The expression `ptr->title` provides access to the title array.

### 11.7 Structure Pointer with Arrays of Structures

A structure pointer can point to an element of an array of structures.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float percentage;
};

int main(void) {
    struct Student students[3] = {
        {101, 85.5f},
        {102, 91.0f},
        {103, 78.5f}
    };

    struct Student *ptr = students;

    for (int i = 0; i < 3; i++) {
        printf("Roll Number: %d\n", (ptr + i)->rollNumber);
        printf("Percentage: %.2f\n\n",
               (ptr + i)->percentage);
    }

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Percentage: 85.50

Roll Number: 102
Percentage: 91.00

Roll Number: 103
Percentage: 78.50
```

**Explanation:**

The array name `students` is converted to a pointer to its first element in this initialization.

The expression:

```c
(ptr + i)->rollNumber
```

accesses the `rollNumber` member of the structure at index `i`.

Pointer arithmetic advances by the size of one complete structure element, not by one byte.

### 11.8 Difference Between Dot and Arrow Operators

| Dot Operator (`.`) | Arrow Operator (`->`) |
|---|---|
| Used with structure variables | Used with structure pointers |
| Direct member access | Indirect member access |
| Example: `student.rollNumber` | Example: `ptr->rollNumber` |
| Does not require dereferencing | Combines pointer dereferencing and member access |

**Equivalent Expressions:**

```c
student1.rollNumber
```

```c
ptr->rollNumber
```

```c
(*ptr).rollNumber
```

The last two expressions are equivalent when `ptr` points to `student1`.

### 11.9 Important Considerations

1. A structure pointer stores the address of a structure variable.
2. Declare a pointer using `struct StructureName *`.
3. Use the address operator (`&`) to obtain a structure variable's address.
4. Use the arrow operator (`->`) to access members through a pointer.
5. `ptr->member` is equivalent to `(*ptr).member`.
6. Parentheses are required around `*ptr` when using the dot operator.
7. Always initialize a structure pointer before dereferencing it.
8. Never dereference a null, uninitialized, or otherwise invalid pointer.
9. Pointer arithmetic on a structure pointer moves between structure elements.

---

## 12. Returning Structures from Functions

### 12.1 Introduction

In C, a function can return a structure as its return value.

This allows a function to create, calculate, or collect a complete record and send it back to the calling function.

Returning structures is useful when a function needs to produce multiple related values together.

Instead of returning several individual values separately, we can group them into a structure and return that structure.

### 12.2 Syntax for Returning a Structure

The return type of the function is declared using the structure type.

**General Syntax:**

```c
struct StructureName functionName(parameters) {
    struct StructureName variable;

    /* Process structure data */

    return variable;
}
```

The function returns a structure value, which can be assigned to another structure variable of the same type.

### 12.3 Returning a Structure from a Function

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    float percentage;
};

struct Student getStudent(void) {
    struct Student student1;

    student1.rollNumber = 101;
    student1.percentage = 88.5f;

    return student1;
}

int main(void) {
    struct Student student2;

    student2 = getStudent();

    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Percentage: %.2f\n", student2.percentage);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Percentage: 88.50
```

**Explanation:**

1. `getStudent()` has a return type of `struct Student`.
2. The function creates and initializes a local structure variable.
3. The `return` statement returns the structure value.
4. The calling function assigns the returned value to `student2`.

The returned structure is a value, not a pointer to the local variable.

### 12.4 Returning an Initialized Structure

A function can also create a structure using an initializer and return it directly.

**Example:**

```c
#include <stdio.h>

struct Product {
    int productId;
    float price;
};

struct Product createProduct(void) {
    struct Product product1 = {501, 799.50f};

    return product1;
}

int main(void) {
    struct Product product2 = createProduct();

    printf("Product ID: %d\n", product2.productId);
    printf("Product Price: %.2f\n", product2.price);

    return 0;
}
```

**Expected Output:**

```text
Product ID: 501
Product Price: 799.50
```

**Explanation:**

The function initializes a local `Product` structure and returns it.

The returned value is used directly to initialize `product2`.

Modern C compilers may optimize structure returns, so returning a structure does not necessarily mean that an expensive physical copy will always occur.

### 12.5 Returning a Structure Based on Function Parameters

A function can accept parameters, use them to create a structure, and return the completed structure.

**Example:**

```c
#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
    float area;
};

struct Rectangle calculateArea(float length, float breadth) {
    struct Rectangle rectangle1;

    rectangle1.length = length;
    rectangle1.breadth = breadth;
    rectangle1.area = length * breadth;

    return rectangle1;
}

int main(void) {
    struct Rectangle rectangle2;

    rectangle2 = calculateArea(10.0f, 5.0f);

    printf("Length: %.2f\n", rectangle2.length);
    printf("Breadth: %.2f\n", rectangle2.breadth);
    printf("Area: %.2f\n", rectangle2.area);

    return 0;
}
```

**Expected Output:**

```text
Length: 10.00
Breadth: 5.00
Area: 50.00
```

**Explanation:**

The function accepts the rectangle's length and breadth.

It calculates the area and stores all three values in a structure.

The completed structure is then returned to `main()`.

This approach is useful when a function needs to return multiple related results.

### 12.6 Returning a Structure After Accepting User Input

A function can also accept user input, store it in a local structure, and return the completed record.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

struct Employee inputEmployee(void) {
    struct Employee employee1;

    printf("Enter employee ID: ");
    if (scanf("%d", &employee1.id) != 1) {
        printf("Invalid employee ID.\n");
        employee1.id = -1;
        return employee1;
    }

    printf("Enter employee name: ");
    if (scanf("%29s", employee1.name) != 1) {
        printf("Invalid employee name.\n");
        employee1.id = -1;
        return employee1;
    }

    printf("Enter employee salary: ");
    if (scanf("%f", &employee1.salary) != 1) {
        printf("Invalid salary.\n");
        employee1.id = -1;
        return employee1;
    }

    return employee1;
}

int main(void) {
    struct Employee employee2 = inputEmployee();

    if (employee2.id == -1) {
        printf("Unable to create employee record.\n");
        return 1;
    }

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", employee2.id);
    printf("Name: %s\n", employee2.name);
    printf("Salary: %.2f\n", employee2.salary);

    return 0;
}
```

**Sample Input:**

```text
Enter employee ID: 401
Enter employee name: Rohan
Enter employee salary: 50000
```

**Expected Output:**

```text
--- Employee Details ---
ID: 401
Name: Rohan
Salary: 50000.00
```

**Explanation:**

The `inputEmployee()` function collects the employee's details and returns the completed structure.

The calling function receives the returned record and displays its members.

This example uses `-1` as a simple error indicator for the employee ID. In production programs, a separate success indicator or status-returning design is preferable because error indicators should not conflict with valid data.

### 12.7 Returning Structures vs Returning Pointers to Structures

Returning a structure and returning a pointer to a structure are different operations.

| Returning a Structure | Returning a Structure Pointer |
|---|---|
| Returns a structure value | Returns an address |
| Caller receives a structure value | Caller receives a pointer |
| Local structure can safely be returned by value | Returning the address of a local automatic variable is unsafe |
| Useful for returning complete records | Useful when managing objects with a suitable lifetime |

**Important Example:**

The following approach is incorrect:

```c
struct Student *getStudent(void) {
    struct Student student1 = {101, 88.5f};

    return &student1;
}
```

The local variable `student1` has automatic storage duration. Its lifetime ends when the function returns.

Therefore, returning its address produces a dangling pointer.

If a function must return a structure pointer, the pointed-to object must remain alive after the function returns. It could be an object with static storage duration or dynamically allocated memory, provided its lifetime and ownership are managed correctly.

### 12.8 Important Considerations

1. A function can return a complete structure value.
2. The return type must specify the correct structure type.
3. Use `return` to return the structure variable.
4. The calling function can assign the returned structure to another structure variable.
5. Functions can return structures initialized locally or created from parameters.
6. Returning a structure is useful for returning multiple related values.
7. Returning a structure is different from returning a pointer to a structure.
8. Never return the address of a local automatic structure variable.
9. Manage dynamically allocated structures carefully if a function returns a pointer to one.

---

---

## 13. typedef with Structures

### 13.1 Introduction

In C, the `typedef` keyword is used to create an alternative name (alias) for an existing data type.

It is commonly used with structures to simplify variable declarations.

Without `typedef`, we generally need to write the `struct` keyword whenever declaring a structure variable.

Using `typedef` allows us to declare variables using a shorter type name.

### 13.2 Structure Declaration Without typedef

Consider the following structure declaration:

```c
struct Student {
    int rollNumber;
    float percentage;
};
```

To declare a variable, we write:

```c
struct Student student1;
```

The `struct` keyword is required because `Student` is a structure tag, not an ordinary type alias.

### 13.3 Creating a Structure Alias Using typedef

The `typedef` keyword allows us to assign an alternative name to a structure type.

**General Syntax:**

```c
typedef struct StructureTag {
    data_type member1;
    data_type member2;
} AliasName;
```

After this declaration, `AliasName` can be used as the type name.

**Example:**

```c
#include <stdio.h>

typedef struct Student {
    int rollNumber;
    float percentage;
} Student;

int main(void) {
    Student student1 = {101, 88.5f};

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Percentage: %.2f\n", student1.percentage);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Percentage: 88.50
```

**Explanation:**

The declaration:

```c
typedef struct Student {
    int rollNumber;
    float percentage;
} Student;
```

creates the structure type and defines `Student` as an alias for it.

Therefore, we can declare variables using:

```c
Student student1;
Student student2;
```

The `struct` keyword is no longer needed when using the alias.

### 13.4 typedef with an Anonymous Structure

A structure can also be declared without a structure tag when `typedef` provides the type name.

**Example:**

```c
#include <stdio.h>

typedef struct {
    int productId;
    float price;
} Product;

int main(void) {
    Product product1 = {501, 799.50f};

    printf("Product ID: %d\n", product1.productId);
    printf("Price: %.2f\n", product1.price);

    return 0;
}
```

**Expected Output:**

```text
Product ID: 501
Price: 799.50
```

**Explanation:**

There is no structure tag in this declaration.

The name `Product` is the typedef alias used to declare variables of this structure type.

### 13.5 Using typedef with Existing Structure Tags

We can also create an alias for a structure that has already been declared.

**Example:**

```c
#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

typedef struct Employee Employee;

int main(void) {
    Employee employee1 = {201, 45000.0f};

    printf("Employee ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);

    return 0;
}
```

**Expected Output:**

```text
Employee ID: 201
Salary: 45000.00
```

**Explanation:**

The statement:

```c
typedef struct Employee Employee;
```

creates `Employee` as an alias for `struct Employee`.

Both declarations are valid:

```c
struct Employee employee1;
Employee employee2;
```

### 13.6 typedef with Structure Pointers

We can also define aliases for structure pointer types.

**Example:**

```c
#include <stdio.h>

typedef struct Student {
    int rollNumber;
    float percentage;
} Student;

typedef Student *StudentPtr;

int main(void) {
    Student student1 = {101, 91.0f};

    StudentPtr ptr = &student1;

    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Percentage: %.2f\n", ptr->percentage);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Percentage: 91.00
```

**Explanation:**

The declaration:

```c
typedef Student *StudentPtr;
```

creates `StudentPtr` as an alias for a pointer to `Student`.

Therefore, the following declaration is valid:

```c
StudentPtr ptr;
```

It is equivalent to:

```c
Student *ptr;
```

**Important:** A pointer typedef is a pointer type. It is not interchangeable with the structure value type itself.

### 13.7 Advantages of typedef with Structures

1. **Shorter declarations:** Structure variables can be declared without repeatedly writing `struct`.
2. **Improved readability:** Type names can be concise and meaningful.
3. **Cleaner function declarations:** Function parameters and return types become easier to read.
4. **Reusable type names:** The same alias can be used throughout a program.
5. **Convenient pointer declarations:** Structure pointer aliases can simplify complex declarations.

### 13.8 Important Considerations

1. `typedef` creates an alias; it does not create a completely new or distinct structure type.
2. The original structure tag can still be used when one exists.
3. An anonymous structure can use a typedef name without a structure tag.
4. Typedef names follow the ordinary identifier namespace rules.
5. A pointer typedef represents a pointer type, not the structure value type.
6. Use meaningful aliases to improve readability rather than creating unnecessary abbreviations.

---

## 14. Self-Referential Structures

### 14.1 Introduction

A self-referential structure is a structure that contains a pointer to another structure of the same type.

It is an important concept in C because it forms the foundation of dynamic data structures such as:

- Linked lists
- Trees
- Graphs
- Other dynamically connected records

A self-referential structure cannot directly contain an ordinary member of its own type because that would require an infinitely large object.

Instead, it contains a pointer to its own structure type.

### 14.2 Basic Syntax

**General Syntax:**

```c
struct StructureName {
    data_type member;
    struct StructureName *pointerMember;
};
```

The pointer member can store the address of another structure variable of the same type.

### 14.3 Declaring a Self-Referential Structure

**Example:**

```c
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node node1;
    struct Node node2;

    node1.data = 10;
    node1.next = &node2;

    node2.data = 20;
    node2.next = NULL;

    printf("First Node: %d\n", node1.data);
    printf("Second Node: %d\n", node1.next->data);

    return 0;
}
```

**Expected Output:**

```text
First Node: 10
Second Node: 20
```

**Explanation:**

The `Node` structure contains:

- `data`, which stores an integer.
- `next`, which stores the address of another `struct Node`.

The statement:

```c
node1.next = &node2;
```

connects the first node to the second node.

The second node has no following node, so its pointer is assigned `NULL`.

### 14.4 Why Do We Use Pointers Instead of Direct Structure Members?

Consider this invalid design:

```c
struct Node {
    int data;
    struct Node next;
};
```

This declaration is invalid because the `next` member would require a complete `struct Node` object inside another `struct Node`.

That would recursively require another complete object, with no finite size.

A pointer solves this problem:

```c
struct Node {
    int data;
    struct Node *next;
};
```

A pointer has a fixed size for a given implementation, regardless of the size of the structure it points to.

Therefore, the structure has a finite and well-defined size.

### 14.5 Understanding a Simple Linked Structure

A self-referential structure can connect multiple nodes.

**Example:**

```c
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node node1, node2, node3;

    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    struct Node *current = &node1;

    printf("Linked Nodes: ");

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");

    return 0;
}
```

**Expected Output:**

```text
Linked Nodes: 10 20 30
```

**Explanation:**

The three structure variables are connected through their `next` members.

The pointer `current` begins at the first node.

The loop:

1. Checks whether the current pointer is not `NULL`.
2. Displays the current node's data.
3. Moves to the next node.
4. Stops when it reaches `NULL`.

This is a simple example of traversing a linked structure.

### 14.6 Using typedef with Self-Referential Structures

We can combine `typedef` with a self-referential structure to simplify declarations.

**Example:**

```c
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main(void) {
    Node node1 = {10, NULL};
    Node node2 = {20, NULL};

    node1.next = &node2;

    printf("First Node: %d\n", node1.data);
    printf("Next Node: %d\n", node1.next->data);

    return 0;
}
```

**Expected Output:**

```text
First Node: 10
Next Node: 20
```

**Explanation:**

The typedef alias `Node` can be used to declare variables of the structure type.

Inside the structure definition, `struct Node *next` refers to the structure tag being declared.

### 14.7 Applications of Self-Referential Structures

1. **Linked Lists:** Each node points to the next node.
2. **Trees:** A node can contain pointers to child nodes.
3. **Graphs:** Nodes can maintain connections to other nodes.
4. **Dynamic Data Structures:** Structures can be connected and managed during program execution.
5. **Memory-efficient linking:** Nodes can be connected without requiring a fixed-size array of records.

### 14.8 Important Considerations

1. A self-referential structure contains a pointer to its own structure type.
2. It cannot contain a direct member of its own incomplete structure type.
3. Pointer members must be initialized before they are dereferenced.
4. `NULL` is commonly used to indicate that no next node exists.
5. Self-referential structures are fundamental to linked data structures.
6. Always ensure that pointers refer to valid objects whose lifetimes have not ended.
7. Dynamically allocated nodes must be released appropriately when they are no longer required.

---

## 15. Structure Padding, Alignment and sizeof

### 15.1 Introduction

A structure groups multiple members into one object.

However, the total memory occupied by a structure is not necessarily equal to the sum of the sizes of its individual members.

Compilers may insert unused bytes between members or at the end of a structure.

These extra bytes are called **padding**.

Padding is commonly used to satisfy memory alignment requirements of the target system.

### 15.2 Understanding sizeof with Structures

The `sizeof` operator returns the size, in bytes, of a data type or object.

**General Syntax:**

```c
sizeof(data_type)
```

or:

```c
sizeof(variable)
```

**Example:**

```c
#include <stdio.h>

struct Sample {
    int number;
    char letter;
};

int main(void) {
    struct Sample sample1;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of structure: %zu bytes\n", sizeof(sample1));

    return 0;
}
```

**Example Output on a Common System:**

```text
Size of int: 4 bytes
Size of char: 1 byte
Size of structure: 8 bytes
```

**Explanation:**

The structure contains:

- An integer member.
- A character member.

On a common implementation where `int` occupies 4 bytes, the members require 5 bytes in total.

The compiler may add padding so that the complete structure has a size of 8 bytes.

The exact result is implementation-dependent.

### 15.3 What Is Structure Padding?

Structure padding refers to unused bytes inserted by the compiler between members or after the last member.

Padding helps ensure that members are placed at memory addresses that satisfy their alignment requirements.

Consider:

```c
struct Example {
    char a;
    int b;
};
```

A possible memory layout is:

```text
+----------+-------------------+----------------------+
| Member a | Padding           | Member b             |
+----------+-------------------+----------------------+
| 1 byte   | 3 bytes           | 4 bytes              |
+----------+-------------------+----------------------+
```

On an implementation with a 4-byte alignment requirement for `int`, the compiler may insert three padding bytes after the character member.

The resulting structure size may be 8 bytes.

### 15.4 Understanding Structure Alignment

Alignment is a requirement that an object be placed at an address suitable for its type.

Different data types can have different alignment requirements.

For example, a typical implementation might use:

| Data Type | Example Size | Possible Alignment |
|---|---:|---:|
| `char` | 1 byte | 1 byte |
| `short` | 2 bytes | 2 bytes |
| `int` | 4 bytes | 4 bytes |
| `double` | 8 bytes | 8 bytes |

These values are illustrative, not universal requirements for every C implementation.

The alignment requirements are implementation-dependent.

### 15.5 Padding Between Structure Members

Consider a structure containing a character, an integer, and another character.

**Example:**

```c
#include <stdio.h>

struct Data {
    char first;
    int number;
    char second;
};

int main(void) {
    printf("Size of structure: %zu bytes\n",
           sizeof(struct Data));

    return 0;
}
```

**Example Output on a Common System:**

```text
Size of structure: 12 bytes
```

**Possible Memory Layout:**

```text
+-------------+----------------+-------------+----------------+
| first       | Padding        | number      | second         |
+-------------+----------------+-------------+----------------+
| 1 byte      | 3 bytes        | 4 bytes     | 1 byte         |
+-------------+----------------+-------------+----------------+

Possible trailing padding: 3 bytes
```

**Explanation:**

The compiler may insert:

- Three bytes before `number`.
- Three bytes after `second`.

The trailing padding can ensure that consecutive elements of an array of this structure also satisfy the alignment requirements.

The exact size and padding depend on the implementation.

### 15.6 Padding at the End of a Structure

Padding may also be inserted after the final member.

This is important when structures are stored in arrays.

**Example:**

```c
#include <stdio.h>

struct Record {
    int id;
    char grade;
};

int main(void) {
    struct Record records[2];

    printf("Size of one record: %zu bytes\n",
           sizeof(records[0]));

    printf("Size of array: %zu bytes\n",
           sizeof(records));

    return 0;
}
```

**Example Output on a Common System:**

```text
Size of one record: 8 bytes
Size of array: 16 bytes
```

**Explanation:**

If each structure occupies 8 bytes, two consecutive elements occupy 16 bytes.

The array stores complete structure objects, including any padding within each object.

### 15.7 Reordering Structure Members

In some cases, changing the order of structure members can reduce padding.

**Example:**

```c
#include <stdio.h>

struct First {
    char a;
    int b;
    char c;
};

struct Second {
    int b;
    char a;
    char c;
};

int main(void) {
    printf("First structure size: %zu bytes\n",
           sizeof(struct First));

    printf("Second structure size: %zu bytes\n",
           sizeof(struct Second));

    return 0;
}
```

**Example Output on a Common System:**

```text
First structure size: 12 bytes
Second structure size: 8 bytes
```

**Explanation:**

The first structure may require padding between members and at the end.

In the second structure, the integer is placed first, followed by the two character members.

This arrangement may reduce the amount of padding.

**Important:** Reordering members can affect the structure's layout and compatibility with external data formats. Do not reorder members blindly when the structure is part of a file format, network protocol, hardware interface, or public API.

### 15.8 Using sizeof with Individual Members

The `sizeof` operator can also determine the size of individual structure members.

**Example:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float percentage;
};

int main(void) {
    struct Student student1;

    printf("Roll Number Size: %zu bytes\n",
           sizeof(student1.rollNumber));

    printf("Name Array Size: %zu bytes\n",
           sizeof(student1.name));

    printf("Percentage Size: %zu bytes\n",
           sizeof(student1.percentage));

    printf("Complete Structure Size: %zu bytes\n",
           sizeof(student1));

    return 0;
}
```

**Example Output on a Common System:**

```text
Roll Number Size: 4 bytes
Name Array Size: 30 bytes
Percentage Size: 4 bytes
Complete Structure Size: 40 bytes
```

**Explanation:**

The `sizeof` operator reports the size of each member and the complete structure.

The complete structure size may include additional padding.

### 15.9 Why Is Structure Padding Important?

Understanding padding is useful in several situations:

1. **Memory optimization:** Member ordering can sometimes reduce unnecessary padding.
2. **Performance:** Correctly aligned data can be accessed efficiently by the processor.
3. **Embedded systems:** Memory layout can matter when working with limited resources.
4. **File handling:** Raw structure memory should not be assumed to be a portable file format.
5. **Network programming:** Structure layout should not be assumed to match a network protocol.
6. **Low-level programming:** Alignment and object representation matter when working with hardware and memory.

### 15.10 Important Considerations

1. `sizeof` returns the size in bytes.
2. Use `%zu` to display a value of type `size_t`.
3. Structure size may be larger than the sum of its members.
4. Padding can occur between members and at the end of a structure.
5. Alignment requirements depend on the implementation.
6. Reordering members may reduce padding in some structures.
7. The exact structure size should be checked on the target compiler and platform.
8. Do not assume that raw structure memory is a portable file or network representation.

---

## 16. Bit Fields in Structures

### 16.1 Introduction

A bit field is a structure member that occupies a specified number of bits.

Normally, structure members use their declared data types and occupy the space required by those types, subject to alignment and padding.

Bit fields allow us to specify a width in bits, which can be useful when storing small values or representing groups of flags.

They are commonly encountered in:

- Embedded systems
- Hardware-related programming
- Compact data representations
- Status and configuration fields

### 16.2 Syntax of Bit Fields

**General Syntax:**

```c
struct StructureName {
    unsigned int memberName : width;
};
```

The number after the colon specifies the width of the bit field.

For example:

```c
unsigned int status : 1;
```

declares a bit field with a width of one bit.

A one-bit unsigned field can represent two values: `0` and `1`.

### 16.3 Declaring and Using Bit Fields

**Example:**

```c
#include <stdio.h>

struct Status {
    unsigned int active : 1;
    unsigned int visible : 1;
    unsigned int error : 1;
};

int main(void) {
    struct Status systemStatus = {1, 0, 1};

    printf("Active: %u\n", systemStatus.active);
    printf("Visible: %u\n", systemStatus.visible);
    printf("Error: %u\n", systemStatus.error);

    return 0;
}
```

**Expected Output:**

```text
Active: 1
Visible: 0
Error: 1
```

**Explanation:**

The structure contains three one-bit unsigned integer fields.

Each field stores a value of either zero or one.

This is useful for representing simple Boolean-like states.

### 16.4 Understanding Bit Field Width

The width of a bit field determines how many bits are available to represent its value.

For example:

```c
struct Settings {
    unsigned int mode : 2;
};
```

A two-bit unsigned field can represent four values:

```text
00 = 0
01 = 1
10 = 2
11 = 3
```

Therefore, its representable range is 0 to 3.

**Example:**

```c
#include <stdio.h>

struct Settings {
    unsigned int mode : 2;
};

int main(void) {
    struct Settings settings1 = {3};

    printf("Mode: %u\n", settings1.mode);

    settings1.mode = 2;

    printf("Updated Mode: %u\n", settings1.mode);

    return 0;
}
```

**Expected Output:**

```text
Mode: 3
Updated Mode: 2
```

**Explanation:**

The `mode` field has two bits.

It can represent unsigned values from zero through three.

Assigning a value outside the representable range can produce an implementation-dependent result, so values should be kept within the field's valid range.

### 16.5 Multiple Bit Fields in a Structure

A structure can contain multiple bit fields with different widths.

**Example:**

```c
#include <stdio.h>

struct Configuration {
    unsigned int mode : 2;
    unsigned int priority : 3;
    unsigned int enabled : 1;
};

int main(void) {
    struct Configuration config = {2, 5, 1};

    printf("Mode: %u\n", config.mode);
    printf("Priority: %u\n", config.priority);
    printf("Enabled: %u\n", config.enabled);

    return 0;
}
```

**Expected Output:**

```text
Mode: 2
Priority: 5
Enabled: 1
```

**Explanation:**

The fields have different widths:

- `mode` uses 2 bits.
- `priority` uses 3 bits.
- `enabled` uses 1 bit.

The declared widths add up to six bits.

However, the actual memory occupied by the complete structure is determined by the implementation's bit-field allocation and alignment rules. It is not guaranteed to occupy exactly six bits or one byte.

### 16.6 Using Bit Fields for Flags

Bit fields are useful for storing multiple status flags.

**Example:**

```c
#include <stdio.h>

struct DeviceStatus {
    unsigned int powerOn : 1;
    unsigned int connected : 1;
    unsigned int charging : 1;
    unsigned int warning : 1;
};

int main(void) {
    struct DeviceStatus device = {1, 1, 0, 0};

    printf("Power: %u\n", device.powerOn);
    printf("Connected: %u\n", device.connected);
    printf("Charging: %u\n", device.charging);
    printf("Warning: %u\n", device.warning);

    return 0;
}
```

**Expected Output:**

```text
Power: 1
Connected: 1
Charging: 0
Warning: 0
```

**Explanation:**

Each member represents a device status flag.

Instead of storing four separate integer values, bit fields specify that each flag requires only one bit of value representation.

The compiler still controls the actual storage allocation.

### 16.7 Important Rules and Limitations of Bit Fields

1. Bit fields are declared using a colon followed by a width.
2. The width must be a non-negative integer constant expression.
3. A bit field cannot be wider than the permitted width of its declared type.
4. Standard C permits bit fields of `_Bool`, `signed int`, `unsigned int`, and certain other implementation-defined integer types.
5. Ordinary bit fields are not addressable, so the address operator (`&`) cannot be applied to them.
6. `sizeof` cannot be applied directly to an individual bit-field member.
7. Bit-field allocation order and storage-unit layout are implementation-dependent.
8. Bit fields should not be assumed to have a portable memory layout across compilers or systems.

### 16.8 Advantages and Disadvantages of Bit Fields

**Advantages:**

- Can represent small values using specified bit widths.
- Useful for grouping status flags.
- Can support compact data representations.
- Helpful in certain embedded and low-level programming tasks.

**Disadvantages:**

- Memory layout is implementation-dependent.
- Individual bit fields cannot be addressed.
- May introduce portability issues.
- Compiler-generated code and access behavior can vary.
- They are not automatically suitable for hardware registers or network protocols.

---

## 17. Introduction to Unions

### 17.1 What Is a Union?

A union is a user-defined data type in C that allows multiple members of different data types to share the same memory location.

Unlike a structure, where each member has its own storage within the structure object, all union members share the same storage area.

A union is useful when a variable needs to hold one of several different types of values at different times.

**Example:**

```c
union Data {
    int number;
    float decimal;
    char character;
};
```

The union contains three members, but they share the same memory.

### 17.2 Why Do We Need Unions?

Consider a program that needs to store either:

- An integer value.
- A floating-point value.
- A character value.

If these values are mutually exclusive, allocating separate storage for all three at the same time may be unnecessary.

A union allows the members to share storage.

This can reduce memory usage in appropriate situations.

Unions are commonly used in:

1. Memory-conscious applications.
2. Embedded systems.
3. Variant data representations.
4. Low-level programming.
5. Data structures that store one of several possible value types.

### 17.3 Declaring a Union

A union is declared using the `union` keyword.

**General Syntax:**

```c
union UnionName {
    data_type member1;
    data_type member2;
    data_type member3;
};
```

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
    char character;
};

int main(void) {
    union Data value;

    value.number = 100;

    printf("Number: %d\n", value.number);

    return 0;
}
```

**Expected Output:**

```text
Number: 100
```

**Explanation:**

The union `Data` contains three possible members.

The statement:

```c
value.number = 100;
```

stores an integer value in the union's shared storage.

### 17.4 Basic Characteristics of Unions

Important characteristics include:

1. All union members share the same memory location.
2. The union allocates enough storage to hold its largest member, subject to alignment and implementation requirements.
3. Writing to one member changes the shared storage.
4. A union can contain members of different data types.
5. The same union object can be used to represent different member values at different times.
6. A union member is accessed using the dot operator when working with a union variable.

### 17.5 Difference Between a Structure and a Union

A structure and a union both allow multiple data members to be grouped under one name.

However, their memory organization is different.

| Structure | Union |
|---|---|
| Each member has its own storage within the object | Members share the same storage |
| Can hold values in all members simultaneously | Normally represents one selected member value at a time |
| Size includes storage for all members and possible padding | Size is sufficient for the largest member, including alignment requirements |
| Modifying one member does not overwrite another member | Writing one member changes the shared representation |
| Declared using `struct` | Declared using `union` |

### 17.6 A Simple Memory-Sharing Illustration

Consider:

```c
union Data {
    int number;
    float decimal;
    char character;
};
```

A simplified conceptual illustration is:

```text
             Shared Memory
+----------------------------------+
|                                  |
|     Union Data Storage           |
|                                  |
+----------------------------------+
       |       |          |
       |       |          |
     number  decimal   character
```

All three members begin at the same address.

However, they interpret the shared storage according to their respective data types.

The actual size and alignment depend on the implementation.

### 17.7 Important Considerations

1. A union is declared using the `union` keyword.
2. All union members share the same storage.
3. The union's size is sufficient for its largest member, including required alignment.
4. Writing to one member affects the shared storage.
5. A union is useful when only one of several possible representations is needed at a time.
6. Use a separate tag or discriminator when a program needs to keep track of which union member is currently intended to be active.
7. Reading a different member from the one most recently written requires care because the resulting interpretation is not generally a portable conversion.
8. Unions are especially useful in memory-conscious and low-level programming.

---

---

## 18. Union Declaration, Initialization and Memory Sharing

### 18.1 Declaring Union Variables

After defining a union, we can declare variables of that union type.

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
    char character;
};

int main(void) {
    union Data value1;
    union Data value2;

    value1.number = 100;
    value2.decimal = 25.5f;

    printf("Value 1: %d\n", value1.number);
    printf("Value 2: %.2f\n", value2.decimal);

    return 0;
}
```

**Expected Output:**

```text
Value 1: 100
Value 2: 25.50
```

**Explanation:**

Two independent union objects are declared.

Each object has its own shared storage:

- `value1` currently stores an integer.
- `value2` currently stores a floating-point value.

Members of the same union object share storage, but separate union objects do not share memory with each other.

### 18.2 Initializing a Union

A union can be initialized when it is declared.

In a simple positional initializer, the first member is initialized.

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
    char character;
};

int main(void) {
    union Data value = {100};

    printf("Number: %d\n", value.number);

    return 0;
}
```

**Expected Output:**

```text
Number: 100
```

**Explanation:**

The first member of the union is `number`.

Therefore:

```c
union Data value = {100};
```

initializes `value.number` with `100`.

### 18.3 Designated Initialization

C99 introduced designated initializers, which allow us to specify the member being initialized.

**Syntax:**

```c
union UnionName variable = {
    .memberName = value
};
```

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
    char character;
};

int main(void) {
    union Data value = {.decimal = 45.75f};

    printf("Decimal: %.2f\n", value.decimal);

    return 0;
}
```

**Expected Output:**

```text
Decimal: 45.75
```

**Explanation:**

The initializer:

```c
{.decimal = 45.75f}
```

explicitly selects the `decimal` member for initialization.

Designated initializers improve readability when a union contains multiple members.

### 18.4 Accessing Union Members

Union members are accessed using the same operators used for structure members.

- Dot (`.`) operator: Used with a union variable.
- Arrow (`->`) operator: Used with a pointer to a union.

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
};

int main(void) {
    union Data value;

    value.number = 50;

    printf("Number: %d\n", value.number);

    value.decimal = 12.5f;

    printf("Decimal: %.2f\n", value.decimal);

    return 0;
}
```

**Expected Output:**

```text
Number: 50
Decimal: 12.50
```

**Explanation:**

First, the integer member receives a value.

Then, the floating-point member is written.

Both members use the same storage, so writing the second member changes the stored representation.

After the second assignment, the program uses `value.decimal`, the member that was most recently written.

### 18.5 Understanding Union Memory Sharing

Consider the following declaration:

```c
union Data {
    int number;
    float decimal;
    char character;
};
```

The members share the same starting address.

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
    char character;
};

int main(void) {
    union Data value;

    printf("Address of union: %p\n", (void *)&value);
    printf("Address of number: %p\n", (void *)&value.number);
    printf("Address of decimal: %p\n", (void *)&value.decimal);
    printf("Address of character: %p\n", (void *)&value.character);

    return 0;
}
```

**Example Output:**

```text
Address of union: 0x...
Address of number: 0x...
Address of decimal: 0x...
Address of character: 0x...
```

The actual hexadecimal address varies between executions and systems.

**Explanation:**

The addresses of all union members begin at the same location as the union object.

This demonstrates the shared-storage behavior of unions.

The `%p` conversion specifier is used to display pointer values. The pointers are explicitly converted to `void *`, as required for portable use with `%p`.

### 18.6 Understanding sizeof with Unions

The `sizeof` operator can be used to determine the size of a union.

The size is sufficient to store its largest member while satisfying the union's alignment requirements.

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
    char character;
};

int main(void) {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of union: %zu bytes\n", sizeof(union Data));

    return 0;
}
```

**Example Output on a Common System:**

```text
Size of int: 4 bytes
Size of float: 4 bytes
Size of char: 1 byte
Size of union: 4 bytes
```

**Explanation:**

On this example implementation, the largest member is four bytes.

Therefore, the union occupies four bytes.

The exact result depends on the implementation and the members' alignment requirements.

### 18.7 Modifying Union Members

A union can store different types of values at different times.

**Example:**

```c
#include <stdio.h>

union Value {
    int integer;
    float decimal;
    char character;
};

int main(void) {
    union Value data;

    data.integer = 100;
    printf("Integer: %d\n", data.integer);

    data.decimal = 15.5f;
    printf("Decimal: %.2f\n", data.decimal);

    data.character = 'A';
    printf("Character: %c\n", data.character);

    return 0;
}
```

**Expected Output:**

```text
Integer: 100
Decimal: 15.50
Character: A
```

**Explanation:**

The program writes to one member at a time:

1. The integer member receives `100`.
2. The decimal member receives `15.5`.
3. The character member receives `'A'`.

Each assignment changes the shared storage.

The program reads each member immediately after writing to that same member.

### 18.8 Using a Pointer to a Union

A pointer can store the address of a union variable.

The arrow operator is used to access members through the pointer.

**Example:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
};

int main(void) {
    union Data value;
    union Data *ptr = &value;

    ptr->number = 200;

    printf("Number: %d\n", ptr->number);

    ptr->decimal = 30.5f;

    printf("Decimal: %.2f\n", ptr->decimal);

    return 0;
}
```

**Expected Output:**

```text
Number: 200
Decimal: 30.50
```

**Explanation:**

The pointer `ptr` stores the address of the union variable.

The statement:

```c
ptr->number = 200;
```

accesses the integer member through the pointer.

The arrow operator is equivalent to dereferencing the pointer and using the dot operator:

```c
(*ptr).number = 200;
```

### 18.9 Using a Union Inside a Structure

A union can be included as a member of a structure.

This is particularly useful when a record needs to store one of several possible types of data.

A common approach is to use an additional member, called a **tag** or **discriminator**, to indicate which union member is currently intended to be used.

**Example:**

```c
#include <stdio.h>

enum ValueType {
    INTEGER,
    DECIMAL
};

struct Value {
    enum ValueType type;

    union {
        int integer;
        float decimal;
    } data;
};

int main(void) {
    struct Value value;

    value.type = INTEGER;
    value.data.integer = 100;

    if (value.type == INTEGER) {
        printf("Integer Value: %d\n", value.data.integer);
    }

    value.type = DECIMAL;
    value.data.decimal = 25.5f;

    if (value.type == DECIMAL) {
        printf("Decimal Value: %.2f\n", value.data.decimal);
    }

    return 0;
}
```

**Expected Output:**

```text
Integer Value: 100
Decimal Value: 25.50
```

**Explanation:**

The structure contains:

- `type`, which identifies the intended value type.
- `data`, an anonymous union that stores the selected value.

The program updates the tag whenever it changes the union member.

The tag helps the program determine which member should be accessed.

In larger programs, changing the tag and the corresponding union value should be handled together so that they cannot become inconsistent.

### 18.10 Important Considerations

1. A union variable can be initialized using a positional or designated initializer.
2. A simple positional initializer initializes the first member.
3. Designated initializers explicitly identify the member being initialized.
4. All members share the same storage within a union object.
5. Writing to one member changes the shared representation.
6. Separate union variables have separate storage.
7. Use the dot operator for union variables and the arrow operator for union pointers.
8. Use `sizeof` to inspect the actual size on the target implementation.
9. A tag or discriminator is useful when a program needs to track which union member it intends to use.
10. Do not assume that reading a different member performs a normal type conversion.

---

## 19. Structures vs Unions and Practical Applications

### 19.1 Introduction

Structures and unions are both user-defined data types in C.

They allow programmers to group multiple members under a single type name.

However, they differ in memory allocation, data storage, and the situations in which they are useful.

Understanding these differences helps us select the appropriate data type when designing programs.

### 19.2 Complete Comparison Between Structures and Unions

| Feature | Structure | Union |
|---|---|---|
| Keyword | `struct` | `union` |
| Memory allocation | Separate storage for each member | Shared storage for all members |
| Simultaneous values | All members can hold their values together | Normally one selected member value is maintained at a time |
| Memory size | Based on all members and padding | Sufficient for the largest member and alignment |
| Member addresses | Members occupy their respective locations | All members begin at the same address |
| Modification | Updating one member does not overwrite another | Writing one member changes the shared representation |
| Initialization | Can initialize multiple members | A simple initializer selects the first member; designated initialization can select another |
| Typical use | Records containing multiple related values | Data that can have one of several alternative representations |
| Memory usage | May require more storage | Can reduce storage when member values are mutually exclusive |

### 19.3 When Should We Use a Structure?

A structure is appropriate when a record needs to maintain multiple related values at the same time.

**Example: Student Record**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[30];
    float percentage;
};

int main(void) {
    struct Student student1 = {
        101,
        "Arjun",
        89.5f
    };

    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Percentage: %.2f\n", student1.percentage);

    return 0;
}
```

**Expected Output:**

```text
Roll Number: 101
Name: Arjun
Percentage: 89.50
```

**Explanation:**

A student record needs to store a roll number, name, and percentage simultaneously.

A structure is suitable because each member has its own storage.

Other practical uses include:

- Employee records.
- Product information.
- Bank account details.
- Date and time representations.
- Student management systems.
- Inventory management.

### 19.4 When Should We Use a Union?

A union is appropriate when a variable needs to represent one of several alternative types of values.

**Example: Different Value Types**

```c
#include <stdio.h>

enum ValueType {
    INTEGER,
    DECIMAL,
    CHARACTER
};

struct Data {
    enum ValueType type;

    union {
        int number;
        float decimal;
        char character;
    } value;
};

int main(void) {
    struct Data data;

    data.type = CHARACTER;
    data.value.character = 'A';

    if (data.type == CHARACTER) {
        printf("Character: %c\n", data.value.character);
    }

    data.type = INTEGER;
    data.value.number = 500;

    if (data.type == INTEGER) {
        printf("Integer: %d\n", data.value.number);
    }

    return 0;
}
```

**Expected Output:**

```text
Character: A
Integer: 500
```

**Explanation:**

The union stores one selected value at a time.

The `type` member identifies the intended union member.

This approach is useful when a program works with values that can have different data types.

### 19.5 Combining Structures and Unions

Structures and unions are not competing alternatives in every situation.

They can be combined to build more flexible data representations.

**Example: Employee Information**

```c
#include <stdio.h>

enum EmployeeType {
    PERMANENT,
    CONTRACT
};

struct Employee {
    int id;
    char name[30];

    enum EmployeeType type;

    union {
        float annualSalary;
        float hourlyRate;
    } payment;
};

int main(void) {
    struct Employee employee1 = {
        .id = 101,
        .name = "Rohan",
        .type = PERMANENT,
        .payment.annualSalary = 600000.0f
    };

    printf("Employee ID: %d\n", employee1.id);
    printf("Employee Name: %s\n", employee1.name);

    if (employee1.type == PERMANENT) {
        printf("Annual Salary: %.2f\n",
               employee1.payment.annualSalary);
    }

    return 0;
}
```

**Expected Output:**

```text
Employee ID: 101
Employee Name: Rohan
Annual Salary: 600000.00
```

**Explanation:**

The structure stores information that every employee needs:

- Employee ID.
- Employee name.
- Employee category.

The union stores payment information using one of two possible representations:

- Annual salary for permanent employees.
- Hourly rate for contract employees.

The `type` member identifies which payment field is intended to be used.

### 19.6 Practical Applications of Structures

Structures are commonly used in:

1. **Student Management Systems:** Store student details, marks, and attendance.
2. **Employee Management Systems:** Store employee IDs, names, salaries, and department details.
3. **Banking Applications:** Represent customer accounts and transaction records.
4. **Inventory Systems:** Store product codes, names, quantities, and prices.
5. **Date and Time Handling:** Group day, month, year, hours, and minutes.
6. **File Processing:** Represent logical records while carefully handling file formats and serialization.
7. **Data Structures:** Store nodes and related information in linked lists and trees.

### 19.7 Practical Applications of Unions

Unions are useful in situations such as:

1. **Embedded Systems:** Represent alternative values in memory-conscious applications.
2. **Variant Data:** Store one of several possible value types.
3. **Protocol Processing:** Represent alternative data fields when the format and layout are explicitly controlled.
4. **Compiler Design:** Represent different kinds of values or syntax-related data.
5. **Hardware-related Programming:** Work with specific data representations when the implementation and hardware requirements are understood.
6. **Memory Optimization:** Reduce storage when only one of several member values is required at a time.

### 19.8 Decision Guide: Structure or Union?

Use the following guide when choosing between them.

| Requirement | Recommended Type |
|---|---|
| Store multiple related values simultaneously | Structure |
| Store an ID, name, and salary together | Structure |
| Store one of several alternative value types | Union |
| Share storage between different member representations | Union |
| Maintain common information and one variable-type value | Structure containing a union |
| Build a linked-list node with data and a pointer | Structure |
| Represent a tagged value with different possible types | Structure containing a tagged union |

### 19.9 Important Considerations

1. Choose a structure when all members need to maintain their values simultaneously.
2. Choose a union when members represent mutually exclusive alternatives.
3. Use a tag or discriminator to track the intended union member.
4. Do not assume that a union automatically saves memory in every situation; consider alignment and padding.
5. Structures and unions can be nested and combined.
6. Avoid relying on implementation-specific memory layouts unless the application explicitly requires them.
7. Use meaningful member names to make complex data representations easier to understand.

---

## 20. Common Mistakes, Best Practices and Key Takeaways

### 20.1 Common Mistakes While Working with Structures

#### Mistake 1: Forgetting the struct Keyword

**Incorrect:**

```c
struct Student {
    int rollNumber;
};

int main(void) {
    Student student1;

    return 0;
}
```

**Correct:**

```c
struct Student {
    int rollNumber;
};

int main(void) {
    struct Student student1;

    return 0;
}
```

**Explanation:**

Without a typedef alias named `Student`, the structure type must be declared using `struct Student`.

#### Mistake 2: Using the Wrong Member Access Operator

**Incorrect:**

```c
struct Student {
    int rollNumber;
};

int main(void) {
    struct Student student1;
    struct Student *ptr = &student1;

    ptr.rollNumber = 101;

    return 0;
}
```

**Correct:**

```c
struct Student {
    int rollNumber;
};

int main(void) {
    struct Student student1;
    struct Student *ptr = &student1;

    ptr->rollNumber = 101;

    return 0;
}
```

**Explanation:**

Use:

- `.` with a structure variable.
- `->` with a pointer to a structure.

#### Mistake 3: Accessing an Uninitialized Structure Member

**Incorrect:**

```c
struct Student {
    int rollNumber;
};

int main(void) {
    struct Student student1;

    printf("%d\n", student1.rollNumber);

    return 0;
}
```

**Correct:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
};

int main(void) {
    struct Student student1 = {101};

    printf("%d\n", student1.rollNumber);

    return 0;
}
```

**Explanation:**

An automatic structure variable that is not initialized can contain indeterminate member values.

Initialize the structure or assign the required members before reading them.

#### Mistake 4: Using the Assignment Operator Between Incompatible Structure Types

**Incorrect:**

```c
struct First {
    int value;
};

struct Second {
    int value;
};

int main(void) {
    struct First a;
    struct Second b;

    a = b;

    return 0;
}
```

**Correct:**

```c
struct First {
    int value;
};

struct Second {
    int value;
};

int main(void) {
    struct First a;
    struct Second b;

    a.value = b.value;

    return 0;
}
```

**Explanation:**

Structure assignment requires compatible structure types.

Two separately declared structure types do not automatically become compatible merely because their members look identical.

Assign individual members when transferring values between different structure types.

#### Mistake 5: Incorrectly Handling Structure Strings

**Incorrect:**

```c
struct Student {
    char name[20];
};

int main(void) {
    struct Student student1;

    student1.name = "Arjun";

    return 0;
}
```

**Correct:**

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
};

int main(void) {
    struct Student student1;

    strcpy(student1.name, "Arjun");

    printf("%s\n", student1.name);

    return 0;
}
```

**Explanation:**

An array member cannot be assigned a string using the assignment operator after its declaration.

Use a suitable string-handling method and ensure the destination array has enough space, including the null terminator.

#### Mistake 6: Dereferencing an Invalid Structure Pointer

**Incorrect:**

```c
struct Student {
    int rollNumber;
};

int main(void) {
    struct Student *ptr = NULL;

    printf("%d\n", ptr->rollNumber);

    return 0;
}
```

**Correct:**

```c
#include <stdio.h>

struct Student {
    int rollNumber;
};

int main(void) {
    struct Student student1 = {101};
    struct Student *ptr = &student1;

    if (ptr != NULL) {
        printf("%d\n", ptr->rollNumber);
    }

    return 0;
}
```

**Explanation:**

A null pointer does not point to a valid structure object.

Dereferencing it results in undefined behavior.

Always ensure a structure pointer refers to a valid object before accessing its members.

### 20.2 Common Mistakes While Working with Self-Referential Structures

#### Mistake 1: Declaring a Direct Member of the Same Structure Type

**Incorrect:**

```c
struct Node {
    int data;
    struct Node next;
};
```

**Correct:**

```c
struct Node {
    int data;
    struct Node *next;
};
```

**Explanation:**

A structure cannot contain an ordinary member of its own incomplete type.

A pointer to the same structure type is valid.

#### Mistake 2: Using an Uninitialized Next Pointer

**Incorrect:**

```c
struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node node1;

    node1.data = 10;

    return 0;
}
```

**Better:**

```c
struct Node {
    int data;
    struct Node *next;
};

int main(void) {
    struct Node node1;

    node1.data = 10;
    node1.next = NULL;

    return 0;
}
```

**Explanation:**

Initialize pointer members before using them.

For a node without a following node, assigning `NULL` makes the intended state clear.

### 20.3 Common Mistakes While Working with Unions

#### Mistake 1: Assuming Every Union Member Stores an Independent Value

**Incorrect Assumption:**

```c
union Data {
    int number;
    float decimal;
};

int main(void) {
    union Data value;

    value.number = 100;
    value.decimal = 25.5f;

    printf("%d\n", value.number);

    return 0;
}
```

**Better:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
};

int main(void) {
    union Data value;

    value.number = 100;
    printf("Number: %d\n", value.number);

    value.decimal = 25.5f;
    printf("Decimal: %.2f\n", value.decimal);

    return 0;
}
```

**Explanation:**

Union members share storage.

Writing to `decimal` changes the representation previously stored through `number`.

Do not treat the members as independent variables.

#### Mistake 2: Reading a Union Member Without Establishing Its Value

**Incorrect:**

```c
union Data {
    int number;
    float decimal;
};

int main(void) {
    union Data value = {.number = 100};

    printf("%f\n", value.decimal);

    return 0;
}
```

**Better:**

```c
#include <stdio.h>

union Data {
    int number;
    float decimal;
};

int main(void) {
    union Data value = {.number = 100};

    printf("%d\n", value.number);

    return 0;
}
```

**Explanation:**

The program should read the member whose value it has established.

Reading another member is not a normal conversion between data types. The result can depend on the object representation and implementation.

#### Mistake 3: Forgetting Which Union Member Is Intended to Be Active

**Better Approach:**

Use an enumeration or another tag to record the intended member.

```c
enum DataType {
    INTEGER,
    DECIMAL
};

struct Data {
    enum DataType type;

    union {
        int number;
        float decimal;
    } value;
};
```

**Explanation:**

The tag allows the program to decide which member it should access.

The program must update the tag consistently whenever it changes the union value.

### 20.4 General Best Practices

Follow these practices when writing programs using structures and unions:

1. **Use meaningful names:** Choose descriptive structure, union, and member names.
2. **Initialize variables:** Initialize structure and union objects before reading their values.
3. **Use typedef appropriately:** Create readable aliases when they simplify declarations.
4. **Choose the correct access operator:** Use `.` for variables and `->` for pointers.
5. **Validate pointers:** Check pointers before dereferencing them.
6. **Handle strings safely:** Ensure character arrays have enough space for the complete string and null terminator.
7. **Avoid unnecessary nesting:** Keep data definitions understandable.
8. **Understand memory layout:** Do not assume exact padding or alignment values.
9. **Use unions carefully:** Track the intended member when a union represents alternative values.
10. **Prefer clear function interfaces:** Pass structures by value when copying is appropriate and by pointer when direct access or modification is required.
11. **Use const where appropriate:** A pointer to a const structure can prevent unintended modification through that pointer.
12. **Keep ownership clear:** When structures contain dynamically allocated pointers, document and manage the lifetime of the pointed-to memory.

### 20.5 Key Takeaways

After completing this module, remember these important concepts:

- A structure groups related members under one user-defined data type.
- Structure members have separate storage within the structure object.
- Structure variables can be initialized, copied, modified, and passed to functions.
- The dot operator accesses members through structure variables.
- The arrow operator accesses members through structure pointers.
- Arrays of structures allow multiple records to be stored together.
- Nested structures allow complex information to be organized hierarchically.
- `typedef` creates an alternative name for a type.
- Self-referential structures use pointers to connect objects of the same structure type.
- Structure padding and alignment affect the total memory occupied by a structure.
- Bit fields specify widths for selected integer structure members.
- A union allows different members to share the same memory.
- A tag or discriminator can help track the intended union member.
- Structures and unions can be combined to represent complex data.

### 20.6 Module Learning Outcome

By completing this module, you should be able to:

1. Declare and define structures and unions.
2. Create and initialize structure variables.
3. Access and modify structure members.
4. Work with arrays of structures.
5. Read and display structured records.
6. Create and use nested structures.
7. Pass structures to functions and return structures from functions.
8. Work with structure pointers and the arrow operator.
9. Use `typedef` with structures.
10. Understand self-referential structures.
11. Explain structure padding, alignment, and the `sizeof` operator.
12. Declare and use bit fields.
13. Explain union memory sharing and initialization.
14. Choose between structures and unions for practical applications.
15. Write organized programs using user-defined data types.

---


---

## 21. Practical Programs

This section contains practical C programs designed to strengthen your understanding of structures and unions.

The programs progress from basic structure declarations to more advanced applications involving arrays, pointers, nested structures, self-referential structures, bit fields, and unions.

### 21.1 List of Practical Programs

The following programs will be added to the `programs/` directory.

| No. | Program Name | Concepts Covered | Program File |
|---:|---|---|---|
| 01 | Student Structure | Structure declaration and member access | `programs/01-student-structure.c` |
| 02 | Employee Structure | Structure members and initialization | `programs/02-employee-structure.c` |
| 03 | Structure Initialization | Different methods of initialization | `programs/03-structure-initialization.c` |
| 04 | Structure Member Modification | Updating structure members | `programs/04-structure-member-modification.c` |
| 05 | Structure Copying | Copying one structure variable to another | `programs/05-structure-copying.c` |
| 06 | Structure Input and Output | Reading and displaying structure data | `programs/06-structure-input-output.c` |
| 07 | Structure with String Members | Handling character array members | `programs/07-structure-string-members.c` |
| 08 | Array of Structures | Storing multiple records | `programs/08-array-of-structures.c` |
| 09 | Student Records Using Array of Structures | Managing multiple student records | `programs/09-student-records.c` |
| 10 | Searching Records | Searching an array of structures | `programs/10-search-structure-record.c` |
| 11 | Updating Records | Modifying a selected structure record | `programs/11-update-structure-record.c` |
| 12 | Nested Structures | Structure inside another structure | `programs/12-nested-structures.c` |
| 13 | Multiple Nested Structures | Combining multiple nested members | `programs/13-multiple-nested-structures.c` |
| 14 | Passing Structure to Function | Passing a structure by value | `programs/14-pass-structure-to-function.c` |
| 15 | Returning Structure from Function | Returning a structure from a function | `programs/15-return-structure-from-function.c` |
| 16 | Passing Structure Pointer to Function | Passing a structure using a pointer | `programs/16-structure-pointer-to-function.c` |
| 17 | Modifying Structure Using Pointer | Updating members through a function | `programs/17-modify-structure-using-pointer.c` |
| 18 | Structure Pointer | Declaring and using structure pointers | `programs/18-structure-pointer.c` |
| 19 | Arrow Operator | Accessing members using `->` | `programs/19-arrow-operator.c` |
| 20 | Array of Structure Pointers | Working with multiple structure pointers | `programs/20-array-of-structure-pointers.c` |
| 21 | typedef with Structure | Creating structure type aliases | `programs/21-typedef-structure.c` |
| 22 | typedef with Structure Pointer | Creating structure pointer aliases | `programs/22-typedef-structure-pointer.c` |
| 23 | Self-Referential Structure | Structure containing a pointer to its own type | `programs/23-self-referential-structure.c` |
| 24 | Simple Linked Structure | Connecting and traversing nodes | `programs/24-simple-linked-structure.c` |
| 25 | Structure Padding and sizeof | Examining structure size and padding | `programs/25-structure-padding-sizeof.c` |
| 26 | Structure Member Alignment | Comparing member arrangements | `programs/26-structure-member-alignment.c` |
| 27 | Bit Fields | Declaring and accessing bit fields | `programs/27-bit-fields.c` |
| 28 | Status Flags Using Bit Fields | Representing multiple status flags | `programs/28-status-flags-bit-fields.c` |
| 29 | Basic Union | Declaring and using a union | `programs/29-basic-union.c` |
| 30 | Union Initialization | Initializing union members | `programs/30-union-initialization.c` |
| 31 | Union Memory Sharing | Understanding shared memory | `programs/31-union-memory-sharing.c` |
| 32 | Union Pointer | Accessing union members through a pointer | `programs/32-union-pointer.c` |
| 33 | Structure Containing a Union | Combining structures and unions | `programs/33-structure-containing-union.c` |
| 34 | Student Management System | Practical application of structures | `programs/34-student-management-system.c` |
| 35 | Employee Management System | Practical application of structures and unions | `programs/35-employee-management-system.c` |

### 21.2 How to Compile and Run the Programs

Use GCC to compile an individual program.

**Compilation Syntax:**

```bash
gcc programs/01-student-structure.c -o student-structure
```

**Run on Git Bash or Linux:**

```bash
./student-structure
```

**Run on Windows Command Prompt:**

```cmd
student-structure.exe
```

You can also compile a program with additional warnings enabled:

```bash
gcc -Wall -Wextra -std=c11 programs/01-student-structure.c -o student-structure
```

**Note:** Each program has its own `main()` function. Compile and execute the files individually rather than attempting to compile all program files into one executable.

### 21.3 Practice Recommendations

1. Read the program and identify the structure or union members.
2. Understand how each member is initialized and accessed.
3. Predict the output before executing the program.
4. Compile the program using GCC.
5. Observe the output and compare it with your prediction.
6. Modify the values and experiment with different inputs.
7. Try implementing the same logic without referring to the original solution.
8. Explore additional cases and improve the program where possible.

---

## 22. Module Completion Checklist and Navigation

### 22.1 Learning Checklist

Use this checklist to track your progress through the module.

#### Structure Fundamentals

- [ ] Understand the concept and purpose of structures.
- [ ] Declare and define structures.
- [ ] Create and initialize structure variables.
- [ ] Access and modify structure members.
- [ ] Understand structure assignment and copying.
- [ ] Work with different data types inside structures.

#### Working with Structures

- [ ] Create arrays of structures.
- [ ] Perform input and output operations on structures.
- [ ] Work with nested structures.
- [ ] Pass structures to functions.
- [ ] Return structures from functions.
- [ ] Use structure pointers.
- [ ] Understand the dot and arrow operators.
- [ ] Use `typedef` with structures.

#### Advanced Structure Concepts

- [ ] Understand self-referential structures.
- [ ] Understand the basics of linked structures.
- [ ] Understand structure padding and alignment.
- [ ] Use the `sizeof` operator with structures.
- [ ] Understand and use bit fields.

#### Union Concepts

- [ ] Declare and initialize unions.
- [ ] Access union members.
- [ ] Understand shared memory allocation.
- [ ] Use pointers to unions.
- [ ] Combine structures and unions.
- [ ] Understand the differences between structures and unions.

#### Practical Implementation

- [ ] Complete the basic structure programs.
- [ ] Complete the array and nested structure programs.
- [ ] Complete the structure function and pointer programs.
- [ ] Complete the advanced structure programs.
- [ ] Complete the union programs.
- [ ] Build the student management system.
- [ ] Build the employee management system.
- [ ] Review and revise the completed programs.

### 22.2 Module Completion Status

Before marking this module complete, make sure you have:

- [ ] Read and understood all the documentation sections.
- [ ] Practiced the important syntax and examples.
- [ ] Created the practical programs in the `programs/` directory.
- [ ] Compiled and tested the programs.
- [ ] Reviewed common mistakes and best practices.
- [ ] Completed the learning checklist.
- [ ] Updated the repository README and roadmap.

### 22.3 Navigation

| Navigation | Module |
|---|---|
| Previous Module | [07. Pointers](../07-Pointers/README.md) |
| Current Module | **08. Structures and Unions** |
| Next Module | [09. File Handling](../09-File-Handling/README.md) |
| Main Repository | [C Programming](../README.md) |

---

