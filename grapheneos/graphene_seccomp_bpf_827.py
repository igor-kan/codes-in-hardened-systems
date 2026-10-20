"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 827."""

def spec_graphene_seccomp_bpf_827() -> dict:
    return {"system": "GrapheneOS", "spec_id": 827, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_827():
    s = spec_graphene_seccomp_bpf_827()
    assert s["spec_id"] == 827
