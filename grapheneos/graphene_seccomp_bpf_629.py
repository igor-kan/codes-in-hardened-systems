"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 629."""

def spec_graphene_seccomp_bpf_629() -> dict:
    return {"system": "GrapheneOS", "spec_id": 629, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_629():
    s = spec_graphene_seccomp_bpf_629()
    assert s["spec_id"] == 629
