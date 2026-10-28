"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1367."""

def spec_graphene_seccomp_bpf_1367() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1367, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1367():
    s = spec_graphene_seccomp_bpf_1367()
    assert s["spec_id"] == 1367
