"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 353."""

def spec_graphene_seccomp_bpf_353() -> dict:
    return {"system": "GrapheneOS", "spec_id": 353, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_353():
    s = spec_graphene_seccomp_bpf_353()
    assert s["spec_id"] == 353
