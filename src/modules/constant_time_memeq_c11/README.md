# Volatile Compiler-Barrier Constant-Time Byte Buffer Equality (`constant_time_memeq_c11`)

> Category: **Side-Channel Hardening** | Language: **C11**

## Overview

Compares two fixed-length security-critical buffers (MAC tags, passwords, signatures) without early-exit branches using volatile barrier accumulation.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) secret-independent full-scan XOR accumulator` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Execution visits every byte 0..N-1 identically regardless of mismatch position.

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
