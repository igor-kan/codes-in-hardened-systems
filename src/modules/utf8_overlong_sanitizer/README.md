# RFC 3629 UTF-8 Overlong, Surrogate & Bounds Sanitizer (`utf8_overlong_sanitizer`)

> Category: **Input Sanitization** | Language: **C11**

## Overview

Performs hardened character-by-character RFC 3629 UTF-8 decoding with strict rejection of overlong encodings (C0/C1/E0<A0/F0<90), UTF-16 surrogates, and >U+10FFFF codepoints.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N)` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Canonical minimal-length encoding strictly enforced for every decoded scalar value.
- Every invalid sequence halts deterministically returning exact offending byte index.

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
