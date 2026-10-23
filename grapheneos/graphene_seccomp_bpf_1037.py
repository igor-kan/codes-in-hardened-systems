"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1037."""

def spec_graphene_seccomp_bpf_1037() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1037, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1037():
    s = spec_graphene_seccomp_bpf_1037()
    assert s["spec_id"] == 1037
