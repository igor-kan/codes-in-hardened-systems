# Write-Ahead Log Frame Header/Trailer Checksum Torn-Write Detector (`journal_wal_torn_guard`)

> Category: **Crash-Safe Persistence** | Language: **C11**

## Overview

Frames WAL records with sequence epoch, payload length, Fletcher-32 checksum, and matching trailer epoch so partial or torn sector writes are deterministically quarantined.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) dual-magic + Fletcher-32 payload integrity verification` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Any single-bit flip in payload or header/trailer epoch mismatch rejects the frame.

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
