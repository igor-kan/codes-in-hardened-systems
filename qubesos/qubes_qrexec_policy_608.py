"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 608."""

def spec_qubes_qrexec_policy_608() -> dict:
    return {"system": "QubesOS", "spec_id": 608, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_608():
    s = spec_qubes_qrexec_policy_608()
    assert s["spec_id"] == 608
