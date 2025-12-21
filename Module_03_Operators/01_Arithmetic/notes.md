# 📘 Operators in C – Arithmetic Operators

## 1. What Are Operators? (Course Definition)

As explained in the course:

> Operators are symbols that perform operations on operands.

In C programming:
- Operators act on **data**
- They produce a **result**
- They are heavily used in expressions

Example:
```c
c = a + b;
````

Here:

* `+` → operator
* `a`, `b` → operands

---

## 2. Why Operators Are Important in Embedded C

In embedded systems:

* Operators manipulate sensor values
* Perform calculations
* Control logic flow
* Configure hardware values

Incorrect operator usage can cause:

* Wrong calculations
* Overflow
* Unexpected behavior

Hence operators must be understood clearly.

---

## 3. Arithmetic Operators in C

The arithmetic operators explained in the course are:

| Operator | Meaning             |
| -------- | ------------------- |
| `+`      | Addition            |
| `-`      | Subtraction         |
| `*`      | Multiplication      |
| `/`      | Division            |
| `%`      | Modulus (remainder) |

These operators work on **numeric data types**.

---

## 4. Addition Operator (`+`)

Used to add two operands.

Example:

```c
int a = 10;
int b = 20;
int c = a + b;
```

Result:

* `c = 30`

This is the **simplest arithmetic operation**.

---

## 5. Subtraction Operator (`-`)

Used to subtract one operand from another.

Example:

```c
int a = 50;
int b = 20;
int c = a - b;
```

Result:

* `c = 30`

---

## 6. Multiplication Operator (`*`)

Used to multiply two operands.

Example:

```c
int a = 5;
int b = 4;
int c = a * b;
```

Result:

* `c = 20`

The course highlights:

> Multiplication may consume more CPU cycles than addition or subtraction.

(This matters in embedded systems.)

---

## 7. Division Operator (`/`) (Very Important)

Division behaves **differently for integers**.

### Integer Division Example:

```c
int a = 10;
int b = 3;
int c = a / b;
```

Result:

* `c = 3` (fractional part is discarded)

This is emphasized strongly in the lecture.

---

## 8. Modulus Operator (`%`)

The modulus operator returns the **remainder**.

Example:

```c
int a = 10;
int b = 3;
int r = a % b;
```

Result:

* `r = 1`

Used for:

* Checking even/odd numbers
* Cyclic operations

---

## 9. Order of Evaluation (Basic Mention)

The course briefly mentions:

* Operators have **precedence**
* Expressions are evaluated accordingly

Example:

```c
int result = 10 + 5 * 2;
```

Multiplication happens before addition.

---

## 10. Arithmetic Operators and Data Types

The result of an operation depends on:

* Operand data types
* Signed vs unsigned

Example:

```c
unsigned char a = 250;
unsigned char b = 10;
unsigned char c = a + b;
```

Result:

* Overflow may occur

This is why **data type selection matters**.

---

## 11. Embedded Perspective (Course Emphasis)

In embedded systems:

* Arithmetic operations affect performance
* Integer math is preferred
* Floating-point operations are expensive (or unavailable)

Hence:

> Use arithmetic operators carefully and consciously.

---

## 12. Common Beginner Mistakes (As Highlighted)

* Assuming division gives decimal result
* Ignoring overflow
* Using `%` with non-integer data
* Choosing wrong data type

---

## 13. Key Takeaways (FastBit Revision Style)

* Operators perform operations on data
* Arithmetic operators are basic building blocks
* Integer division truncates result
* Modulus gives remainder
* Data types affect results

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the example
> `10 / 3 = 3`,
> you’re recalling the correct lecture.