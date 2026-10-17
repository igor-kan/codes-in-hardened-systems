"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 554."""

def spec_qubes_qrexec_policy_554() -> dict:
    return {"system": "QubesOS", "spec_id": 554, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_554():
    s = spec_qubes_qrexec_policy_554()
    assert s["spec_id"] == 554
