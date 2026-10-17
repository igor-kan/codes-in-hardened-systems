"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 539."""

def spec_graphene_seccomp_bpf_539() -> dict:
    return {"system": "GrapheneOS", "spec_id": 539, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_539():
    s = spec_graphene_seccomp_bpf_539()
    assert s["spec_id"] == 539
