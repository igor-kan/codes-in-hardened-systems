"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 245."""

def spec_graphene_seccomp_bpf_245() -> dict:
    return {"system": "GrapheneOS", "spec_id": 245, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_245():
    s = spec_graphene_seccomp_bpf_245()
    assert s["spec_id"] == 245
