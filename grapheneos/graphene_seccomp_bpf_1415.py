"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1415."""

def spec_graphene_seccomp_bpf_1415() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1415, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1415():
    s = spec_graphene_seccomp_bpf_1415()
    assert s["spec_id"] == 1415
