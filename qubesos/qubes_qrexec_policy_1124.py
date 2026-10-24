"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1124."""

def spec_qubes_qrexec_policy_1124() -> dict:
    return {"system": "QubesOS", "spec_id": 1124, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1124():
    s = spec_qubes_qrexec_policy_1124()
    assert s["spec_id"] == 1124
