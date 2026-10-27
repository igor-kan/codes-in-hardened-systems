"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1295."""

def spec_graphene_seccomp_bpf_1295() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1295, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1295():
    s = spec_graphene_seccomp_bpf_1295()
    assert s["spec_id"] == 1295
