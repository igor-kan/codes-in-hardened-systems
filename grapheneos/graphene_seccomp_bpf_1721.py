"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1721."""

def spec_graphene_seccomp_bpf_1721() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1721, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1721():
    s = spec_graphene_seccomp_bpf_1721()
    assert s["spec_id"] == 1721
