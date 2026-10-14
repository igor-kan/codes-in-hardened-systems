"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 236."""

def spec_qubes_qrexec_policy_236() -> dict:
    return {"system": "QubesOS", "spec_id": 236, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_236():
    s = spec_qubes_qrexec_policy_236()
    assert s["spec_id"] == 236
