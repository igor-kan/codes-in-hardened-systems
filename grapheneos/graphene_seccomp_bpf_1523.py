"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1523."""

def spec_graphene_seccomp_bpf_1523() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1523, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1523():
    s = spec_graphene_seccomp_bpf_1523()
    assert s["spec_id"] == 1523
