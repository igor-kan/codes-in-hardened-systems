"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1409."""

def spec_graphene_seccomp_bpf_1409() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1409, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1409():
    s = spec_graphene_seccomp_bpf_1409()
    assert s["spec_id"] == 1409
