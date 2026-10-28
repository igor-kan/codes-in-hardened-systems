"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1331."""

def spec_graphene_seccomp_bpf_1331() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1331, "quarantine_slabs": 4, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1331():
    s = spec_graphene_seccomp_bpf_1331()
    assert s["spec_id"] == 1331
