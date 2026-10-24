"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1085."""

def spec_graphene_seccomp_bpf_1085() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1085, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1085():
    s = spec_graphene_seccomp_bpf_1085()
    assert s["spec_id"] == 1085
