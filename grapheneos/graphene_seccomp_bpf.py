"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 71."""

def spec_graphene_seccomp_bpf_71() -> dict:
    return {"system": "GrapheneOS", "spec_id": 71, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_71():
    s = spec_graphene_seccomp_bpf_71()
    assert s["spec_id"] == 71
