"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1649."""

def spec_graphene_seccomp_bpf_1649() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1649, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1649():
    s = spec_graphene_seccomp_bpf_1649()
    assert s["spec_id"] == 1649
