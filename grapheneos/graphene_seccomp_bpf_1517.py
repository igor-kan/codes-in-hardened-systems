"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1517."""

def spec_graphene_seccomp_bpf_1517() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1517, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1517():
    s = spec_graphene_seccomp_bpf_1517()
    assert s["spec_id"] == 1517
