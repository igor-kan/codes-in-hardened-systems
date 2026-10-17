"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 509."""

def spec_graphene_seccomp_bpf_509() -> dict:
    return {"system": "GrapheneOS", "spec_id": 509, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_509():
    s = spec_graphene_seccomp_bpf_509()
    assert s["spec_id"] == 509
