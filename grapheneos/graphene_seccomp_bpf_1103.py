"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1103."""

def spec_graphene_seccomp_bpf_1103() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1103, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1103():
    s = spec_graphene_seccomp_bpf_1103()
    assert s["spec_id"] == 1103
