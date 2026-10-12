"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 8."""

def spec_qubes_qrexec_policy_8() -> dict:
    return {"system": "QubesOS", "spec_id": 8, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_8():
    s = spec_qubes_qrexec_policy_8()
    assert s["spec_id"] == 8
