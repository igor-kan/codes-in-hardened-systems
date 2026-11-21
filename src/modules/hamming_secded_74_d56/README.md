# Hamming (8,4) SECDED Single-Error Correcting Codec (`hamming_secded_74_d56`)

> Category: **ECC Memory** | Language: **C11**

## Overview

Encodes 4-bit nibbles into 8-bit extended Hamming SECDED codewords, corrects any 1-bit flip, and flags double-bit errors cleanly.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1)` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- All 16 4-bit values tolerate any 1-bit flip cleanly while detecting 2-bit flips.

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
