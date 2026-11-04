"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1712."""

def spec_qubes_qrexec_policy_1712() -> dict:
    return {"system": "QubesOS", "spec_id": 1712, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1712():
    s = spec_qubes_qrexec_policy_1712()
    assert s["spec_id"] == 1712
