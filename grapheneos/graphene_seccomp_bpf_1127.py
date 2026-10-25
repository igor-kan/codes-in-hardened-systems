"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1127."""

def spec_graphene_seccomp_bpf_1127() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1127, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1127():
    s = spec_graphene_seccomp_bpf_1127()
    assert s["spec_id"] == 1127
