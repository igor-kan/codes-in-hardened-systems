"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 14."""

def spec_qubes_qrexec_policy_14() -> dict:
    return {"system": "QubesOS", "spec_id": 14, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_14():
    s = spec_qubes_qrexec_policy_14()
    assert s["spec_id"] == 14
