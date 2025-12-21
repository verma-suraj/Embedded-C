# 📘 Function Prototypes in C

## 1. Why Function Prototypes Are Needed (Course Context)

As explained clearly in the course:

> The compiler processes a C program **line by line from top to bottom**.

If the compiler encounters a function call:
- And it has no prior knowledge of the function
- It assumes incorrect information
- This leads to warnings or errors

Function prototypes solve this problem.

---

## 2. What Is a Function Prototype?

A **function prototype**:
- Declares a function to the compiler
- Specifies:
  - Return type
  - Function name
  - Parameter list
- Does **not** contain function body

Example:
```c
int add(int a, int b);
````

This tells the compiler:

* A function named `add`
* Returns `int`
* Takes two `int` parameters

---

## 3. Problem Without Function Prototype (Course Example)

Example code **without prototype**:

```c
#include <stdio.h>

int main()
{
    int result;

    result = add(10, 20);
    printf("Result = %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return (a + b);
}
```

Course explanation:

* Compiler sees `add()` before its definition
* Leads to implicit declaration (older C)
* Modern compilers throw warnings/errors

---

## 4. Solution Using Function Prototype

Corrected version:

```c
#include <stdio.h>

int add(int a, int b);   // function prototype

int main()
{
    int result;

    result = add(10, 20);
    printf("Result = %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return (a + b);
}
```

Now:

* Compiler knows about `add()` beforehand
* No warnings
* Correct compilation

---

## 5. What Information Prototype Provides

The course emphasizes that a prototype provides:

* Function name
* Return type
* Number of parameters
* Data types of parameters

The compiler uses this to:

* Validate function calls
* Catch mismatched arguments

---

## 6. Prototype vs Function Definition

| Prototype         | Definition          |
| ----------------- | ------------------- |
| No body           | Has body            |
| Ends with `;`     | Has `{}`            |
| Declares function | Implements function |

Example:

```c
int add(int, int);   // prototype
int add(int a, int b) { return a + b; } // definition
```

---

## 7. Order of Writing Code (Course Emphasis)

Two valid ways shown:

### Method 1: Definition Before `main()`

* Prototype not required

### Method 2: Prototype + Definition After `main()`

* Prototype required

In embedded systems:

> Prototype + definition is preferred for clarity.

---

## 8. Function Prototypes and Embedded Systems

In embedded projects:

* Code is split across multiple files
* Functions are called across files
* Prototypes become mandatory

The course hints:

> Header files are used to store prototypes.

(Detailed discussion comes in multi-file programming.)

---

## 9. Common Beginner Mistakes (As Highlighted)

* Forgetting prototype
* Mismatch between prototype and definition
* Wrong return type
* Wrong parameter order

These cause:

* Compilation warnings
* Runtime issues

---

## 10. Key Takeaways

* Compiler reads code top-down
* Prototype informs compiler about function
* Prototype prevents implicit declaration
* Required when definition is after usage
* Essential for multi-file programs

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the compiler warning
> “implicit declaration of function”,
> you’re recalling the correct lecture.
