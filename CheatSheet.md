# Embedded C Quick Cheatsheet

> Use this when coding embedded C and you get stuck.
> Not for learning. Only for recall.

---

## 1. Integer Data Types (Embedded View)

| Data Type | Size (Bytes) | Range |
|----------|-------------|------|
| char | 1 | -128 to 127 |
| unsigned char | 1 | 0 to 255 |
| short | 2 | -32,768 to 32,767 |
| unsigned short | 2 | 0 to 65,535 |
| int | 2 or 4 | Compiler dependent |
| unsigned int | 2 or 4 | Compiler dependent |
| long | 4 or 8 | Compiler dependent |
| long long | 8 | Fixed |

**Embedded Rule:**  
> Avoid `int` & `long` in drivers

---

## 2. Fixed Width Types (`stdint.h`) — MUST USE

| Type | Size | Use |
|----|----|----|
| uint8_t | 1 | Registers, sensors |
| int8_t | 1 | Signed data |
| uint16_t | 2 | ADC, timers |
| uint32_t | 4 | Addresses |
| uint64_t | 8 | Large counters |

**Memory Hook:**  
> Hardware = fixed width only

---

## 3. Format Specifiers (Decimal / Hex / Octal)

### Signed / Unsigned

| Data Type | Decimal | Hex | Octal |
|---------|--------|-----|-------|
| int | %d | %x | %o |
| unsigned int | %u | %x | %o |
| long | %ld | %lx | %lo |
| unsigned long | %lu | %lx | %lo |
| long long | %lld | %llx | %llo |
| unsigned long long | %llu | %llx | %llo |

---

## 4. Compiler-Specific 64-bit Specifiers

| Specifier | Meaning |
|---------|--------|
| %I64d | signed 64-bit |
| %I64u | unsigned 64-bit |
| %I64x | hex 64-bit |

**Note:**  
> Used mainly in Windows / specific toolchains

---

## 5. Character & ASCII

| Type | Specifier |
|----|----|
| char | %c |
| ASCII value | %d |

**Hook:**  
> `'A' = 65`

---

## 6. Variable Lifetime & Scope

| Type | Scope | Lifetime |
|----|------|--------|
| Local | Function | Till return |
| Global | Program | Full |
| static local | Function | Full |
| static global | File | Full |

**Mnemonic:**  
> Local dies, static lives

---

## 7. Storage Classes (Embedded Critical)

### `static`
| Use | Effect |
|----|------|
| Function | Retains value |
| Global | File-private |

### `extern`
| Use |
|----|
| Access global across files |

**Rule:**  
> Define once, extern elsewhere

---

## 8. Pointer Fundamentals

| Fact | Value |
|----|-----|
| Pointer size | 8 bytes (64-bit host) |
| Depends on | Architecture |
| NOT depends on | Pointer type |

---

## 9. Pointer Data Type Effect

| Pointer Type | Read / Write Size |
|------------|------------------|
| char* | 1 byte |
| int* | 4 bytes |
| long long* | 8 bytes |

**Golden Rule:**  
> Pointer type decides **how much**, not **where**

---

## 10. Pointer Operations (VERY IMPORTANT)

### Read
```c
data = *ptr;
````

### Write

```c
*ptr = 0x55;
```

### Increment

```c
ptr = ptr + 1;
```

| Pointer Type | Jump |
| ------------ | ---- |
| char*        | +1   |
| int*         | +4   |
| long long*   | +8   |

**Bug Pattern:**

> Wrong pointer type = memory corruption

---

## 11. Address & Casting

| Operation         | Safe?      |
| ----------------- | ---------- |
| pointer → integer | Needs cast |
| integer → pointer | Dangerous  |

```c
unsigned long addr = (unsigned long)&var;
```

---

## 12. scanf / getchar Rules

| Function | Needs `&` |
| -------- | --------- |
| scanf    | YES       |
| getchar  | NO        |

**Trap:**

> `scanf` leaves `\n` in buffer

---

## 13. Bitwise Operators (MOST IMPORTANT)

| Operator | Name        | Embedded Use  |          |
| -------- | ----------- | ------------- | -------- |
| &        | AND         | Mask bits     |          |
|          |             | OR            | Set bits |
| ^        | XOR         | Toggle        |          |
| ~        | NOT         | Invert        |          |
| <<       | Left shift  | Multiply by 2 |          |
| >>       | Right shift | Divide by 2   |          |

---

## 14. Bitwise vs Logical

| Bitwise | Logical |   |   |   |
| ------- | ------- | - | - | - |
| &       | &&      |   |   |   |
|         |         |   |   |   |
| ^       | ❌       |   |   |   |
| ~       | !       |   |   |   |

**Rule:**

> Registers → bitwise
> Conditions → logical

---

## 15. Common Embedded Bugs

| Symptom        | Cause           | Fix         |
| -------------- | --------------- | ----------- |
| Wrong hex      | %d used         | Use %x      |
| Reset value    | Local var       | static      |
| Garbage        | Wrong specifier | Fix format  |
| Corrupt memory | Wrong pointer   | Fix type    |
| Wrong register | Logical ops     | Use bitwise |

---

## 16. Long-Term Memory Hooks

* **“Pointer type controls jump size”**
* **“Registers speak hex”**
* **“static remembers, local forgets”**
* **“Bitwise touches hardware, logical touches logic”**
* **“uintX_t is portable, int is risky”**

---

## 17. Embedded Debug Checklist

* [ ] Correct format specifier?
* [ ] Fixed-width integer?
* [ ] Correct pointer type?
* [ ] Bitwise used for registers?
* [ ] static where state needed?