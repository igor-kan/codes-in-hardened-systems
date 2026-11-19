# Aligned Resettable Bump Arena with Redzone Tail Canary (`arena_bump_watermark_c`)

> Category: **Memory Allocators** | Language: **C11**

## Overview

Allocates power-of-two aligned blocks from a fixed static backing buffer bounded by trailing tail canary guards to catch OOB writes before reset.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) power-of-two aligned bump allocation & canary audit` |
| **Space Complexity** | `O(Capacity)` |

## Mathematical & Safety Invariants

- Every allocation returns properly aligned pointers or NULL on overflow; canary corruption is detected cleanly.

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
