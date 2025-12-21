# 📘 Functions in C

## 1. What Is a Function? (Course Definition)

As explained in the course:

> A function is a **block of code** that performs a specific task.

Functions help in:
- Dividing a large program into smaller parts
- Improving readability
- Reusing code
- Managing complexity

In embedded systems, functions are used to:
- Separate hardware logic
- Organize application flow
- Improve maintainability

---

## 2. Why Functions Are Important in Embedded C

The course emphasizes:

Without functions:
- Code becomes lengthy
- Debugging becomes difficult
- Reusability is lost

With functions:
- Each task has a clear purpose
- Code becomes modular
- Firmware becomes scalable

---

## 3. Structure of a Function

A function consists of:
- Return type
- Function name
- Parameters (optional)
- Function body

### General Syntax:
```c
return_type function_name(parameters)
{
    // function body
}
````

---

## 4. Example of a Simple Function (Course Style)

```c
void myFunction(void)
{
    printf("Hello from function\n");
}
```

Explanation:

* `void` → no return value
* `void` inside parentheses → no parameters
* Function executes when called

---

## 5. Function Call

A function executes **only when it is called**.

Example:

```c
int main()
{
    myFunction();
    return 0;
}
```

Course emphasis:

> Defining a function does not execute it.

---

## 6. Function Return Type

Functions can:

* Return a value
* Or return nothing

### Returning a value:

```c
int add(int a, int b)
{
    return (a + b);
}
```

Returned value is sent back to the caller.

---

## 7. `void` Return Type

When a function:

* Does not return any value
* `void` is used as return type

Example:

```c
void delay(void)
{
    // delay logic
}
```

This is very common in embedded systems.

---

## 8. Function Parameters

Parameters allow data to be passed to functions.

Example:

```c
int square(int x)
{
    return (x * x);
}
```

Course emphasis:

> Parameters make functions flexible and reusable.

---

## 9. Function Prototype (Introduction)

The course introduces the idea that:

> The compiler must know about a function **before it is called**.

This is done using a **function prototype**.

Example:

```c
int add(int a, int b);
```

Detailed discussion on prototypes comes next.

---

## 10. Order of Function Definition

Two valid approaches shown in the course:

### 1️⃣ Define function before `main()`

```c
void test(void)
{
}

int main()
{
    test();
    return 0;
}
```

### 2️⃣ Use prototype + define later

```c
void test(void);

int main()
{
    test();
    return 0;
}

void test(void)
{
}
```

---

## 11. Embedded Perspective (Course Emphasis)

In embedded systems:

* Functions often map to:

  * Tasks
  * Features
  * Hardware operations
* Clean function design improves:

  * Debugging
  * Testing
  * Code reuse

---

## 12. Common Beginner Mistakes (As Highlighted)

* Forgetting to call a function
* Mismatching return type
* Passing wrong parameters
* Writing very long functions

These lead to:

* Compilation errors
* Logic bugs

---

## 13. Key Takeaways

* Functions divide program into logical blocks
* A function runs only when called
* Return type defines output
* Parameters pass data
* `void` is common in embedded functions

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the instructor saying
> “Functions improve readability and reusability”,
> you’re recalling the correct lecture.


