# 📘 Multi-File Programming in C

## 1. Why Multi-File Programming Is Needed (Course Context)

As explained in the course:

> Writing all code inside a single `.c` file is not practical  
> for large or embedded applications.

Problems with single-file programs:
- Code becomes lengthy
- Hard to read and debug
- Difficult to reuse functions
- Poor maintainability

Hence, programs are divided into **multiple source files**.

---

## 2. What Is Multi-File Programming?

Multi-file programming means:
- Splitting a program across multiple `.c` files
- Each file handles a specific functionality
- All files are combined during **linking**

Example idea:
- One file for `main()`
- One file for mathematical operations
- One file for utility functions

---

## 3. Role of `.c` Files

`.c` files:
- Contain **function definitions**
- Contain executable logic
- Are compiled independently

Example:
```text
main.c
math.c
````

Each `.c` file produces:

* One object file (`.o`)

---

## 4. Role of `.h` Files (Header Files)

As explained clearly in the lecture:

> Header files contain **function declarations (prototypes)**
> and **macro definitions**, not executable code.

`.h` files are used to:

* Share function prototypes across files
* Inform the compiler about functions defined elsewhere

Example:

```text
math.h
```

---

## 5. Basic Multi-File Structure (Course Example)

Typical structure shown in the course:

```
main.c
math.c
math.h
```

Responsibilities:

* `main.c` → program entry (`main()`)
* `math.c` → function definitions
* `math.h` → function prototypes

---

## 6. Example Flow (Conceptual)

### `math.h`

* Contains function prototypes

### `math.c`

* Contains actual function definitions

### `main.c`

* Calls functions using prototypes from header file

This separation:

* Avoids compiler errors
* Improves code organization

---

## 7. Why Header Files Are Included

When you write:

```c
#include "math.h"
```

It means:

* Compiler copies contents of `math.h`
* Makes prototypes visible to current file

Course emphasis:

> Header files are included, **source files are compiled**.

---

## 8. Common Beginner Mistake (Very Important)

❌ Including `.c` files inside other `.c` files:

```c
#include "math.c"   // WRONG
```

As stressed in the lecture:

> Never include `.c` files.

Correct approach:

* Include only header files
* Let the linker combine object files

---

## 9. Linker’s Role in Multi-File Programs

The linker:

* Combines object files
* Resolves function references
* Produces final executable / binary

Example:

* `main.c` calls `add()`
* `add()` is defined in `math.c`
* Linker connects them

If definition is missing:

* Linker error occurs

---

## 10. Multiple Definition Error (Course Warning)

If a function is:

* Defined in more than one `.c` file

Linker error occurs:

> “multiple definition of function”

Hence:

* Each function must have **one definition only**

---

## 11. Header Guards (Introduced Briefly)

The course introduces **header guards** to prevent:

* Multiple inclusion of same header file

Example:

```c
#ifndef MATH_H
#define MATH_H

// declarations

#endif
```

This avoids redefinition errors.

---

## 12. Embedded Perspective (Course Emphasis)

In embedded systems:

* Projects contain many files
* Drivers, application, utilities are separated
* Multi-file structure is mandatory

Clean separation leads to:

* Better testing
* Easier debugging
* Scalable firmware

---

## 13. Common Beginner Mistakes (As Highlighted)

* Forgetting to include header file
* Including `.c` files
* Missing function definitions
* Mismatched prototype and definition

These lead to:

* Compiler warnings
* Linker errors

---

## 14. Key Takeaways

* Large programs use multiple files
* `.c` files contain definitions
* `.h` files contain declarations
* Header files are included
* Source files are linked
* Never include `.c` files

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the instructor saying
> “Never include `.c` files, only `.h` files”,
> you’re recalling the correct lecture.
