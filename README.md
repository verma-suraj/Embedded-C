<div align="center">
  <h1>⚙️ Embedded C Programming — Structured Notes & Code Reference</h1>
  <p>
    A <b>module-wise, deeply structured Embedded C repository</b> focused on
    <b>microcontroller-level programming</b>, memory behavior, and hardware-aware C concepts.
    <br/>
    Built as a <b>long-term reference</b> for Embedded Systems, Firmware, and Driver Development.
  </p>
</div>

---

## 🎯 Purpose of This Repository

This repository is **not** a generic C tutorial.

It is a **carefully structured Embedded C knowledge base**, created to:

- Build a **strong C foundation specifically for embedded systems**
- Understand **how C interacts with hardware & memory**
- Serve as a **future reference** during:
  - MCU programming
  - Driver development
  - Debugging low-level bugs
  - Embedded interviews
- Bridge the gap between **C language** and **microcontroller behavior**

All notes are written with an **embedded mindset**, not desktop programming.

---

## 🧠 How to Use This Repo

- The repository is organized **module-wise**
- Each module contains a **table of topics**
- Every topic links to:
  - 📘 **Detailed notes (`.md`)**
  - 💻 **Focused example code**

> You can jump directly to any topic without following a strict order.

---

## 📚 Module 1: C Foundations for Embedded Systems

| Topic | Concepts | Notes | Code |
|------|---------|-------|------|
| Introduction to Embedded C | What is Embedded C, Embedded vs Desktop C, Role of C in MCUs | [Notes](Module_01_C_Foundations/01_Intro/notes.md) | [Code](Module_01_C_Foundations/01_Intro/code) |
| C Standards | C89, C99, C11, Compiler dependence, Why standards matter in embedded | [Notes](Module_01_C_Foundations/02_C_Standards/notes.md) | — |
| Program Structure | main(), startup code concept, infinite loops, bare-metal flow | [Notes](Module_01_C_Foundations/03_Program_Structure/notes.md) | [Code](Module_01_C_Foundations/03_Program_Structure/code) |
| Compilation Process | Preprocessor, Compiler, Assembler, Linker (embedded view) | [Notes](Module_01_C_Foundations/04_Compilation/notes.md) | — |

---

## 📦 Module 2: Data Types, Variables & Memory

| Topic | Concepts | Notes | Code |
|------|---------|-------|------|
| Integer Data Types | char, short, int, long, signed vs unsigned | [Notes](Module_02_Data_Types/01_Integer_Types/notes.md) | [Code](Module_02_Data_Types/01_Integer_Types/code) |
| Size & Range | sizeof, compiler dependency, MCU word length | [Notes](Module_02_Data_Types/02_Size_Range/notes.md) | [Code](Module_02_Data_Types/02_Size_Range/code) |
| Variable Definition | Definition vs Declaration, initialization rules | [Notes](Module_02_Data_Types/03_Variables/notes.md) | [Code](Module_02_Data_Types/03_Variables/code) |
| ASCII & Characters | ASCII table, char as integer, embedded relevance | [Notes](Module_02_Data_Types/04_ASCII/notes.md) | [Code](Module_02_Data_Types/04_ASCII/code) |

---

## 🧮 Module 3: Operators & Expressions

| Topic | Concepts | Notes | Code |
|------|---------|-------|------|
| Arithmetic Operators | Integer math, overflow, truncation | [Notes](Module_03_Operators/01_Arithmetic/notes.md) | [Code](Module_03_Operators/01_Arithmetic/code) |
| Bitwise Operators | AND, OR, XOR, shifts, masking | [Notes](Module_03_Operators/02_Bitwise/notes.md) | [Code](Module_03_Operators/02_Bitwise/code) |
| Logical vs Bitwise | && vs &, || vs |, common embedded bugs | [Notes](Module_03_Operators/03_Logical_vs_Bitwise/notes.md) | [Code](Module_03_Operators/03_Logical_vs_Bitwise/code) |

---

