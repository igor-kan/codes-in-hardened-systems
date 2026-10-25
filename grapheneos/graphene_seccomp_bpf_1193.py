"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1193."""

def spec_graphene_seccomp_bpf_1193() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1193, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1193():
    s = spec_graphene_seccomp_bpf_1193()
    assert s["spec_id"] == 1193
