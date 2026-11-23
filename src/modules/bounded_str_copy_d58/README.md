# Null-Terminated Bounded Byte Buffer Copy With Truncation Flag (`bounded_str_copy_d58`)

> Category: **Memory Safety** | Language: **C11**

## Overview

Copies arbitrary strings into caller-owned bounded char arrays guaranteeing NUL termination while returning explicit non-zero errors on truncation.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(min(N, CAP))` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Destination buffer always ends in NUL while signaling overflow cleanly.

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
