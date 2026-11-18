# Overflow-Checked ZigZag Signed LEB128 Framing Codec (`checked_varint_zigzag_c`)

> Category: **Defensive Parsing** | Language: **C11**

## Overview

Encodes and decodes signed 64-bit integers via ZigZag mapping ((x << 1) ^ (x >> 63)) and strictly rejects non-canonical overlong or truncated LEB128 sequences.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) bounded 10-byte LEB128 decode with overlong/overflow rejection` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Decode of Encode(x) equals x for all int64 values.
- Truncated or >10-byte varints fail deterministically.

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
