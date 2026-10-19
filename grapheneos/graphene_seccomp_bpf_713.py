"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 713."""

def spec_graphene_seccomp_bpf_713() -> dict:
    return {"system": "GrapheneOS", "spec_id": 713, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_713():
    s = spec_graphene_seccomp_bpf_713()
    assert s["spec_id"] == 713
