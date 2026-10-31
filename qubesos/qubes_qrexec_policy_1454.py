"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1454."""

def spec_qubes_qrexec_policy_1454() -> dict:
    return {"system": "QubesOS", "spec_id": 1454, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1454():
    s = spec_qubes_qrexec_policy_1454()
    assert s["spec_id"] == 1454
