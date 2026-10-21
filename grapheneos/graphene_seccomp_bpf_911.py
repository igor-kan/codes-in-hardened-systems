"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 911."""

def spec_graphene_seccomp_bpf_911() -> dict:
    return {"system": "GrapheneOS", "spec_id": 911, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_911():
    s = spec_graphene_seccomp_bpf_911()
    assert s["spec_id"] == 911
