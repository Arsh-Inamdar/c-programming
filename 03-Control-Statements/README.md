
# 📘 C Programming — Control Statements

<p align="center">
  <strong>Module 03 | C Programming Learning Series</strong>
  <br>
  Understanding Decision-Making, Program Flow and Jump Statements
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language C">
  <img src="https://img.shields.io/badge/Level-Beginner-green.svg" alt="Beginner">
  <img src="https://img.shields.io/badge/Module-03-orange.svg" alt="Module 03">
</p>

---

## 📑 Table of Contents

1. [Introduction to Control Statements](#1-introduction-to-control-statements)
2. [Types of Control Statements](#2-types-of-control-statements)
3. [The if Statement](#3-the-if-statement)
4. [The if-else Statement](#4-the-if-else-statement)
5. [The Nested if Statement](#5-the-nested-if-statement)
6. [The else-if Ladder](#6-the-else-if-ladder)
7. [The switch Statement](#7-the-switch-statement)
8. [The break Statement](#8-the-break-statement)
9. [The continue Statement](#9-the-continue-statement)
10. [The goto Statement](#10-the-goto-statement)
11. [The return Statement](#11-the-return-statement)
12. [The Conditional Operator](#12-the-conditional-operator)
13. [Comparison of Control Statements](#13-comparison-of-control-statements)
14. [Common Mistakes](#14-common-mistakes)
15. [Best Practices](#15-best-practices)
16. [Practice Exercises](#16-practice-exercises)
17. [Key Takeaways](#17-key-takeaways)

---

## 🎯 Learning Objectives

After completing this module, you will be able to:

- Understand the purpose of control statements in C.
- Identify different types of control statements.
- Use `if`, `if-else`, nested `if` and `else-if` statements.
- Understand multi-way selection using `switch`.
- Understand the functionality of `break` and `continue`.
- Understand the use of `goto` and `return`.
- Apply the conditional operator (`?:`).
- Recognize common errors and follow good programming practices.

---

## 1. Introduction to Control Statements

In C programming, statements normally execute sequentially, one after another, from top to bottom.

Control statements allow programmers to change this normal execution flow depending on conditions or specific instructions.

They are used to make decisions, repeat operations and transfer program execution.

**Example:**

A program can check whether a student's marks are greater than or equal to 40.

- If the condition is true, display "Pass".
- Otherwise, display "Fail".

This is an example of decision-making.

### Why Are Control Statements Important?

- They make programs dynamic and interactive.
- They allow decision-making based on conditions.
- They control the execution flow.
- They help implement different program requirements.
- They make complex logic possible.

---

## 2. Types of Control Statements

Control flow in C can be understood through the following categories.

### 2.1 Decision-Making Statements

These statements execute different blocks of code depending on whether a condition is satisfied.

| Statement | Purpose |
|---|---|
| `if` | Executes a block when a condition is true. |
| `if-else` | Selects between two alternatives. |
| Nested `if` | Places one if statement inside another. |
| `else-if` ladder | Checks multiple conditions. |
| `switch` | Selects a case based on an expression's value. |

### 2.2 Looping Statements

Looping statements repeatedly execute a block of code while a specified condition or iteration rule allows it.

| Statement | Purpose |
|---|---|
| `for` | Repeats code using initialization, condition and update. |
| `while` | Repeats code while a condition is true. |
| `do-while` | Executes the body at least once before checking the condition. |

**Note:** Looping statements are covered in detail in Module 04.

### 2.3 Jump Statements

Jump statements transfer program execution from its normal sequence.

| Statement | Purpose |
|---|---|
| `break` | Terminates a loop or switch statement. |
| `continue` | Skips the remaining statements in the current loop iteration. |
| `goto` | Transfers execution to a labeled statement. |
| `return` | Terminates a function and optionally returns a value. |

---

## 3. The if Statement

The `if` statement is a basic decision-making statement in C.

It executes a block of code only when the specified condition evaluates to true.

### Syntax

```c
if (condition)
{
    // Statements
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int age = 20;

    if (age >= 18)
    {
        printf("Eligible to vote");
    }

    return 0;
}
```

### Output

```text
Eligible to vote
```

### Explanation

1. The variable `age` stores the value 20.
2. The condition `age >= 18` is evaluated.
3. Since the condition is true, the block executes.
4. The message is displayed.

**Important Notes**

- The condition is evaluated before executing the block.
- A non-zero expression is treated as true.
- Zero is treated as false.
- Curly braces are recommended even when the block contains one statement.

---

## 4. The if-else Statement

The `if-else` statement provides two alternative execution paths.

- The `if` block executes when the condition is true.
- The `else` block executes when the condition is false.

### Syntax

```c
if (condition)
{
    // Statements if true
}
else
{
    // Statements if false
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int number = 7;

    if (number % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}
```

### Output

```text
Odd number
```

### Explanation

The modulo operator (`%`) returns the remainder after division.

Since `7 % 2` produces 1, the condition is false and the `else` block executes.

**Important Note:** An `if` statement can have one optional `else` block.

---

## 5. The Nested if Statement

A nested `if` statement means placing one `if` statement inside another `if` or `else` block.

It is useful when a decision depends on another decision.

### Syntax

```c
if (condition1)
{
    if (condition2)
    {
        // Statements
    }
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int age = 20;
    int hasID = 1;

    if (age >= 18)
    {
        if (hasID == 1)
        {
            printf("Entry allowed");
        }
    }

    return 0;
}
```

### Output

```text
Entry allowed
```

### Explanation

1. The outer condition checks whether age is at least 18.
2. Since it is true, the inner condition is evaluated.
3. The inner condition checks whether the person has an ID.
4. Both conditions are true, so the message is displayed.

**Important Notes**

- Nested conditions can be used for multiple levels of decision-making.
- Excessive nesting can make programs difficult to understand.
- Proper indentation is important.

---

## 6. The else-if Ladder

The `else-if` ladder is used when a program needs to evaluate multiple conditions.

Conditions are checked from top to bottom. The first true condition's block executes, and the remaining ladder is skipped.

### Syntax

```c
if (condition1)
{
    // Statements
}
else if (condition2)
{
    // Statements
}
else if (condition3)
{
    // Statements
}
else
{
    // Default statements
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int marks = 85;

    if (marks >= 90)
    {
        printf("Grade A");
    }
    else if (marks >= 75)
    {
        printf("Grade B");
    }
    else if (marks >= 50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
```

### Output

```text
Grade B
```

### Explanation

- First condition: `marks >= 90` is false.
- Second condition: `marks >= 75` is true.
- Grade B is displayed.
- Remaining conditions are skipped.

**Important Notes**

- Conditions are evaluated in order.
- The `else` block is optional.
- Only the first matching branch executes.
- The order of conditions matters.

---

## 7. The switch Statement

The `switch` statement is a multi-way decision-making statement.

It selects one block of code based on the value of an expression.

It is commonly used when a variable or expression is compared against several constant values.

### Syntax

```c
switch (expression)
{
    case constant1:
        // Statements
        break;

    case constant2:
        // Statements
        break;

    default:
        // Default statements
}
```

### Example

```c
#include <stdio.h>

int main()
{
    int day = 3;

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        default:
            printf("Invalid day");
    }

    return 0;
}
```

### Output

```text
Wednesday
```

### Explanation

1. The value of `day` is 3.
2. The switch expression is evaluated.
3. The matching `case 3` is selected.
4. The message is displayed.
5. `break` terminates the switch statement.

### The default Case

The `default` case executes when none of the case values match the switch expression.

It is optional but useful for handling unexpected values.

### Important Rules of switch

- The controlling expression must have an integer type or enumeration type.
- Each case label must be an integer constant expression.
- Duplicate case values are not allowed.
- The default case is optional.
- The break statement prevents fall-through.
- Strings and floating-point values cannot be used directly as switch case values in standard C.

### Fall-Through in switch

If `break` is omitted, execution continues into the following case labels until a break or the end of the switch is reached.

This behavior is called fall-through.

---

## 8. The break Statement

The `break` statement immediately terminates the nearest enclosing loop or switch statement.

Program execution continues with the statement following that loop or switch.

### Syntax

```c
break;
```

### Example

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}
```

### Output

```text
1
2
```

### Explanation

When `i` becomes 3, the condition is true.

The `break` statement terminates the loop immediately.

**Important Notes**

- `break` is used with loops and switch statements.
- It terminates only the nearest enclosing loop or switch.
- It does not terminate the entire program.

---

## 9. The continue Statement

The `continue` statement skips the remaining statements in the current iteration of a loop.

Execution then proceeds to the next iteration according to that loop's rules.

### Syntax

```c
continue;
```

### Example

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
```

### Output

```text
1
2
4
5
```

### Explanation

When `i` becomes 3, the `continue` statement skips the `printf()` statement for that iteration.

The loop continues with the next iteration.

**Important Notes**

- `continue` is used inside loops.
- It skips the current iteration, not the entire loop.
- In a `for` loop, the update expression is performed before the next condition check.
- In a `while` loop, control returns to the condition check.

---

## 10. The goto Statement

The `goto` statement transfers program execution directly to a labeled statement within the same function.

### Syntax

```c
goto label;

// Other statements

label:
    // Statements
```

### Example

```c
#include <stdio.h>

int main()
{
    printf("Start\n");

    goto message;

    printf("This statement is skipped\n");

    message:
        printf("Control transferred");

    return 0;
}
```

### Output

```text
Start
Control transferred
```

### Explanation

1. The program displays `Start`.
2. The `goto` statement transfers execution to the label `message`.
3. The statement between `goto` and the label is skipped.
4. The message at the label is displayed.

**Important Notes**

- A label is followed by a colon (`:`).
- A goto statement must refer to a label in the same function.
- Excessive use can make program flow difficult to follow.
- Structured alternatives are generally preferred.

---

## 11. The return Statement

The `return` statement terminates the execution of the current function.

It can also send a value back to the calling function.

### Syntax

```c
return expression;
```

For a function that does not return a value:

```c
return;
```

### Example

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}
```

### Output

```text
Sum = 30
```

### Explanation

1. The `add()` function receives two integer arguments.
2. It calculates their sum.
3. `return a + b` sends the result to the calling function.
4. The result is stored in `result`.
5. The `main()` function returns 0 to indicate successful termination.

**Important Notes**

- The returned value must be compatible with the function's return type.
- A `void` function does not return a value.
- `return` terminates the current function, not merely a loop.

---

## 12. The Conditional Operator

The conditional operator (`?:`) is also called the ternary operator.

It is a shorthand expression for selecting one of two values based on a condition.

It is called a ternary operator because it uses three operands.

### Syntax

```c
condition ? expression1 : expression2;
```

- If the condition is true, `expression1` is selected.
- If the condition is false, `expression2` is selected.

### Example

```c
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int greater = (a > b) ? a : b;

    printf("Greater number = %d", greater);

    return 0;
}
```

### Output

```text
Greater number = 20
```

### Explanation

The condition `a > b` is false.

Therefore, the expression after the colon (`b`) is selected and assigned to `greater`.

### Conditional Operator vs if-else

| Conditional Operator | if-else |
|---|---|
| Uses `?:` | Uses `if` and `else` |
| Produces an expression value | Controls statement execution |
| Useful for simple choices | Better for complex decisions |
| Compact syntax | More flexible structure |

---

## 13. Comparison of Control Statements

| Statement | Main Purpose | Category |
|---|---|---|
| `if` | Checks one condition | Decision-making |
| `if-else` | Selects between two alternatives | Decision-making |
| Nested `if` | Checks dependent conditions | Decision-making |
| `else-if` | Checks multiple conditions | Decision-making |
| `switch` | Selects from multiple constant cases | Decision-making |
| `break` | Terminates nearest loop or switch | Jump |
| `continue` | Skips current loop iteration | Jump |
| `goto` | Transfers execution to a label | Jump |
| `return` | Terminates the current function | Jump |
| `?:` | Selects one of two expression values | Conditional operator |

---

## 14. Common Mistakes

### 1. Using Assignment Instead of Comparison

Incorrect:

```c
if (a = 10)
```

Correct:

```c
if (a == 10)
```

**Explanation:** `=` assigns a value, while `==` compares two values.

### 2. Forgetting break in switch

Without `break`, execution may continue into subsequent cases.

### 3. Incorrect Semicolon After if

Incorrect:

```c
if (age >= 18);
{
    printf("Eligible");
}
```

Correct:

```c
if (age >= 18)
{
    printf("Eligible");
}
```

### 4. Incorrect Condition Order

In an else-if ladder, more specific or higher-range conditions should be considered before overlapping lower-range conditions.

### 5. Using continue Outside a Loop

The `continue` statement is valid only within an iteration statement.

### 6. Unnecessary Use of goto

Excessive jumps make programs difficult to read, debug and maintain.

### 7. Forgetting Braces

Missing or incorrectly placed braces can change which statements belong to a conditional block.

---

## 15. Best Practices

- Use meaningful and readable conditions.
- Maintain proper indentation.
- Prefer braces around conditional blocks.
- Use `switch` when selecting among suitable constant values.
- Avoid excessive nested conditions.
- Always check the placement of `break`.
- Use `continue` only when it improves clarity.
- Avoid unnecessary use of `goto`.
- Use the conditional operator for simple expressions.
- Keep decision-making logic easy to understand and maintain.

---

## 16. Practice Exercises

These exercises are provided for independent revision and future practical sessions.

1. Write a program to check whether a number is positive, negative or zero.
2. Write a program to check whether a number is even or odd.
3. Write a program to find the greater of two numbers.
4. Write a program to find the greatest of three numbers using nested if.
5. Write a program to calculate grades using an else-if ladder.
6. Write a menu-driven calculator using switch.
7. Write a program demonstrating the use of break.
8. Write a program demonstrating the use of continue.
9. Write a program demonstrating the use of goto.
10. Write a program to find the greater of two numbers using the conditional operator.

---

## 17. Key Takeaways

- Control statements determine the execution flow of a C program.
- Decision-making statements allow programs to choose between alternatives.
- The `if` statement executes code when a condition is true.
- The `if-else` statement provides two alternative paths.
- Nested if statements allow dependent decisions.
- The else-if ladder handles multiple conditions.
- The switch statement provides multi-way selection.
- The break statement terminates the nearest loop or switch.
- The continue statement skips the current loop iteration.
- The goto statement transfers execution to a label.
- The return statement terminates a function.
- The conditional operator provides a compact expression-based choice.

---

## ✅ Module Completion Checklist

- [ ] Understand control statements and their purpose.
- [ ] Understand the different categories of control flow.
- [ ] Understand if and if-else statements.
- [ ] Understand nested if and else-if ladder.
- [ ] Understand switch and fall-through.
- [ ] Understand break and continue.
- [ ] Understand goto and return.
- [ ] Understand the conditional operator.
- [ ] Review common mistakes and best practices.
- [ ] Complete revision and practice exercises.

---

## 🔗 Module Navigation

<p align="center">
  ⬅️ <strong>Previous Module</strong>
  <br>
  <a href="../02-Operators/README.md">📘 Module 02 — C Programming Operators</a>
</p>

<p align="center">
  🏠 <a href="../README.md">C Programming — Main Repository</a>
</p>

<p align="center">
  <strong>Next Module</strong> ➡️
  <br>
  <a href="../04-Loops/README.md">🔄 Module 04 — Loops</a>
</p>

---

<p align="center">
  <strong>🎓 End of Module 03 — C Programming Control Statements</strong>
</p>

<p align="center">
  Learn • Practice • Implement • Improve
</p>

---
