"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 149."""

def spec_graphene_seccomp_bpf_149() -> dict:
    return {"system": "GrapheneOS", "spec_id": 149, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_149():
    s = spec_graphene_seccomp_bpf_149()
    assert s["spec_id"] == 149
