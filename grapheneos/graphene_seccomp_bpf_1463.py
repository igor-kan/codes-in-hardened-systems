"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1463."""

def spec_graphene_seccomp_bpf_1463() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1463, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1463():
    s = spec_graphene_seccomp_bpf_1463()
    assert s["spec_id"] == 1463
