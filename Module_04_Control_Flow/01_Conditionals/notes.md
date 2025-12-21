# 📘 Control Flow in C – Conditional Statements

## 1. What Is Control Flow? (Course Definition)

As explained in the course:

> Control flow statements decide **which part of the program executes**  
> based on conditions.

By default, a C program executes:
- Statement by statement
- Top to bottom

Control flow statements allow us to:
- Change this normal flow
- Make decisions

---

## 2. Why Control Flow Is Important in Embedded C

In embedded systems:
- Decisions are made based on sensor values
- Conditions control outputs (LEDs, motors, flags)
- Firmware behavior depends on logic

Without control flow:
- Programs would be linear and useless

---

## 3. Conditional Statements in C

The conditional statements taught in the course are:

- `if`
- `if–else`
- `else if` ladder
- `switch`

All of them depend on **conditions**.

---

## 4. `if` Statement

### Syntax:
```c
if (condition)
{
    // statements
}
````

* If condition is **true (non-zero)** → block executes
* If condition is **false (0)** → block is skipped

Example:

```c
int a = 10;

if (a > 5)
{
    printf("a is greater than 5\n");
}
```

---

## 5. Truth Values in C (Recall Point)

As emphasized in the lecture:

* `0` → false
* Any non-zero value → true

Example:

```c
if (10)
{
    // this block executes
}
```

---

## 6. `if–else` Statement

Used when **two paths** exist.

### Syntax:

```c
if (condition)
{
    // true block
}
else
{
    // false block
}
```

Example:

```c
int marks = 40;

if (marks >= 35)
{
    printf("Pass\n");
}
else
{
    printf("Fail\n");
}
```

---

## 7. `else if` Ladder

Used when **multiple conditions** must be checked.

### Syntax:

```c
if (condition1)
{
}
else if (condition2)
{
}
else
{
}
```

Example:

```c
int marks = 75;

if (marks >= 85)
{
    printf("Distinction\n");
}
else if (marks >= 60)
{
    printf("First Class\n");
}
else if (marks >= 35)
{
    printf("Pass\n");
}
else
{
    printf("Fail\n");
}
```

Course emphasis:

> Conditions are checked **top to bottom**.

---

## 8. Nested `if` Statements

An `if` inside another `if` block.

Example:

```c
int age = 20;
int hasID = 1;

if (age >= 18)
{
    if (hasID)
    {
        printf("Entry allowed\n");
    }
}
```

The course explains:

* Nested `if` increases complexity
* Use carefully

---

## 9. `switch` Statement

Used when:

* One variable
* Compared against **multiple constant values**

### Syntax:

```c
switch (expression)
{
    case value1:
        break;
    case value2:
        break;
    default:
        break;
}
```

---

## 10. `switch` Example (Course Style)

```c
int choice = 2;

switch (choice)
{
    case 1:
        printf("Option 1 selected\n");
        break;

    case 2:
        printf("Option 2 selected\n");
        break;

    default:
        printf("Invalid option\n");
        break;
}
```

---

## 11. Importance of `break` in `switch`

As highlighted in the lecture:

> Without `break`, execution falls through to the next case.

Example (fall-through behavior):

```c
case 1:
    printf("One\n");
case 2:
    printf("Two\n");
```

Both cases execute if `break` is missing.

---

## 12. `if–else` vs `switch` (Course Comparison)

| `if–else`           | `switch`                |
| ------------------- | ----------------------- |
| Works with ranges   | Works with exact values |
| Supports conditions | Supports constants only |
| Flexible            | Cleaner for menus       |

Choose based on **problem type**.

---

## 13. Embedded Perspective (Course Emphasis)

In embedded systems:

* Control flow decides system behavior
* Used in:

  * Menu handling
  * Mode selection
  * Error handling

Wrong condition logic can:

* Lock the system
* Cause incorrect outputs

---

## 14. Common Beginner Mistakes (As Highlighted)

* Missing `break` in `switch`
* Using assignment `=` instead of comparison `==`
* Overusing nested `if`
* Writing unclear conditions

These cause **logic bugs**, not syntax errors.

---

## 15. Key Takeaways

* Control flow changes execution order
* `if`, `if–else`, `else if`, `switch` are core
* Conditions evaluate to true or false
* `switch` needs `break`
* Choose the right construct for clarity

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)
