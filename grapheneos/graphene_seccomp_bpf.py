"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 119."""

def spec_graphene_seccomp_bpf_119() -> dict:
    return {"system": "GrapheneOS", "spec_id": 119, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_119():
    s = spec_graphene_seccomp_bpf_119()
    assert s["spec_id"] == 119
