"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 83."""

def spec_graphene_seccomp_bpf_83() -> dict:
    return {"system": "GrapheneOS", "spec_id": 83, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_83():
    s = spec_graphene_seccomp_bpf_83()
    assert s["spec_id"] == 83
