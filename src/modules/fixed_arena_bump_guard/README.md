# Canary-Protected Alignment-Safe Monotonic Bump Arena (`fixed_arena_bump_guard`)

> Category: **Memory Allocator Hardening** | Language: **C11**

## Overview

Allocates aligned memory sub-blocks monotonically from a fixed backing buffer with trailing 8-byte canary cookies, integer-overflow alignment padding guards, and explicit wipe-on-reset.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) alloc / O(1) poisoned reset` |
| **Space Complexity** | `O(1) control header over caller slab` |

## Mathematical & Safety Invariants

- Every returned pointer meets requested power-of-two alignment and stays inside [base, base+cap).
- Canary integrity verify() detects tail buffer overwrites before arena reset.

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
