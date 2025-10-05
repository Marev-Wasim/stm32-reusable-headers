# Embedded C Headers

This repository contains small, reusable C header files that make low-level programming more readable and consistent.

## Features
- **Bit Manipulation Macros**  
  - `SET_THE_BIT(reg, bit)`  
  - `CLEAR_THE_BIT(reg, bit)`  
  - `TOGGLE_THE_BIT(reg, bit)`  
  - `READ_THE_BIT(reg, bit)`  

- **Platform-Independent Type Aliases**  
  - Integer types: `u8`, `s16`, `u32`, etc.  
  - Floating-point types: `f32`, `f64`

## Structure
embedded-c-headers/

│

├── inc/

│   ├── w1_t1.h

│   └── w1_t2.h

│

├── src/

│   └── main.c

│

└── README.md


## Usage
Include the headers in your project and use them directly:
```c
#include "w1_t1.h"
//bit manipulation
#include "w1_t2.h"
//type aliases

u8 counter = 0;
SET_BIT(counter, 2);
