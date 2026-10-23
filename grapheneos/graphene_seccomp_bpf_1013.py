"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1013."""

def spec_graphene_seccomp_bpf_1013() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1013, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1013():
    s = spec_graphene_seccomp_bpf_1013()
    assert s["spec_id"] == 1013
