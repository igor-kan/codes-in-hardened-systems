"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 29."""

def spec_graphene_seccomp_bpf_29() -> dict:
    return {"system": "GrapheneOS", "spec_id": 29, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_29():
    s = spec_graphene_seccomp_bpf_29()
    assert s["spec_id"] == 29
