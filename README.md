# Hardened Systems Architecture: seL4, Qubes OS & GrapheneOS

Architectural patterns, security models, policies, and low-level specifications for high-assurance, formally verified, and compartmentalized operating systems.

## Systems & Domains
- `sel4`: Microkernel capability-based access control, CNode slot routing, endpoint IPC protocols, and untyped memory retyping
- `qubesos`: Xen hypervisor VM compartmentalization, Qrexec remote procedure call policies, DisposableVM dispatchers, and inter-VM RPC data isolation
- `grapheneos`: Hardened memory allocation policies (hardened_malloc canary zones), BPF/seccomp filter generators, Android verified boot state attestations, and IPC sandbox boundaries
- `fuzzing`: Continuous fuzzing regression suite, LibFuzzer/AFL++ harnesses, minimized crash reproduction vectors, and AddressSanitizer triage reports

## Continuous Fuzzing & Crash Minimization Suite
Security fuzzers (AFL++, LibFuzzer) run continuously against microkernel IPC and sandbox decoders. Newly isolated coverage edges, crash payloads, and minimized test vectors are committed directly to `fuzzing/crashes_minimized/` to serve as an immutable regression testbed for cross-architecture CI runners.

---
© 2026 Igor Kan
