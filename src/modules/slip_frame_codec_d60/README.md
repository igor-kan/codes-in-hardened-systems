# RFC 1055 Hardened SLIP Serial Frame Encoder & Bounds-Checked Decoder (`slip_frame_codec_d60`)

> Category: **Protocol Framing** | Language: **C11**

## Overview

Frames arbitrary binary payloads with END/ESC byte-stuffing while rejecting truncated escapes and malformed sequences strictly within output bounds.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(N) bounded escape state machine` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Round-trip decoding recovers exact payload bytes and rejects trailing bare ESC.

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
