"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1508."""

def spec_qubes_qrexec_policy_1508() -> dict:
    return {"system": "QubesOS", "spec_id": 1508, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1508():
    s = spec_qubes_qrexec_policy_1508()
    assert s["spec_id"] == 1508
