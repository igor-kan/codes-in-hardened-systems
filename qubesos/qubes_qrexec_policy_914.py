"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 914."""

def spec_qubes_qrexec_policy_914() -> dict:
    return {"system": "QubesOS", "spec_id": 914, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_914():
    s = spec_qubes_qrexec_policy_914()
    assert s["spec_id"] == 914
