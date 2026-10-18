"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 617."""

def spec_graphene_seccomp_bpf_617() -> dict:
    return {"system": "GrapheneOS", "spec_id": 617, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_617():
    s = spec_graphene_seccomp_bpf_617()
    assert s["spec_id"] == 617
