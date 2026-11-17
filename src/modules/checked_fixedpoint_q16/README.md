# UB-Free Checked Saturating Q16.16 Fixed-Point Arithmetic (`checked_fixedpoint_q16`)

> Category: **Numeric Safety** | Language: **C11**

## Overview

Implements deterministic Q16.16 fixed-point addition, subtraction, multiplication, and division avoiding signed integer shift/overflow undefined behavior via widened 64-bit bounds checks and explicit saturation/error reporting.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) signed-overflow-free 64-bit widened arithmetic` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Addition of INT32_MAX + 1 saturates or signals overflow without signed wrap UB.
- Multiplication avoids precision loss and detects product overflow outside Q16.16 representable range.

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
