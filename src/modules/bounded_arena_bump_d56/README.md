# Aligned Fixed-Buffer Bump Arena Allocator (`bounded_arena_bump_d56`)

> Category: **Memory Safety** | Language: **C11**

## Overview

Allocates aligned sub-slices inside caller-owned byte buffers with integer-overflow safe alignment rounding and strict capacity rejection.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) allocation` |
| **Space Complexity** | `O(CAP)` |

## Mathematical & Safety Invariants

- Returned offsets are strict multiples of alignment and never overlap.

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
