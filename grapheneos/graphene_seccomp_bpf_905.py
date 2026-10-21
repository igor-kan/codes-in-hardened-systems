"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 905."""

def spec_graphene_seccomp_bpf_905() -> dict:
    return {"system": "GrapheneOS", "spec_id": 905, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_905():
    s = spec_graphene_seccomp_bpf_905()
    assert s["spec_id"] == 905
