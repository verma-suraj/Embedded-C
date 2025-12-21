# 📘 Size and Range of Integer Data Types

## 1. Why Size and Range Are Important in Embedded C

In Embedded C, **size = memory consumption**  
and **range = correctness of data**.

As emphasized in the course:
> The C standard does NOT fix the exact size of most data types.

This is extremely important because:
- Embedded systems have limited memory
- Same code may run on different MCUs
- Wrong assumptions lead to overflow or data loss

---

## 2. Meaning of Memory Size

When we say:
```c
long long int value;
````

It means:

* Compiler allocates **8 bytes (64 bits)** of memory
* Each variable occupies physical memory locations

The compiler generates instructions to:

* Reserve memory
* Access that memory

---

## 3. Why Sizes Differ Across Compilers

The course clearly explains:

The C standard specifies:

* **Minimum size**
* **Maximum size**

But **not exact size**.

### Example:

* `int` can be:

  * 16 bits (2 bytes)
  * 32 bits (4 bytes)

Depends on:

* Compiler
* Target architecture

That is why:

> You must always consult the compiler documentation.

---

## 4. Integer Data Types and Their Sizes (Course Table)

### Signed Integer Types

| Data Type     | Typical Size | Guaranteed? |
| ------------- | ------------ | ----------- |
| char          | 1 byte       | ✅ Yes       |
| short int     | 2 bytes      | ✅ Yes       |
| int           | 2 or 4 bytes | ❌ No        |
| long int      | 4 or 8 bytes | ❌ No        |
| long long int | 8 bytes      | ✅ Yes       |

---

### Unsigned Integer Types

Unsigned types have:

* Same size as signed
* Different range

Examples:

* `unsigned char`
* `unsigned short int`
* `unsigned int`

---

## 5. Data Types with Fixed Size (Important Recall Point)

As stated clearly in the lecture:

These data types have **fixed size irrespective of compiler**:

* `char` → 1 byte
* `short` → 2 bytes
* `long long` → 8 bytes

This makes them **safe choices** when size predictability is required.

---

## 6. Range of Signed Integer Types

### Example: `char` (1 byte, signed)

* Total bits = 8
* 1 bit → sign
* 7 bits → magnitude

Range:

* Minimum: **-128**
* Maximum: **+127**

Reason:

* Negative numbers use **2’s complement**
* MSB represents sign

---

## 7. Range of Unsigned Integer Types

### Example: `unsigned char` (1 byte)

* All 8 bits represent magnitude
* No sign bit

Range:

* Minimum: **0**
* Maximum: **255**

This doubles the positive range compared to signed `char`.

---

## 8. Visual Understanding (Course Logic)

### Signed 1 Byte Representation

```
7 6 5 4 3 2 1 0
S M M M M M M M
```

* `S` → sign bit
* `M` → magnitude bits

---

### Unsigned 1 Byte Representation

```
7 6 5 4 3 2 1 0
M M M M M M M M
```

All bits contribute to value.

---

## 9. Why Signed Range Is Asymmetric

Example:

* Signed 1 byte range is **-128 to +127**

Reason:

* One value is used to represent zero
* Negative numbers use 2’s complement

This is why:

> There is one extra negative value.

This exact explanation is highlighted in the course.

---

## 10. Range of `short int`

### Size:

* 2 bytes = 16 bits

### Signed `short int`:

* Range: **-32,768 to +32,767**

### Unsigned `short int`:

* Range: **0 to 65,535**

---

## 11. `sizeof` Operator (Revisited)

The `sizeof` operator is used to:

* Determine size of data types
* Verify compiler behavior

Example:

```c
sizeof(char);
sizeof(short);
sizeof(int);
```

Key reminder from the course:

> Never assume size — always verify using `sizeof`.

---

## 12. Embedded System Relevance

In embedded systems:

* Every byte of RAM matters
* Choosing a larger data type than needed:

  * Wastes memory
  * Increases execution time

Example:

* Using `int` instead of `char` unnecessarily

---

## 13. Course Rule for Size & Range

The course reinforces this rule:

> Choose the smallest data type that can safely hold the value.

This improves:

* Memory efficiency
* System reliability

---

## 14. Key Takeaways
* C standard does not fix all sizes
* Some data types are compiler-dependent
* Signed and unsigned have different ranges
* `sizeof` helps verify assumptions
* Correct data type choice is critical in embedded systems

---

## 📚 Course References

1. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

2. Embedded C Course Repository
   [https://github.com/niekiran/Embedded-C](https://github.com/niekiran/Embedded-C)

---

> 🔁 **Recall Trigger:**
> If you remember the slide saying
> “C standard talks about minimum and maximum values, not exact size”,
> you are recalling the correct lecture.
