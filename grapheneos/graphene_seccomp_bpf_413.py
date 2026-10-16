"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 413."""

def spec_graphene_seccomp_bpf_413() -> dict:
    return {"system": "GrapheneOS", "spec_id": 413, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_413():
    s = spec_graphene_seccomp_bpf_413()
    assert s["spec_id"] == 413
