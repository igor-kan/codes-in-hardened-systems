"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1403."""

def spec_graphene_seccomp_bpf_1403() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1403, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1403():
    s = spec_graphene_seccomp_bpf_1403()
    assert s["spec_id"] == 1403
