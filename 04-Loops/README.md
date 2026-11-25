
# 📘 C Programming — Loops

<p align="center">
  <strong>Module 04 | C Programming Learning Series</strong>
  <br>
  Understanding Iteration, Repetition and Loop Control
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language C">
  <img src="https://img.shields.io/badge/Level-Beginner-green.svg" alt="Beginner">
  <img src="https://img.shields.io/badge/Module-04-orange.svg" alt="Module 04">
</p>

---

## 📑 Table of Contents

1. [Introduction to Loops](#1-introduction-to-loops)
2. [Types of Loops in C](#2-types-of-loops-in-c)
3. [The while Loop](#3-the-while-loop)
4. [The do-while Loop](#4-the-do-while-loop)
5. [The for Loop](#5-the-for-loop)
6. [Nested Loops](#6-nested-loops)
7. [The break Statement in Loops](#7-the-break-statement-in-loops)
8. [The continue Statement in Loops](#8-the-continue-statement-in-loops)
9. [Infinite Loops](#9-infinite-loops)
10. [Comparison of Loops](#10-comparison-of-loops)
11. [Common Mistakes](#11-common-mistakes)
12. [Best Practices](#12-best-practices)
13. [Practice Exercises](#13-practice-exercises)
14. [Key Takeaways](#14-key-takeaways)
15. [Practical Programs](#-practical-programs)

---

## 🎯 Learning Objectives

After completing this module, you will be able to:

- Understand the purpose of loops in C programming.
- Identify the different types of loops.
- Use `while`, `do-while` and `for` loops.
- Understand nested loops and their applications.
- Control loop execution using `break` and `continue`.
- Understand infinite loops and their causes.
- Select an appropriate loop for different programming situations.
- Avoid common mistakes while working with loops.

---

## 1. Introduction to Loops

A **loop** is a control structure that repeatedly executes a block of statements as long as a specified condition is satisfied.

Loops help programmers avoid writing the same statements multiple times.

### Why Do We Need Loops?

Consider a program that prints numbers from 1 to 5.

Without a loop:

```c
#include <stdio.h>

int main() {
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");

    return 0;
}
```

Output:

```text
1
2
3
4
5
```

Using a loop:

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

Output:

```text
1
2
3
4
5
```

The loop reduces repeated code and makes programs easier to maintain.

### Important Components of a Loop

A loop generally involves:

1. **Initialization:** Assigning the initial value to a loop variable.
2. **Condition:** Checking whether the loop should continue.
3. **Loop Body:** Statements executed during each iteration.
4. **Updation:** Modifying the loop variable.

### Important Terms

| Term | Meaning |
|---|---|
| Iteration | One execution of the loop body |
| Loop variable | Variable used to control the loop |
| Condition | Expression that determines whether the loop continues |
| Initialization | Setting the starting value |
| Updation | Changing the loop variable |

---

## 2. Types of Loops in C

C provides three main types of loops.

### 1. while Loop

The `while` loop checks the condition before executing the loop body.

It is an entry-controlled loop.

### 2. do-while Loop

The `do-while` loop executes the loop body first and checks the condition afterward.

It is an exit-controlled loop.

### 3. for Loop

The `for` loop combines initialization, condition and updation in one statement.

It is an entry-controlled loop.

### Classification

```text
                    Loops in C
                        |
          +-------------+-------------+
          |             |             |
        while        do-while         for
          |             |             |
       Entry         Exit          Entry
      Controlled   Controlled     Controlled
```

---

## 3. The while Loop

The `while` loop repeatedly executes a block of statements as long as its condition evaluates to true.

It checks the condition before executing the loop body.

### Syntax

```c
initialization;

while (condition) {
    statements;
    updation;
}
```

### Example: Print Numbers from 1 to 5

```c
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
```

Output:

```text
1
2
3
4
5
```

### Explanation

- `int i = 1` initializes the loop variable.
- `i <= 5` checks the loop condition.
- `printf()` displays the current value.
- `i++` increments the variable.
- The loop stops when the condition becomes false.

### Flow of a while Loop

```text
       Start
         |
   Initialization
         |
    Check Condition
         |
     +---+---+
     |       |
    True    False
     |       |
  Loop Body  End
     |
   Updation
     |
     +----> Check Condition
```

### Example: Sum of First 5 Natural Numbers

```c
#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    while (i <= 5) {
        sum = sum + i;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}
```

Output:

```text
Sum = 15
```

### Important Points

- The condition is checked before execution.
- The loop body may execute zero times.
- Initialization is generally performed before the loop.
- The loop variable must be updated appropriately to avoid unintended infinite loops.

---

## 4. The do-while Loop

The `do-while` loop executes the loop body before checking the condition.

Therefore, the loop body executes at least once, even if the condition is initially false.

### Syntax

```c
initialization;

do {
    statements;
    updation;
} while (condition);
```

**Important:** A semicolon is required after the `while` condition.

### Example: Print Numbers from 1 to 5

```c
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
```

Output:

```text
1
2
3
4
5
```

### Example: Condition Initially False

```c
#include <stdio.h>

int main() {
    int i = 10;

    do {
        printf("Hello C Programming");
    } while (i < 5);

    return 0;
}
```

Output:

```text
Hello C Programming
```

Even though the condition is false, the statement executes once.

### Flow of a do-while Loop

```text
       Start
         |
   Initialization
         |
      Loop Body
         |
       Updation
         |
    Check Condition
         |
     +---+---+
     |       |
    True    False
     |       |
     +----> Loop Body
             |
            End
```

### Important Points

- The loop body executes at least once.
- The condition is checked after execution.
- It is useful when an operation must happen before checking whether repetition is needed.
- The semicolon after the `while` condition is mandatory.

---

## 5. The for Loop

The `for` loop is commonly used when the number of iterations is known or controlled by a counting variable.

It combines initialization, condition and updation in one statement.

### Syntax

```c
for (initialization; condition; updation) {
    statements;
}
```

### Example: Print Numbers from 1 to 5

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

Output:

```text
1
2
3
4
5
```

### Explanation

| Component | Operation |
|---|---|
| Initialization | `i = 1` |
| Condition | `i <= 5` |
| Loop body | `printf("%d\n", i)` |
| Updation | `i++` |

### Example: Print Even Numbers from 2 to 10

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 2; i <= 10; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
```

Output:

```text
2
4
6
8
10
```

### Example: Print Numbers in Reverse Order

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 5; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}
```

Output:

```text
5
4
3
2
1
```

### Flow of a for Loop

```text
       Start
         |
   Initialization
         |
    Check Condition
         |
     +---+---+
     |       |
    True    False
     |       |
  Loop Body  End
     |
   Updation
     |
     +----> Check Condition
```

### Important Points

- Initialization executes once.
- The condition is checked before every iteration.
- Updation executes after the loop body.
- The initialization, condition and updation expressions can be omitted when appropriate.
- Omitting the condition creates an infinite loop unless the loop is terminated another way.

---

## 6. Nested Loops

A **nested loop** is a loop placed inside another loop.

The outer loop controls the repeated execution of the inner loop.

Nested loops are commonly used for:

- Pattern printing.
- Matrix operations.
- Tables and grids.
- Multi-dimensional arrays.

### Syntax

```c
for (initialization; condition; updation) {

    for (initialization; condition; updation) {
        statements;
    }

}
```

### Example: Print a Rectangle Pattern

```c
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 4; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
```

Output:

```text
* * * *
* * * *
* * * *
```

### Explanation

- The outer loop executes 3 times.
- The inner loop executes 4 times for each outer iteration.
- The inner loop completes all its iterations before the outer loop moves to its next iteration.
- The total number of inner loop executions is 3 × 4 = 12.

### Example: Print a Right-Angled Triangle

```c
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
```

Output:

```text
*
* *
* * *
* * * *
```

### Important Points

- A loop can contain another loop.
- The inner loop completes its execution for every outer loop iteration.
- Multiple levels of nesting are possible.
- Excessive nesting can make programs difficult to understand.

---

## 7. The break Statement in Loops

The `break` statement immediately terminates the nearest enclosing loop.

After executing `break`, program control moves to the statement following that loop.

### Syntax

```c
break;
```

### Example: Stop Loop at 3

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}
```

Output:

```text
1
2
```

### Explanation

- The loop starts with `i = 1`.
- The values 1 and 2 are printed.
- When `i` becomes 3, the `break` statement executes.
- The loop terminates immediately.

### Important Points

- `break` terminates the nearest enclosing loop.
- It can be used with `for`, `while` and `do-while`.
- In nested loops, it terminates only the innermost loop containing it.
- It is also used in `switch` statements.

---

## 8. The continue Statement in Loops

The `continue` statement skips the remaining statements in the current iteration and moves to the next iteration.

Unlike `break`, it does not terminate the entire loop.

### Syntax

```c
continue;
```

### Example: Skip Number 3

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
```

Output:

```text
1
2
4
5
```

### Explanation

- The loop executes normally for 1 and 2.
- When `i` becomes 3, `continue` skips the `printf()` statement.
- The loop proceeds with the next iteration.
- The value 3 is not printed.

### Important Points

- `continue` skips the remaining statements in the current iteration.
- It does not terminate the loop.
- In a `for` loop, the iteration expression executes before the next condition check.
- In a `while` or `do-while` loop, control moves to the condition check.

---

## 9. Infinite Loops

An **infinite loop** is a loop that continues executing without reaching a terminating condition.

It can occur intentionally or accidentally.

### Example: Infinite for Loop

```c
#include <stdio.h>

int main() {

    for (;;) {
        printf("Running...\n");
    }

    return 0;
}
```

### Example: Infinite while Loop

```c
#include <stdio.h>

int main() {

    while (1) {
        printf("Running...\n");
    }

    return 0;
}
```

### Common Causes of Infinite Loops

1. Missing loop variable updation.
2. Incorrect loop condition.
3. Updating the variable in the wrong direction.
4. Using a condition that never becomes false.
5. Accidentally placing an incorrect statement inside the loop.

### Example of an Unintended Infinite Loop

```c
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
    }

    return 0;
}
```

The variable `i` is never incremented, so the condition remains true.

### Important Points

- Infinite loops may be useful in menu-driven programs and continuously running systems.
- They should have a suitable termination mechanism when required.
- Accidental infinite loops can cause programs to become unresponsive.
- Always verify loop conditions and updation logic.

---

## 10. Comparison of Loops

C provides three main loop structures, each suited to different situations.

| Feature | while | do-while | for |
|---|---|---|---|
| Control type | Entry-controlled | Exit-controlled | Entry-controlled |
| Condition check | Before execution | After execution | Before execution |
| Minimum executions | 0 | 1 | 0 |
| Initialization | Usually outside | Usually outside | Usually inside |
| Updation | Usually inside | Usually inside | Usually in loop header |
| Common use | Condition-based repetition | At least one execution | Counting-based repetition |

### When to Use Each Loop

| Loop | Suitable Situation |
|---|---|
| `while` | Repetition depends on a condition |
| `do-while` | The loop body must execute at least once |
| `for` | Number of iterations is known or count-controlled |

### break vs continue

| Feature | break | continue |
|---|---|---|
| Purpose | Terminates the loop | Skips current iteration |
| Loop execution | Stops immediately | Proceeds to next iteration |
| Remaining iterations | Not executed | Continue normally |

---

## 11. Common Mistakes

Beginners often make the following mistakes while using loops.

### 1. Forgetting to Update the Loop Variable

Incorrect:

```c
int i = 1;

while (i <= 5) {
    printf("%d\n", i);
}
```

Problem: The variable never changes, so the loop does not terminate.

### 2. Using an Incorrect Condition

Incorrect:

```c
for (int i = 1; i >= 5; i++) {
    printf("%d\n", i);
}
```

Problem: The initial condition is false, so the loop body never executes.

### 3. Adding an Extra Semicolon

Incorrect:

```c
for (int i = 1; i <= 5; i++);
{
    printf("Hello");
}
```

Problem: The semicolon creates an empty loop body. The block executes separately.

### 4. Forgetting the do-while Semicolon

Incorrect:

```c
do {
    printf("Hello");
} while (1)
```

Problem: The semicolon after the `while` condition is missing.

### 5. Incorrect Use of continue

Problem: In a `while` loop, using `continue` before updating the loop variable can cause an infinite loop.

### 6. Confusing break and continue

Problem: `break` terminates the loop, whereas `continue` skips only the current iteration.

### 7. Incorrect Loop Boundaries

Problem: Using `<` instead of `<=`, or vice versa, can produce an incorrect number of iterations.

---

## 12. Best Practices

Follow these practices when writing loops:

- Initialize loop variables properly.
- Use meaningful variable names.
- Write clear and correct loop conditions.
- Ensure loop variables are updated appropriately.
- Avoid unintended infinite loops.
- Use `for` loops for count-controlled repetition.
- Use `while` loops for condition-controlled repetition.
- Use `do-while` when at least one execution is required.
- Avoid unnecessary nested loops.
- Use `break` and `continue` only when they improve clarity.
- Keep loop bodies simple and readable.
- Test boundary conditions carefully.

---

## 13. Practice Exercises

Use the concepts learned in this module to solve the following exercises.

**Note:** These exercises are intentionally left unsolved for future practical implementation.

### Beginner Level

1. Write a program to print numbers from 1 to 10 using a `for` loop.
2. Print numbers from 10 to 1 using a `while` loop.
3. Print all even numbers between 1 and 50.
4. Print all odd numbers between 1 and 50.
5. Calculate the sum of the first N natural numbers.

### Intermediate Level

6. Calculate the factorial of a given number.
7. Print the multiplication table of a given number.
8. Count the number of digits in an integer.
9. Reverse the digits of an integer.
10. Find the sum of the digits of a number.
11. Check whether a number is a palindrome.
12. Check whether a number is prime.

### Advanced Level

13. Print a right-angled triangle star pattern.
14. Print an inverted triangle star pattern.
15. Print a square pattern using nested loops.
16. Print a multiplication table from 1 to 10 using nested loops.
17. Create a menu-driven program using a loop.
18. Demonstrate the difference between `break` and `continue`.

---

## 14. Key Takeaways

- Loops are used to execute statements repeatedly.
- C provides three main loops: `while`, `do-while` and `for`.
- The `while` loop checks its condition before execution.
- The `do-while` loop executes at least once.
- The `for` loop combines initialization, condition and updation.
- Nested loops allow one loop to execute inside another.
- `break` immediately terminates the nearest enclosing loop.
- `continue` skips the current iteration.
- Infinite loops continue until an appropriate termination mechanism is reached.
- Selecting the correct loop improves program readability and efficiency.

---


---

## 💻 Practical Programs

The following programs provide hands-on practice with the loop concepts covered in this module.

| No. | Program | Concepts Practised |
|---:|---|---|
| 1 | `01-for-loop-counting.c` | Print numbers from 1 to 10 using a for loop |
| 2 | `02-while-loop-reverse-counting.c` | Reverse counting using a while loop |
| 3 | `03-even-numbers.c` | Print even numbers from 1 to 50 |
| 4 | `04-odd-numbers.c` | Print odd numbers from 1 to 50 |
| 5 | `05-sum-natural-numbers.c` | Sum of first N natural numbers |
| 6 | `06-factorial.c` | Factorial using a loop |
| 7 | `07-multiplication-table.c` | Multiplication table of a number |
| 8 | `08-count-digits.c` | Count digits using a do-while loop |
| 9 | `09-reverse-number.c` | Reverse the digits of a number |
| 10 | `10-sum-of-digits.c` | Calculate the sum of digits |
| 11 | `11-palindrome-number.c` | Check whether a number is a palindrome |
| 12 | `12-prime-number.c` | Check whether a number is prime |
| 13 | `13-right-triangle-pattern.c` | Right-angled triangle star pattern |
| 14 | `14-inverted-triangle-pattern.c` | Inverted triangle star pattern |
| 15 | `15-square-star-pattern.c` | Square star pattern using nested loops |
| 16 | `16-multiplication-tables-nested-loops.c` | Multiplication tables from 1 to 10 |
| 17 | `17-menu-driven-loop.c` | Menu-driven program using a do-while loop |
| 18 | `18-break-continue-demo.c` | Demonstration of break and continue |

**Program Directory:** `04-Loops/programs/`

**Progress:** All 18 program source files have been created. Compilation, execution and practical verification are scheduled for the revision session.

## ✅ Module Completion Checklist

- [ ] Understand the introduction to loops.
- [ ] Identify the three types of loops.
- [ ] Understand the `while` loop.
- [ ] Understand the `do-while` loop.
- [ ] Understand the `for` loop.
- [ ] Understand nested loops.
- [ ] Understand the `break` statement.
- [ ] Understand the `continue` statement.
- [ ] Understand infinite loops.
- [ ] Compare the different loop structures.
- [ ] Review common mistakes and best practices.
- [ ] Complete the practice exercises.

---

## 🔗 Module Navigation

<p align="center">
  ⬅️ <strong>Previous Module</strong>
  <br>
  <a href="../03-Control-Statements/README.md">Module 03 — Control Statements</a>
  <br><br>
  <strong>Current Module: Module 04 — Loops</strong>
  <br><br>
  <strong>Next Module</strong>
  <br>
  <a href="../05-Arrays-and-Strings/README.md">Module 05 — Arrays and Strings ➡️</a>
</p>

---

<p align="center">
  <strong>Keep Learning. Keep Practising. Keep Building. 💻</strong>
  <br>
  <sub>One concept at a time. One program at a time.</sub>
</p>
