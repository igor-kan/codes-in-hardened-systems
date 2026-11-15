# Red-Zone Guarded & Use-After-Free Poisoned Slab Allocator (`redzone_slab_poison`)

> Category: **Memory Safety** | Language: **C11**

## Overview

Provides a hardened fixed-slot arena where every user payload is bracketed by deterministic 16-byte front and rear redzone cookies and wiped with 0xA5 poison upon free to detect heap overflows and UAF.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) alloc / O(1) free` |
| **Space Complexity** | `O(M * S)` |

## Mathematical & Safety Invariants

- Double-free triggers immediate error before modifying bitmap.
- Front and rear redzones verify untouched before releasing slot.
- Freed payload memory is unconditionally poisoned before slot returns to pool.

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
