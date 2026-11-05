"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1739."""

def spec_graphene_seccomp_bpf_1739() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1739, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1739():
    s = spec_graphene_seccomp_bpf_1739()
    assert s["spec_id"] == 1739
