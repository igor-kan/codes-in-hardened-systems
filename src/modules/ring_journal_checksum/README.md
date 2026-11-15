# CRC32-Sealed Write-Ahead Ring Journal with Torn-Write Detection (`ring_journal_checksum`)

> Category: **Durable Audit Logging** | Language: **C11**

## Overview

Implements an append-only circular audit journal where each entry stores a monotonic sequence ID and IEEE CRC32 checksum, detecting torn writes and corruption on replay.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(L)` |
| **Space Complexity** | `O(M)` |

## Mathematical & Safety Invariants

- Every validated entry matches CRC32 over sequence ID + length + payload bytes.
- Modified payload bit or sequence mismatch immediately triggers integrity failure.

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
