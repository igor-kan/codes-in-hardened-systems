"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1169."""

def spec_graphene_seccomp_bpf_1169() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1169, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1169():
    s = spec_graphene_seccomp_bpf_1169()
    assert s["spec_id"] == 1169
