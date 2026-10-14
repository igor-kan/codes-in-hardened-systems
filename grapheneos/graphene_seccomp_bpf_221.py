"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 221."""

def spec_graphene_seccomp_bpf_221() -> dict:
    return {"system": "GrapheneOS", "spec_id": 221, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_221():
    s = spec_graphene_seccomp_bpf_221()
    assert s["spec_id"] == 221
