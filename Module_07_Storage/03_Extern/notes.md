
# 📘 `extern` Keyword in C

## 1. Why `extern` Is Needed

In multi-file programs:

> How does one file access a variable  
> defined in another file?

The answer is `extern`.

---

## 2. What Is `extern`?

As defined in the course:

> `extern` tells the compiler  
> that a variable is **defined elsewhere**.

---

## 3. Example Scenario

### File 1:
```c
int g_data = 10;
````

### File 2:

```c
extern int g_data;
```

Here:

* Memory is allocated only once
* Other files just reference it

---

## 4. `extern` Is a Declaration, Not Definition

Important rule from the lecture:

> `extern` does NOT allocate memory.

It only:

* Declares existence
* Links to actual definition

---

## 5. `extern` with Functions

Functions are:

* `extern` by default

Example:

```c
extern void test(void);
```

Usually written via header files.

---

## 6. `extern` vs Global Variables

| Global Variable  | `extern`              |
| ---------------- | --------------------- |
| Allocates memory | No memory allocation  |
| One definition   | Multiple declarations |

---

## 7. `extern` and Header Files

Best practice (course emphasis):

* Declare `extern` variables in `.h`
* Define them in one `.c` file only

This avoids:

* Multiple definition errors

---

## 8. Embedded Perspective

In embedded systems:

* `extern` is used to share:

  * Configuration variables
  * Status flags
  * Global buffers

But must be used carefully.

---

## 9. Common Beginner Mistakes

* Defining variable in header
* Multiple definitions
* Forgetting `extern`
* Assuming `extern` allocates memory

---

## 10. Key Takeaways

* `extern` references external variables
* Does not allocate memory
* Used in multi-file programs
* One definition, many declarations
* Critical for modular embedded code

---

## 📚 Course References

FastBit Embedded Brain Academy
[https://www.fastbitlab.com](https://www.fastbitlab.com)

---

> 🔁 **Recall Trigger:**
> If you remember
> “extern only tells the compiler, not allocates memory”,
> you’re recalling the correct lecture.
