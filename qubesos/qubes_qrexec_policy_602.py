"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 602."""

def spec_qubes_qrexec_policy_602() -> dict:
    return {"system": "QubesOS", "spec_id": 602, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_602():
    s = spec_qubes_qrexec_policy_602()
    assert s["spec_id"] == 602
