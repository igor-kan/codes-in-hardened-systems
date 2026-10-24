"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1061."""

def spec_graphene_seccomp_bpf_1061() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1061, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1061():
    s = spec_graphene_seccomp_bpf_1061()
    assert s["spec_id"] == 1061
