"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 359."""

def spec_graphene_seccomp_bpf_359() -> dict:
    return {"system": "GrapheneOS", "spec_id": 359, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_359():
    s = spec_graphene_seccomp_bpf_359()
    assert s["spec_id"] == 359
