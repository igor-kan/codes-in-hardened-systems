# Zero-Allocation Strict RFC 3629 UTF-8 Validator (`utf8_dfa_strict_valid_c`)

> Category: **Input Sanitization** | Language: **C11**

## Overview

Validates UTF-8 byte streams strictly per RFC 3629, rejecting truncated sequences, overlong encodings (C0/C1/E0-80), UTF-16 surrogates (U+D800..U+DFFF), and codepoints > U+10FFFF.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) single-pass scalar range, overlong & surrogate rejection` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Accepts valid multi-byte UTF-8 and rejects every overlong/surrogate byte sequence.

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
