# Domain-Separated Merkle Tree Inclusion Proof Verifier (`merkle_audit_verify_d60`)

> Category: **Integrity Verification** | Language: **C11**

## Overview

Verifies authenticated leaf membership against an expected 64-bit domain-separated Merkle root using distinct leaf (0x00) and node (0x01) tags.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(log N) branch-path hash chain verification` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Prevents second-preimage tree-extension ambiguity via strict leaf/internal domain tags.

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
