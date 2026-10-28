"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1355."""

def spec_graphene_seccomp_bpf_1355() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1355, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1355():
    s = spec_graphene_seccomp_bpf_1355()
    assert s["spec_id"] == 1355
