"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 503."""

def spec_graphene_seccomp_bpf_503() -> dict:
    return {"system": "GrapheneOS", "spec_id": 503, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_503():
    s = spec_graphene_seccomp_bpf_503()
    assert s["spec_id"] == 503
