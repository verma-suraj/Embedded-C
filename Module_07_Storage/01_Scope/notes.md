# 📘 Variable Scope in C

## 1. What Is Scope?

As explained in the course:

> Scope defines the **visibility** of a variable  
> i.e., where a variable can be accessed in a program.

Scope answers the question:
- **Where can I use this variable?**

---

## 2. Why Scope Is Important in Embedded C

In embedded systems:
- Wrong scope → unintended access
- Can cause data corruption
- Can introduce hard-to-find bugs

Hence:
> Scope must be controlled deliberately.

---

## 3. Types of Scope in C

The course discusses two main scopes:

1️⃣ **Local Scope**  
2️⃣ **Global Scope**

---

## 4. Local Variables (Local Scope)

A local variable:
- Is declared **inside a function or block**
- Is accessible **only within that block**

Example:
```c
void test(void)
{
    int a = 10;   // local variable
}
````

Key points:

* `a` exists only inside `test()`
* Cannot be accessed outside the function

---

## 5. Lifetime of Local Variables

As explained in the lecture:

* Local variables are created when function is entered
* Destroyed when function exits

They do **not retain values** between function calls.

---

## 6. Global Variables (Global Scope)

A global variable:

* Is declared **outside all functions**
* Is accessible to **all functions** in the file

Example:

```c
int g_data = 10;

void test(void)
{
    g_data = 20;
}
```

---

## 7. Scope of Global Variables

Global variables:

* Are visible throughout the file
* Can be accessed by any function after declaration

But the course warns:

> Excessive use of global variables is dangerous.

---

## 8. Block Scope

Variables declared inside `{}` have block scope.

Example:

```c
if (1)
{
    int x = 5;
}
```

* `x` is accessible only inside the `if` block

---

## 9. Name Conflict & Scope Resolution

The course explains:

* Local variables override global variables with same name

Example:

```c
int a = 10;

void test(void)
{
    int a = 20;   // local overrides global
}
```

Inside `test()`:

* `a` refers to local variable

---

## 10. Embedded Perspective

In embedded systems:

* Prefer local variables
* Minimize global variables
* Use global variables only when necessary

Reason:

* Better control
* Less side effects

---

## 11. Common Beginner Mistakes

* Using global variables everywhere
* Assuming local variables retain value
* Accessing variables outside scope
* Name conflicts

---

## 12. Key Takeaways

* Scope defines variable visibility
* Local variables have limited access
* Global variables have wider access
* Block scope limits variable lifetime
* Proper scope management prevents bugs

---

## 📚 Course References

FastBit Embedded Brain Academy
[https://www.fastbitlab.com](https://www.fastbitlab.com)

---

> 🔁 **Recall Trigger:**
> If you remember
> “Local variables die when function exits”,
> you’re recalling the correct lecture.
