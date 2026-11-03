"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1679."""

def spec_graphene_seccomp_bpf_1679() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1679, "quarantine_slabs": 16, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1679():
    s = spec_graphene_seccomp_bpf_1679()
    assert s["spec_id"] == 1679
