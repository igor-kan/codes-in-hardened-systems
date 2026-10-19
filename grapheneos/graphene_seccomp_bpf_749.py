"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 749."""

def spec_graphene_seccomp_bpf_749() -> dict:
    return {"system": "GrapheneOS", "spec_id": 749, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_749():
    s = spec_graphene_seccomp_bpf_749()
    assert s["spec_id"] == 749
