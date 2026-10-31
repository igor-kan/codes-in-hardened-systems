"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1457."""

def spec_graphene_seccomp_bpf_1457() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1457, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1457():
    s = spec_graphene_seccomp_bpf_1457()
    assert s["spec_id"] == 1457
