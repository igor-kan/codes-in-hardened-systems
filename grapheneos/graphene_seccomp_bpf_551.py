"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 551."""

def spec_graphene_seccomp_bpf_551() -> dict:
    return {"system": "GrapheneOS", "spec_id": 551, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_551():
    s = spec_graphene_seccomp_bpf_551()
    assert s["spec_id"] == 551
