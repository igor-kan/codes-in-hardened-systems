# Branchless Constant-Time PKCS#7 Padding Oracle Mitigation (`constant_time_pkcs7_unpad`)

> Category: **Constant-Time Cryptography** | Language: **C11**

## Overview

Validates and extracts PKCS#7 block padding in strictly constant time using arithmetic bit-masks, always touching every trailing block byte with zero secret-dependent conditional branches.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(B)` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Execution scans identical loop bounds regardless of pad value or validity.
- Padding value 0 or > block_size deterministically yields invalid without branching on padding bytes.

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
