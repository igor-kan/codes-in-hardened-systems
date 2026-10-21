"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 917."""

def spec_graphene_seccomp_bpf_917() -> dict:
    return {"system": "GrapheneOS", "spec_id": 917, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_917():
    s = spec_graphene_seccomp_bpf_917()
    assert s["spec_id"] == 917
