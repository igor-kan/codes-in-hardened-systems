"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1361."""

def spec_graphene_seccomp_bpf_1361() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1361, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1361():
    s = spec_graphene_seccomp_bpf_1361()
    assert s["spec_id"] == 1361
