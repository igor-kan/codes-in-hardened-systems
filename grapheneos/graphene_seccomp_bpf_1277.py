"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1277."""

def spec_graphene_seccomp_bpf_1277() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1277, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1277():
    s = spec_graphene_seccomp_bpf_1277()
    assert s["spec_id"] == 1277
