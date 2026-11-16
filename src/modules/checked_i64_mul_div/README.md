# UB-Free Overflow-Safe Signed 64-Bit Multiply, Divide & Midpoint (`checked_i64_mul_div`)

> Category: **Undefined-Behavior Elimination** | Language: **C11**

## Overview

Performs strict C11 signed int64 multiplication, division (trapping div-by-0 and INT64_MIN / -1), and overflow-free integer midpoint without compiler signed-overflow UB.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(1)` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Zero signed-integer overflow UB under strict -Wall -Wextra -Werror.
- Detects all boundary traps (INT64_MIN * -1, INT64_MIN / -1, div-by-0).
- Midpoint satisfies min(a,b) <= mid <= max(a,b) across full [INT64_MIN, INT64_MAX] range.

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
