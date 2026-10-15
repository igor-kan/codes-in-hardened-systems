"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 368."""

def spec_qubes_qrexec_policy_368() -> dict:
    return {"system": "QubesOS", "spec_id": 368, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_368():
    s = spec_qubes_qrexec_policy_368()
    assert s["spec_id"] == 368
