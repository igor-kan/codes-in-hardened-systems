"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 248."""

def spec_qubes_qrexec_policy_248() -> dict:
    return {"system": "QubesOS", "spec_id": 248, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_248():
    s = spec_qubes_qrexec_policy_248()
    assert s["spec_id"] == 248
