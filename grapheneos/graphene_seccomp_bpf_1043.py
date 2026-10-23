"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1043."""

def spec_graphene_seccomp_bpf_1043() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1043, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1043():
    s = spec_graphene_seccomp_bpf_1043()
    assert s["spec_id"] == 1043
