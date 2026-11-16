# Branchless Constant-Time Hexadecimal Encoder & Strict Decoder (`constant_time_hex_decode`)

> Category: **Side-Channel Resistant Codecs** | Language: **C11**

## Overview

Encodes and decodes byte buffers to/from lowercase or mixed hexadecimal via pure integer range arithmetic masks avoiding cache-timing lookup tables and rejecting non-hex characters without early abort.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) without table-lookup timing leaks` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Zero lookup tables and zero secret-dependent branch instructions during nibble encode/decode.
- Non-hex characters and odd-length strings reliably fail validation with ERR_INVALID.

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
