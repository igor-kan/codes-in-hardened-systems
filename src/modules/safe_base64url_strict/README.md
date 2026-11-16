# Non-Malleable Strict RFC 4648 URL-Safe Base64 Codec (`safe_base64url_strict`)

> Category: **Protocol & Serialization Hardening** | Language: **C11**

## Overview

Implements unpadded RFC 4648 Section 5 Base64url encoding/decoding that enforces canonical zero trailing bits on partial final quantum blocks to prevent parser signature malleability.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N)` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- decode(encode(raw)) == raw across lengths congruent to 0, 1, and 2 mod 3.
- Any non-zero unused pad bits in the final Base64url character fail decoding with ERR_INVALID.

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
