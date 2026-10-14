"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 251."""

def spec_graphene_seccomp_bpf_251() -> dict:
    return {"system": "GrapheneOS", "spec_id": 251, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_251():
    s = spec_graphene_seccomp_bpf_251()
    assert s["spec_id"] == 251
