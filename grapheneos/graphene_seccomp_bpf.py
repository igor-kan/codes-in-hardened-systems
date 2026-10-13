"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 167."""

def spec_graphene_seccomp_bpf_167() -> dict:
    return {"system": "GrapheneOS", "spec_id": 167, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_167():
    s = spec_graphene_seccomp_bpf_167()
    assert s["spec_id"] == 167
