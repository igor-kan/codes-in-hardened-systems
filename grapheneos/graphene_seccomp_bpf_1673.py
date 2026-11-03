"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1673."""

def spec_graphene_seccomp_bpf_1673() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1673, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1673():
    s = spec_graphene_seccomp_bpf_1673()
    assert s["spec_id"] == 1673
