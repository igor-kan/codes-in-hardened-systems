"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 710."""

def spec_qubes_qrexec_policy_710() -> dict:
    return {"system": "QubesOS", "spec_id": 710, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_710():
    s = spec_qubes_qrexec_policy_710()
    assert s["spec_id"] == 710