## 🧠 Module 4: Control Flow (Embedded Perspective)

| Topic | Concepts | Notes | Code |
|------|---------|-------|------|
| Conditional Statements | if-else, switch, embedded decision logic | [Notes](Module_04_Control_Flow/01_Conditionals/notes.md) | [Code](Module_04_Control_Flow/01_Conditionals/code) |
| Loops | for, while, do-while, infinite loops | [Notes](Module_04_Control_Flow/02_Loops/notes.md) | [Code](Module_04_Control_Flow/02_Loops/code) |
| Delay Loops | Busy wait delays, limitations | [Notes](Module_04_Control_Flow/03_Delay_Loops/notes.md) | [Code](Module_04_Control_Flow/03_Delay_Loops/code) |

---

## 🧵 Module 5: Functions & Modular Programming

| Topic | Concepts | Notes | Code |
|------|---------|-------|------|
| Functions Basics | Function syntax, return types, arguments | [Notes](Module_05_Functions/01_Functions/notes.md) | [Code](Module_05_Functions/01_Functions/code) |
| Function Prototypes | Header files, cross-file calls | [Notes](Module_05_Functions/02_Prototypes/notes.md) | [Code](Module_05_Functions/02_Prototypes/code) |
| Multi-file Projects | .c/.h separation, linker role | [Notes](Module_05_Functions/03_Multi_File/notes.md) | [Code](Module_05_Functions/03_Multi_File/code) |

---

## 🧠 Module 6: Memory, Pointers & Addressing

| Topic | Concepts | Notes | Code |
|------|---------|-------|------|
| Address of Variables | & operator, memory map | [Notes](Module_06_Pointers/01_Address/notes.md) | [Code](Module_06_Pointers/01_Address/code) |
| Pointers Basics | Pointer types, dereferencing | [Notes](Module_06_Pointers/02_Pointers/notes.md) | [Code](Module_06_Pointers/02_Pointers/code) |
| Pointer Arithmetic | Increment, scaling, pitfalls | [Notes](Module_06_Pointers/03_Pointer_Arithmetic/notes.md) | [Code](Module_06_Pointers/03_Pointer_Arithmetic/code) |
| Type Casting | Explicit casting, pointer casting | [Notes](Module_06_Pointers/04_Type_Casting/notes.md) | [Code](Module_06_Pointers/04_Type_Casting/code) |

---

## 🧱 Module 7: Storage Classes & Scope

| Topic | Concepts | Notes | Code |
|------|---------|-------|------|
| Variable Scope | Local vs Global | [Notes](Module_07_Storage/01_Scope/notes.md) | [Code](Module_07_Storage/01_Scope/code) |
| static Keyword | Lifetime extension, file scope | [Notes](Module_07_Storage/02_Static/notes.md) | [Code](Module_07_Storage/02_Static/code) |
| extern Keyword | Cross-file variables | [Notes](Module_07_Storage/03_Extern/notes.md) | [Code](Module_07_Storage/03_Extern/code) |

---

## 🔌 What This Repo Will Eventually Extend To

- Volatile keyword
- Memory-mapped registers
- MCU linker scripts
- Interrupt basics
- Bare-metal startup concepts
- Peripheral register programming

(These will be added **after Embedded C fundamentals are locked in**.)

---

## 📎 Reputable References & Learning Sources

These resources are widely respected in the embedded industry:

- FastBit Embedded Brain Academy  
  https://www.fastbitlab.com  
- *The C Programming Language* — Kernighan & Ritchie  
  https://en.wikipedia.org/wiki/The_C_Programming_Language  
- ISO C Standard Overview  
  https://www.iso.org/standard/74528.html  
- ARM Embedded Software Development Resources  
  https://developer.arm.com/documentation  

---

## 📜 License

This repository is licensed under the **MIT License** — free to learn, reference, and build upon.

---

> ⚠️ **Note:**  
> This repository prioritizes **clarity, correctness, and embedded relevance** over speed.
> Every concept is written to be revisited years later and still make sense.
