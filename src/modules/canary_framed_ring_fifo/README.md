# Dual-Canary Framed SPSC Ring Queue with Slot Poisoning (`canary_framed_ring_fifo`)

> Category: **Memory Safety** | Language: **C11**

## Overview

Wraps every ring queue slot with leading and trailing 32-bit magic canaries and overwrites popped slots with 0xDEADBEEF poison to trap use-after-pop or buffer overruns.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) canary-verified enqueue and poison-scrubbed dequeue` |
| **Space Complexity** | `O(Capacity)` |

## Mathematical & Safety Invariants

- Corrupted slot canaries abort dequeue before returning tainted data.

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
