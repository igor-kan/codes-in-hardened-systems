"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1643."""

def spec_graphene_seccomp_bpf_1643() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1643, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1643():
    s = spec_graphene_seccomp_bpf_1643()
    assert s["spec_id"] == 1643
