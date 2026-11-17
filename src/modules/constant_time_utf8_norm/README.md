# Constant-Time RFC 3629 UTF-8 Scalar Validator (Zero Overlong/Surrogate) (`constant_time_utf8_norm`)

> Category: **Input Hardening** | Language: **C11**

## Overview

Validates arbitrary byte slices against strict RFC 3629 UTF-8 codepoint boundaries, rejecting overlong encodings, UTF-16 surrogates (U+D800..U+DFFF), and out-of-range > U+10FFFF scalars.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) branch-minimized DFA scalar validation` |
| **Space Complexity** | `O(1) deterministic state machine` |

## Mathematical & Safety Invariants

- Overlong sequences (e.g., C0 80) and surrogate halves (ED A0 80) strictly fail.
- Valid ASCII/multi-byte sequences return exact codepoint count.

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
