"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1229."""

def spec_graphene_seccomp_bpf_1229() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1229, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1229():
    s = spec_graphene_seccomp_bpf_1229()
    assert s["spec_id"] == 1229
