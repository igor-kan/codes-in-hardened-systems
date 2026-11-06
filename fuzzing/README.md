# Continuous Fuzzing & Crash Minimization Regression Suite

This subsystem implements an automated, continuous security fuzzing and crash-minimization workflow for low-level operating system interfaces (seL4 capability routing, GrapheneOS BPF filter decoders, and Qubes OS Qrexec RPC serialization).

## Architectural Workflow

```
[Continuous Fuzzers] (AFL++, LibFuzzer, Honggfuzz)
        │
        ▼
[Coverage Isolation] --> New branch edge discovered -> Commit seed to `corpora/`
        │
        ▼
[Crash Payload Found] --> Memory safety violation (ASan, UBSan, MSan)
        │
        ▼
[Minimization Engine] --> `afl-tmin` / `sydr` reduces payload to minimal reproducing delta
        │
        ▼
[Immutable Regression Suite] --> Commits minimized `.bin` test vector + `.asan.txt` trace
        │
        ▼
[Automated CI Matrix] --> Secondary workers pull regression vectors across targets (x86_64, aarch64, riscv64)
```

## Directory Structure
- `harnesses/`: Target fuzzing harnesses implementing `LLVMFuzzerTestOneInput` with memory sanitizer instrumentation.
- `corpora/`: Coverage-expanding seed inputs that exercise edge-case state machines.
- `crashes_minimized/`: Minimized binary reproduction payloads and AddressSanitizer crash triage logs.
- `dictionaries/`: Fuzzing syntax and token dictionaries for IPC protocols and packet structures.

## Reproducing a Crash Vector
To execute a minimized crash payload against a target harness:
```bash
clang -fsanitize=address,fuzzer-no-link -g harnesses/ipc_cap_fuzz.c -o ipc_fuzz_driver
./ipc_fuzz_driver crashes_minimized/crash_oob_read_001.bin
```

---
© 2026 Igor Kan
