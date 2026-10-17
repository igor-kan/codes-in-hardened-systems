"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 527."""

def spec_graphene_seccomp_bpf_527() -> dict:
    return {"system": "GrapheneOS", "spec_id": 527, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_527():
    s = spec_graphene_seccomp_bpf_527()
    assert s["spec_id"] == 527
