# Strict Allowlist Key=Value Configuration Sanitizer (`safe_env_kv_sanitizer`)

> Category: **Input Hardening** | Language: **C11**

## Overview

Parses strict KEY=VALUE configuration records verifying POSIX identifier keys ([A-Z_][A-Z0-9_]*), rejecting embedded NUL bytes, control chars, and shell-metacharacter injection attempts.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(L) zero-allocation slice validation` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Null bytes, backticks, newlines, and semicolons in values or keys are strictly rejected.
- Valid KEY=VALUE slices return exact key and value offsets without heap allocation.

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
