"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 341."""

def spec_graphene_seccomp_bpf_341() -> dict:
    return {"system": "GrapheneOS", "spec_id": 341, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_341():
    s = spec_graphene_seccomp_bpf_341()
    assert s["spec_id"] == 341
