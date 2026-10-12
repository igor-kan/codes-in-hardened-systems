"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 41."""

def spec_graphene_seccomp_bpf_41() -> dict:
    return {"system": "GrapheneOS", "spec_id": 41, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_41():
    s = spec_graphene_seccomp_bpf_41()
    assert s["spec_id"] == 41
