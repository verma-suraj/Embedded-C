
# 📘 C Standards in Embedded Systems

## 1. What Are C Standards?

A **C standard** defines:
- Language syntax and semantics
- Data type rules
- Library behavior
- What the compiler **must** support vs **may** support

C standards exist to ensure **portability and predictability** across:
- Compilers
- Architectures
- Vendors

In embedded systems, **standards matter more** because:
- You directly touch memory and hardware
- Undefined behavior can crash the device silently

---

## 2. Why C Needed Standardization

Early C (1970s) had:
- No official specification
- Different compiler interpretations
- Non-portable code

This caused:
- Same code behaving differently on different machines
- Serious reliability issues

Hence, formal standardization began.

---

## 3. Major C Standards (Chronological)

| Standard | Year | Common Name | Embedded Relevance |
|------|------|------------|--------------------|
| K&R C | 1978 | Pre-standard | Historical only |
| ANSI C | 1989 | C89 / C90 | Still widely used |
| ISO C | 1999 | C99 | Very important |
| ISO C | 2011 | C11 | Modern embedded |
| ISO C | 2018 | C18 | Minor fixes |

> Most embedded toolchains today support **C99 or C11**.

---

## 4. ANSI C (C89 / C90)

### Key Features:
- First official C standard
- Defined core syntax
- Established portability baseline

### Embedded Impact:
- Extremely stable
- Supported by almost all compilers
- Still used in safety-critical legacy systems

### Limitations:
- No inline variable declaration
- Weak type safety
- No modern features

Example (C89 style):
```c
int i;
for (i = 0; i < 10; i++)
{
    /* code */
}
````

---

## 5. C99 — The Embedded Workhorse

C99 introduced features that **greatly improved embedded programming**.

### Important C99 Features:

* `//` single-line comments
* Mixed declarations and code
* Fixed-width integer types (`stdint.h`)
* `inline` keyword
* Better type definitions

Example:

```c
#include <stdint.h>

uint8_t sensor_value = 0;
```

### Why `stdint.h` Matters in Embedded

C does **not guarantee type sizes**.

| Type | Size NOT guaranteed |
| ---- | ------------------- |
| int  | 16 / 32 bits        |
| long | 32 / 64 bits        |

C99 fixes this with:

```c
uint8_t   // exactly 8 bits
uint16_t  // exactly 16 bits
uint32_t  // exactly 32 bits
```

This is **critical** when working with:

* Registers
* Communication protocols
* Memory-mapped peripherals

---

## 6. C11 — Modern Embedded C

C11 refined C99 and added:

* Better multithreading support (mostly unused in bare-metal)
* Memory model improvements
* `_Static_assert`
* Optional features (important!)

Example:

```c
_Static_assert(sizeof(int) == 4, "Unexpected int size");
```

### Embedded Reality:

* Many embedded compilers support **partial C11**
* Some C11 features are **disabled or optional**
* Toolchain documentation must be checked

---

## 7. Compiler Dependency (Critical Concept)

The C standard:

* Defines **what is guaranteed**
* Does **not define implementation details**

Examples of compiler-dependent behavior:

* Size of `int`
* Endianness
* Structure padding
* Alignment
* Optimization effects

Hence:

> **Embedded C = Standard C + Compiler Manual**

Never assume behavior without checking:

* Compiler documentation
* Target MCU architecture

---

## 8. GCC and `gnu11` in Embedded

Most embedded toolchains use **GCC-based compilers**.

Common compilation modes:

```bash
-std=c99
-std=c11
-std=gnu11
```

### What is `gnu11`?

* C11 standard
* PLUS GCC extensions

GCC extensions may include:

* Inline assembly
* Attribute keywords
* Compiler-specific pragmas

⚠️ **Warning:**
GCC extensions reduce portability but are sometimes unavoidable in embedded systems.

---

## 9. Backward Compatibility Rules

* C90 code → Compiles in C99/C11
* C99/C11 code → May NOT compile in C90

Example (invalid in C90):

```c
for (int i = 0; i < 5; i++)
{
    /* code */
}
```

---

## 10. Why Standards Are Critical in Embedded Systems

Ignoring standards can cause:

* Undefined behavior
* Memory corruption
* Compiler optimization bugs
* Architecture-specific failures

In embedded systems:

> **Undefined behavior ≠ error message**
> It usually means **random failure**.

---

## 11. Best Practices for Embedded C Standards

* Always specify standard explicitly
* Prefer `stdint.h`
* Avoid compiler extensions unless necessary
* Document compiler and standard version
* Never assume type sizes

---

## 12. What This Repo Uses

This repository assumes:

* **C11 standard**
* GCC-based compiler
* Minimal compiler extensions

All code and notes are written with:

* Portability
* Predictability
* Hardware safety

as top priorities.

---

## 📚 Reputable References

1. ISO C Standard Overview
   [https://www.iso.org/standard/74528.html](https://www.iso.org/standard/74528.html)

2. GNU C Language Standards
   [https://gcc.gnu.org/onlinedocs/gcc/Standards.html](https://gcc.gnu.org/onlinedocs/gcc/Standards.html)

3. FastBit Embedded Brain Academy
   [https://www.fastbitlab.com](https://www.fastbitlab.com)

4. ARM Embedded Software Development Docs
   [https://developer.arm.com/documentation](https://developer.arm.com/documentation)

5. The C Programming Language — K&R
   [https://en.wikipedia.org/wiki/The_C_Programming_Language](https://en.wikipedia.org/wiki/The_C_Programming_Language)

---

> ⚠️ **Embedded Rule:**
> If you don’t know which C standard your compiler uses,
> you don’t fully control your firmware.

