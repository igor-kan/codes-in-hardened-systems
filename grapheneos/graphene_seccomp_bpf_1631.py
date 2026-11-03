"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1631."""

def spec_graphene_seccomp_bpf_1631() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1631, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1631():
    s = spec_graphene_seccomp_bpf_1631()
    assert s["spec_id"] == 1631
