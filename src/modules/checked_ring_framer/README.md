# Overflow-Proof Hard-MTU SLIP/Length-Prefixed Frame Codec (`checked_ring_framer`)

> Category: **Protocol Framing** | Language: **C11**

## Overview

Encodes and decodes explicit length-prefixed binary IPC frames with hard MTU clamping, overflow-free header parsing, and 32-bit CRC tag verification.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) bounded single-pass framing` |
| **Space Complexity** | `O(MTU) static scratch` |

## Mathematical & Safety Invariants

- Frames exceeding max_mtu or with truncated payloads fail deterministically.
- Valid roundtrip preserves exact payload bytes and length.

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
