"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 641."""

def spec_graphene_seccomp_bpf_641() -> dict:
    return {"system": "GrapheneOS", "spec_id": 641, "quarantine_slabs": 2, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_641():
    s = spec_graphene_seccomp_bpf_641()
    assert s["spec_id"] == 641
