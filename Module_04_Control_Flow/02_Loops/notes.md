# 📘 Control Flow in C – Looping Statements

## 1. What Are Loops? (Course Definition)

As explained in the course:

> Loops are used to execute a block of code **repeatedly**  
> as long as a condition is satisfied.

Without loops:
- Code repetition would be manual
- Programs would be inefficient and unreadable

---

## 2. Why Loops Are Important in Embedded C

In embedded systems:
- Tasks repeat continuously
- Sensors are read repeatedly
- Outputs are updated continuously

Hence:
> Loops are fundamental to embedded programming.

The most important loop in embedded systems is the **infinite loop**.

---

## 3. Looping Statements in C

The looping statements taught in the course are:

- `for` loop
- `while` loop
- `do–while` loop

Each loop has:
- Initialization
- Condition
- Execution
- Update

---

## 4. `for` Loop

### Syntax:
```c
for (initialization; condition; update)
{
    // loop body
}
````

Execution order:

1. Initialization (once)
2. Condition check
3. Loop body execution
4. Update
5. Repeat

---

## 5. `for` Loop Example (Course Style)

```c
int i;

for (i = 0; i < 5; i++)
{
    printf("%d\n", i);
}
```

This prints:

```
0
1
2
3
4
```

Course emphasis:

> `for` loop is preferred when number of iterations is known.

---

## 6. `while` Loop

### Syntax:

```c
while (condition)
{
    // loop body
}
```

Key point:

* Condition is checked **before** loop body execution

---

## 7. `while` Loop Example

```c
int i = 0;

while (i < 5)
{
    printf("%d\n", i);
    i++;
}
```

If condition is false initially:

* Loop body does **not** execute

---

## 8. `do–while` Loop

### Syntax:

```c
do
{
    // loop body
}
while (condition);
```

Key difference:

* Condition is checked **after** loop body execution

---

## 9. `do–while` Loop Example

```c
int i = 0;

do
{
    printf("%d\n", i);
    i++;
}
while (i < 5);
```

Course emphasis:

> `do–while` executes **at least once**, even if condition is false.

---

## 10. Infinite Loops (Very Important in Embedded)

An infinite loop executes forever.

Example:

```c
while (1)
{
    // infinite loop
}
```

As explained clearly in the course:

> Embedded programs are designed to **run forever**
> as long as power is supplied.

This is the backbone of embedded firmware.

---

## 11. `for(;;)` Infinite Loop

Another way to write infinite loop:

```c
for (;;)
{
    // infinite loop
}
```

Course note:

* Both `while(1)` and `for(;;)` behave the same
* `while(1)` is more readable

---

## 12. Loop Control Statements

The course briefly introduces:

* `break`
* `continue`

### `break`

* Terminates the loop immediately

### `continue`

* Skips remaining statements
* Moves to next iteration

---

## 13. Example Using `break`

```c
int i;

for (i = 0; i < 10; i++)
{
    if (i == 5)
        break;

    printf("%d\n", i);
}
```

Loop exits when `i == 5`.

---

## 14. Example Using `continue`

```c
int i;

for (i = 0; i < 5; i++)
{
    if (i == 2)
        continue;

    printf("%d\n", i);
}
```

Value `2` is skipped.

---

## 15. Common Beginner Mistakes (As Highlighted)

* Forgetting loop update (infinite loop by mistake)
* Using wrong condition
* Confusing `while` and `do–while`
* Using `break` unintentionally

These cause **logic errors**, not compilation errors.

---

## 16. Embedded Perspective (Course Emphasis)

In embedded systems:

* Loops drive the application
* Infinite loop is intentional
* Control logic must be predictable

Poor loop design can:

* Hang the system
* Block critical tasks

---

## 17. Key Takeaways

* Loops repeat code execution
* `for`, `while`, `do–while` are core loops
* Condition decides loop execution
* Infinite loops are essential in embedded systems
* Use `break` and `continue` carefully

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the instructor saying
> “Embedded programs never exit the while(1) loop”,
> you’re recalling the correct lecture.

