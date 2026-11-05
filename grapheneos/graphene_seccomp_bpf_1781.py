"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1781."""

def spec_graphene_seccomp_bpf_1781() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1781, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1781():
    s = spec_graphene_seccomp_bpf_1781()
    assert s["spec_id"] == 1781
