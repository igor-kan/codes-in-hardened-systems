# Overflow-Safe Span Subslice & Overlap-Guarded Byte Copier (`bounds_checked_slice_c11`)

> Category: **Memory Bounds Safety** | Language: **C11**

## Overview

Validates subslice extraction and copies byte spans safely using integer-wrap-free addition checks (len <= total && off <= total - len) and overlap detection.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) overflow-free offset + length validation` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Out-of-range slices or overlapping source/dest regions fail cleanly before touching memory.

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
