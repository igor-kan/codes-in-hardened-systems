"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 161."""

def spec_graphene_seccomp_bpf_161() -> dict:
    return {"system": "GrapheneOS", "spec_id": 161, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_161():
    s = spec_graphene_seccomp_bpf_161()
    assert s["spec_id"] == 161
