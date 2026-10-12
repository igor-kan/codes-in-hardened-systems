"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 11."""

def spec_graphene_seccomp_bpf_11() -> dict:
    return {"system": "GrapheneOS", "spec_id": 11, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_11():
    s = spec_graphene_seccomp_bpf_11()
    assert s["spec_id"] == 11
