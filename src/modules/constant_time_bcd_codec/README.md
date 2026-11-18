# Constant-Time Branchless Packed BCD Encoder & Digit Verifier (`constant_time_bcd_codec`)

> Category: **Constant-Time Primitives** | Language: **C11**

## Overview

Validates and decodes packed Binary-Coded Decimal (BCD) byte arrays without secret-dependent branches by testing nibble bounds <= 9 with bitwise masks.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) branchless SWAR nibble range check` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Any nibble in 0xA..0xF sets the constant-time reject mask without branching.

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
