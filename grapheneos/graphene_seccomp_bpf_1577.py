"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1577."""

def spec_graphene_seccomp_bpf_1577() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1577, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1577():
    s = spec_graphene_seccomp_bpf_1577()
    assert s["spec_id"] == 1577
