"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1055."""

def spec_graphene_seccomp_bpf_1055() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1055, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1055():
    s = spec_graphene_seccomp_bpf_1055()
    assert s["spec_id"] == 1055
