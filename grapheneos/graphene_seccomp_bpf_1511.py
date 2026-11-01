"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1511."""

def spec_graphene_seccomp_bpf_1511() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1511, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1511():
    s = spec_graphene_seccomp_bpf_1511()
    assert s["spec_id"] == 1511
