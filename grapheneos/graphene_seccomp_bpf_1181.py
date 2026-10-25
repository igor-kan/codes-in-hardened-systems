"""Specification for GrapheneOS BPF seccomp system call whitelist filter order 1181."""

def spec_graphene_seccomp_bpf_1181() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1181, "quarantine_slabs": 14, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_seccomp_bpf_1181():
    s = spec_graphene_seccomp_bpf_1181()
    assert s["spec_id"] == 1181
