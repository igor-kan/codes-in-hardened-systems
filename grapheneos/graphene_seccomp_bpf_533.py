"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 533."""

def spec_graphene_seccomp_bpf_533() -> dict:
    return {"system": "GrapheneOS", "spec_id": 533, "quarantine_slabs": 6, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_533():
    s = spec_graphene_seccomp_bpf_533()
    assert s["spec_id"] == 533
