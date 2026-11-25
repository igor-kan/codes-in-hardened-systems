# Crockford Base32 Encoder and Canonical Alias-Normalizing Decoder (`base32_crockford_d60`)

> Category: **Input Sanitization** | Language: **C11**

## Overview

Encodes binary blobs into human-readable Crockford Base32 and normalizes O/o->0 and I/i/L/l->1 without branch-heavy lookups.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) 5-bit stream packing and ambiguity-safe alphabet decode` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Encodes/decodes arbitrary payloads identically while mapping ambiguous glyphs safely.

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
