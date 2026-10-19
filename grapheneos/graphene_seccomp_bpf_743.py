"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 743."""

def spec_graphene_seccomp_bpf_743() -> dict:
    return {"system": "GrapheneOS", "spec_id": 743, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_743():
    s = spec_graphene_seccomp_bpf_743()
    assert s["spec_id"] == 743
