"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1433."""

def spec_graphene_seccomp_bpf_1433() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1433, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1433():
    s = spec_graphene_seccomp_bpf_1433()
    assert s["spec_id"] == 1433
