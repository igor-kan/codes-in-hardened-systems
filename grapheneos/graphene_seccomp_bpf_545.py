"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 545."""

def spec_graphene_seccomp_bpf_545() -> dict:
    return {"system": "GrapheneOS", "spec_id": 545, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_545():
    s = spec_graphene_seccomp_bpf_545()
    assert s["spec_id"] == 545
