"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 50."""

def spec_qubes_qrexec_policy_50() -> dict:
    return {"system": "QubesOS", "spec_id": 50, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_50():
    s = spec_qubes_qrexec_policy_50()
    assert s["spec_id"] == 50
