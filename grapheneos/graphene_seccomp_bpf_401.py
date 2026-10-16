"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 401."""

def spec_graphene_seccomp_bpf_401() -> dict:
    return {"system": "GrapheneOS", "spec_id": 401, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_401():
    s = spec_graphene_seccomp_bpf_401()
    assert s["spec_id"] == 401
