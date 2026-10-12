"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 38."""

def spec_qubes_qrexec_policy_38() -> dict:
    return {"system": "QubesOS", "spec_id": 38, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_38():
    s = spec_qubes_qrexec_policy_38()
    assert s["spec_id"] == 38
