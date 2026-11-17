# Canary-Guarded Mark/Rewind Bounded Scratch Arena (`bounded_arena_scratch`)

> Category: **Memory Safety** | Language: **C11**

## Overview

Implements an alignment-checked bump allocator inside a fixed caller buffer using end-of-buffer stack-canary sentinels and explicit rewind frames to prevent scratch buffer overruns.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) aligned bump allocation and canary-checked rewind` |
| **Space Complexity** | `O(ARENA_CAP) caller-owned backing buffer` |

## Mathematical & Safety Invariants

- Allocations honor power-of-two alignment without integer overflow.
- Trailing buffer canary sentinel remains intact across all allocations and rewinds.

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
