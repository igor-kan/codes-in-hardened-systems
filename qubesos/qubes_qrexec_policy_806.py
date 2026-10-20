"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 806."""

def spec_qubes_qrexec_policy_806() -> dict:
    return {"system": "QubesOS", "spec_id": 806, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_806():
    s = spec_qubes_qrexec_policy_806()
    assert s["spec_id"] == 806
