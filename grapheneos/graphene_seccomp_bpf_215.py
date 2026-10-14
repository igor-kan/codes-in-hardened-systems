"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 215."""

def spec_graphene_seccomp_bpf_215() -> dict:
    return {"system": "GrapheneOS", "spec_id": 215, "quarantine_slabs": 8, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_215():
    s = spec_graphene_seccomp_bpf_215()
    assert s["spec_id"] == 215
