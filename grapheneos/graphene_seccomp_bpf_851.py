"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 851."""

def spec_graphene_seccomp_bpf_851() -> dict:
    return {"system": "GrapheneOS", "spec_id": 851, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_851():
    s = spec_graphene_seccomp_bpf_851()
    assert s["spec_id"] == 851
