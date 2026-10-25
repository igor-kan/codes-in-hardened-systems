"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1139."""

def spec_graphene_seccomp_bpf_1139() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1139, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1139():
    s = spec_graphene_seccomp_bpf_1139()
    assert s["spec_id"] == 1139
