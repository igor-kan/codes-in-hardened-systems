"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1067."""

def spec_graphene_seccomp_bpf_1067() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1067, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1067():
    s = spec_graphene_seccomp_bpf_1067()
    assert s["spec_id"] == 1067
