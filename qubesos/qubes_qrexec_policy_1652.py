"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1652."""

def spec_qubes_qrexec_policy_1652() -> dict:
    return {"system": "QubesOS", "spec_id": 1652, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1652():
    s = spec_qubes_qrexec_policy_1652()
    assert s["spec_id"] == 1652
