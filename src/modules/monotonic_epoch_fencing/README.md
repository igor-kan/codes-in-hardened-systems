# Distributed Lock Monotonic Epoch Fencing Token Guard (`monotonic_epoch_fencing`)

> Category: **Fault-Tolerant Storage** | Language: **C11**

## Overview

Protects storage resources against zombie split-brain lock holders by rejecting any write carrying a fencing token strictly less than the highest committed epoch.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) atomic high-water fencing token comparison` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Accepted writes have strictly non-decreasing fencing epochs.

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
