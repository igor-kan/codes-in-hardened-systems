# Longest-Prefix Bitmask IPv4 CIDR Access-Control Verifier (`strict_cidr_acl_matcher`)

> Category: **Packet Filtering** | Language: **C11**

## Overview

Evaluates IPv4 addresses against CIDR rules (prefix/len -> allow/deny) without undefined 32-bit shift behavior on /0 prefixes, selecting the most specific matching prefix.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(R) shift-safe CIDR mask matching with longest-prefix priority` |
| **Space Complexity** | `O(R)` |

## Mathematical & Safety Invariants

- /0 prefix mask evaluates cleanly to 0 without UB shift >= 32.
- More specific prefix /24 overrides less specific /8 rule.

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
