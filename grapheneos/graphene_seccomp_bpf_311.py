"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 311."""

def spec_graphene_seccomp_bpf_311() -> dict:
    return {"system": "GrapheneOS", "spec_id": 311, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_311():
    s = spec_graphene_seccomp_bpf_311()
    assert s["spec_id"] == 311
