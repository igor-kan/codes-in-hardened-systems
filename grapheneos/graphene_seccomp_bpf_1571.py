"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1571."""

def spec_graphene_seccomp_bpf_1571() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1571, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1571():
    s = spec_graphene_seccomp_bpf_1571()
    assert s["spec_id"] == 1571
