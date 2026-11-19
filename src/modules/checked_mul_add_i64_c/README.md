# Signed 64-Bit Overflow-Detecting & Saturating Arithmetic Helpers (`checked_mul_add_i64_c`)

> Category: **Integer Overflow Defense** | Language: **C11**

## Overview

Performs signed 64-bit addition, subtraction, and multiplication using GCC/Clang __builtin overflow intrinsics with safe saturation fallbacks.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) __builtin_*_overflow trapped arithmetic` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- INT64_MAX + 1 traps overflow cleanly without signed UB.

## Module Architecture

| File | Lifecycle Role |
| :--- | :--- |
| `types.h` | Stage 01 |
| `errors.h` | Stage 02 |
| `interface.h` | Stage 03 |
| `core.c` | Stage 04 |
| `validation.c` | Stage 05 |
| `fast_path.c` | Stage 06 |
| `concurrent.c` | Stage 07 |
| `invariants.c` | Stage 08 |
| `unit_tests.c` | Stage 09 |
| `property_tests.c` | Stage 10 |
| `benchmark.c` | Stage 11 |
| `README.md` | Stage 12 |

## Verification & Execution Example

```text
gcc -std=c11 -O2 -Wall -Wextra -Werror -pthread core.c validation.c fast_path.c concurrent.c invariants.c unit_tests.c -lm -o test_bin && ./test_bin
```

---
© 2026 Igor Kan
