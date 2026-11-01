"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1541."""

def spec_graphene_seccomp_bpf_1541() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1541, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1541():
    s = spec_graphene_seccomp_bpf_1541()
    assert s["spec_id"] == 1541
