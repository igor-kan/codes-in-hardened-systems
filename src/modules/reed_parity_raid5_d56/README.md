# RAID-5 XOR Parity Generation & Single Erasure Recovery (`reed_parity_raid5_d56`)

> Category: **Storage Resilience** | Language: **C11**

## Overview

Computes XOR stripe parity across D data blocks and reconstructs any single failed stripe block deterministically from surviving blocks and parity.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(D * L)` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Recovered block equals original lost block across any missing drive index.

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
