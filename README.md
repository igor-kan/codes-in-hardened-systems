# Hardened Systems Architecture: seL4, Qubes OS & GrapheneOS

Architectural patterns, security models, policies, and low-level specifications for high-assurance, formally verified, and compartmentalized operating systems.

## Systems & Domains
- `sel4`: Microkernel capability-based access control, CNode slot routing, endpoint IPC protocols, and untyped memory retyping
- `qubesos`: Xen hypervisor VM compartmentalization, Qrexec remote procedure call policies, DisposableVM dispatchers, and inter-VM RPC data isolation
- `grapheneos`: Hardened memory allocation policies (hardened_malloc canary zones), BPF/seccomp filter generators, Android verified boot state attestations, and IPC sandbox boundaries

---
© 2026 Igor Kan
