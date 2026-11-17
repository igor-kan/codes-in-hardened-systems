# Delayed-Reuse Quarantine Slab Allocator with Redzone Poisoning (`slab_poison_quarantine`)

> Category: **Memory Safety** | Language: **C11**

## Overview

Implements a hardened fixed-slot memory slab that fills freed slots with 0xFE poison bytes, stages freed indices through a delayed-reuse FIFO quarantine, and detects double-free and poison tampering.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) quarantined slot allocation & FIFO delayed reuse` |
| **Space Complexity** | `O(SLOTS * BLK_SIZE) fixed deterministic slab` |

## Mathematical & Safety Invariants

- Double-free or invalid-slot free returns explicit error without corrupting quarantine.
- Every byte in a quarantined block matches poison pattern 0xFE until popped for reuse.

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
