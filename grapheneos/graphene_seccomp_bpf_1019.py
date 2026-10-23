"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1019."""

def spec_graphene_seccomp_bpf_1019() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1019, "quarantine_slabs": 12, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1019():
    s = spec_graphene_seccomp_bpf_1019()
    assert s["spec_id"] == 1019
