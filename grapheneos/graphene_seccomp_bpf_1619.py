"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1619."""

def spec_graphene_seccomp_bpf_1619() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1619, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1619():
    s = spec_graphene_seccomp_bpf_1619()
    assert s["spec_id"] == 1619
