"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 335."""

def spec_graphene_seccomp_bpf_335() -> dict:
    return {"system": "GrapheneOS", "spec_id": 335, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_335():
    s = spec_graphene_seccomp_bpf_335()
    assert s["spec_id"] == 335
