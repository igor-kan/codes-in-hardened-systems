# Keyed SipHash-1-3 SYN/Session Cookie Authenticator (`siphash13_keyed_cookie`)

> Category: **Network Defense** | Language: **C11**

## Overview

Generates and validates stateless anti-spoofing SYN/session cookies binding client address, timestamp slot, and secret 128-bit key via SipHash-1-3 ARX rounds.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) ARX SipRound state mixing + constant-time tag verify` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Expired or forged cookies are rejected in constant time.

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
