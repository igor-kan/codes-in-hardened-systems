# Oblivious 8-Element Batcher Odd-Even Merge Sorting Network (`constant_time_sort_net8`)

> Category: **Side-Channel Resistant Algorithms** | Language: **C11**

## Overview

Sorts 8-element 64-bit arrays using Batcher's fixed 19-comparator odd-even merge network with branchless conditional swaps so memory and control flow are 100% independent of input values.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) fixed 19-comparator data-oblivious sorting network` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Control flow and comparator schedule are identical for all 8! input permutations.
- Output is strictly non-decreasing.

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
