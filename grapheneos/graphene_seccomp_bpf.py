"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 125."""

def spec_graphene_seccomp_bpf_125() -> dict:
    return {"system": "GrapheneOS", "spec_id": 125, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_125():
    s = spec_graphene_seccomp_bpf_125()
    assert s["spec_id"] == 125
