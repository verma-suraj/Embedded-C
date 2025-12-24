# 📘 Static Variables in C

## 1. Why `static` Is Needed

The course asks an important question:

> What if we want a variable to **retain its value**  
> between function calls?

This is where `static` comes in.

---

## 2. What Is a Static Variable?

As defined in the course:

> A static variable retains its value  
> even after the function exits.

---

## 3. Static Local Variables

Example:
```c
void counter(void)
{
    static int count = 0;
    count++;
}
````

Key behavior:

* `count` is initialized only once
* Value is preserved between calls

---

## 4. Difference: Local vs Static Local

| Local Variable     | Static Variable        |
| ------------------ | ---------------------- |
| Created every call | Created once           |
| Destroyed on exit  | Retains value          |
| Stored on stack    | Stored in data segment |

This table is emphasized in the lecture.

---

## 5. Lifetime of Static Variables

As explained:

* Lifetime = entire program execution
* Scope = limited (function/block)

---

## 6. Static Global Variables

Example:

```c
static int g_data = 10;
```

Effect:

* Variable is visible **only within that file**
* Cannot be accessed from other files

---

## 7. Why Static Globals Are Useful

The course explains:

> `static` helps in **data hiding**.

Benefits:

* Prevents accidental access
* Improves modularity
* Safer multi-file programs

---

## 8. Static and Embedded Systems

In embedded systems:

* Static variables are heavily used
* Useful for:

  * Counters
  * State retention
  * Flags

---

## 9. Common Beginner Mistakes

* Expecting static to reset
* Confusing scope with lifetime
* Using static everywhere unnecessarily

---

## 10. Key Takeaways

* `static` preserves value
* Static local → limited scope, long lifetime
* Static global → file-level visibility
* Useful for state retention
* Improves data safety

---

## 📚 Course References

FastBit Embedded Brain Academy
[https://www.fastbitlab.com](https://www.fastbitlab.com)

---

> 🔁 **Recall Trigger:**
> If you remember
> “static variable is initialized only once”,
> you’re recalling the correct lecture.