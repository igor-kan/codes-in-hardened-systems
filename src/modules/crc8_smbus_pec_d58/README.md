# SMBus/I2C CRC-8 (Poly 0x07) Packet Error Verifier (`crc8_smbus_pec_d58`)

> Category: **Bus Integrity** | Language: **C11**

## Overview

Computes unreflected polynomial 0x07 CRC-8 digests cleanly detecting all odd bit flips and single-byte burst errors on serial telemetry frames.

## Complexity Guarantees

| Metric | Asymptotic Bound |
| :--- | :--- |
| **Time Complexity** | `O(8 * N)` |
| **Space Complexity** | `O(1)` |

## Mathematical & Safety Invariants

- Appending frame CRC-8 byte makes whole-frame remainder identically zero.

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
