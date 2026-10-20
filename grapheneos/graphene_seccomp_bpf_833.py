"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 833."""

def spec_graphene_seccomp_bpf_833() -> dict:
    return {"system": "GrapheneOS", "spec_id": 833, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_833():
    s = spec_graphene_seccomp_bpf_833()
    assert s["spec_id"] == 833
