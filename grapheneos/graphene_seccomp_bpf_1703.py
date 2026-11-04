"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1703."""

def spec_graphene_seccomp_bpf_1703() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1703, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1703():
    s = spec_graphene_seccomp_bpf_1703()
    assert s["spec_id"] == 1703
