"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1421."""

def spec_graphene_seccomp_bpf_1421() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1421, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1421():
    s = spec_graphene_seccomp_bpf_1421()
    assert s["spec_id"] == 1421
