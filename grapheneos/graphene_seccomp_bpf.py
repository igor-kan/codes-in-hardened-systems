"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 113."""

def spec_graphene_seccomp_bpf_113() -> dict:
    return {"system": "GrapheneOS", "spec_id": 113, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_113():
    s = spec_graphene_seccomp_bpf_113()
    assert s["spec_id"] == 113
