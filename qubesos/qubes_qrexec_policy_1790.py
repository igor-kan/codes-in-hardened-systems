"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1790."""

def spec_qubes_qrexec_policy_1790() -> dict:
    return {"system": "QubesOS", "spec_id": 1790, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1790():
    s = spec_qubes_qrexec_policy_1790()
    assert s["spec_id"] == 1790
