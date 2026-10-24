"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1115."""

def spec_graphene_seccomp_bpf_1115() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1115, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1115():
    s = spec_graphene_seccomp_bpf_1115()
    assert s["spec_id"] == 1115
