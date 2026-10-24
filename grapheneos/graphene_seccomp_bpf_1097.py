"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1097."""

def spec_graphene_seccomp_bpf_1097() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1097, "quarantine_slabs": 10, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1097():
    s = spec_graphene_seccomp_bpf_1097()
    assert s["spec_id"] == 1097
