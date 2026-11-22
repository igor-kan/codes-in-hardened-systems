# 64-Slot Bitmap Fixed-Pool Slab With Double-Free Guard (`slab_bitmap_alloc_d57`)

> Category: **Memory Safety** | Language: **C11**

## Overview

Tracks 64 fixed pool object slots in a single uint64_t occupancy mask, preventing duplicate allocations and rejecting double-free errors explicitly.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) slot alloc/free` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Allocated slot indices remain strictly disjoint and reject invalid/double free calls.

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
