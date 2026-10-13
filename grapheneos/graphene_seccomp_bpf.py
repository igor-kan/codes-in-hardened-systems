"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 107."""

def spec_graphene_seccomp_bpf_107() -> dict:
    return {"system": "GrapheneOS", "spec_id": 107, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_107():
    s = spec_graphene_seccomp_bpf_107()
    assert s["spec_id"] == 107
