# Anti-Rollback Monotonic Nonce Window & Epoch Seal Guard (`monotonic_nonce_counter`)

> Category: **Anti-Replay & Security** | Language: **C11**

## Overview

Implements an RFC 4303 / DTLS-style 64-slot sliding anti-replay window preventing duplicate, backward, or wrap-around nonce submission with CRC-32C epoch sealing.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) bitmap sliding replay-window check` |
| **Space Complexity** | `O(1) fixed 64-bit replay bitmap` |

## Mathematical & Safety Invariants

- Duplicate nonces within the active window are strictly rejected.
- Any nonce older than high_water - 63 is rejected without window wrap corruption.

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
