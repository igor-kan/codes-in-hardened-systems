"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1793."""

def spec_graphene_seccomp_bpf_1793() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1793, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1793():
    s = spec_graphene_seccomp_bpf_1793()
    assert s["spec_id"] == 1793
