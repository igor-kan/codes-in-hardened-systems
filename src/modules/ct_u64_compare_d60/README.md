# Constant-Time Secret-Blind Byte Slice Equality & Selection (`ct_u64_compare_d60`)

> Category: **Constant-Time Primitives** | Language: **C11**

## Overview

Compares arbitrary fixed-length secret buffers and performs branchless conditional selects without timing side channels.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) branchless XOR accumulation and mask blending` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Secret equality returns 1 iff every byte matches across full scan.

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
