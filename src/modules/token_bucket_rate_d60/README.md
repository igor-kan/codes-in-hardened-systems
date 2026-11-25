# Overflow-Safe Monotonic Token Bucket Rate Limiter (`token_bucket_rate_d60`)

> Category: **Resource Governance** | Language: **C11**

## Overview

Enforces sustained and burst request quotas using saturating 128-bit integer arithmetic so clock skew or long idle periods cannot wrap counters.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1) saturating refill and atomic admit check` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Tokens never exceed burst capacity and non-monotonic timestamps cannot gain tokens.

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
