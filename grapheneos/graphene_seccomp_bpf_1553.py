"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1553."""

def spec_graphene_seccomp_bpf_1553() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1553, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1553():
    s = spec_graphene_seccomp_bpf_1553()
    assert s["spec_id"] == 1553
