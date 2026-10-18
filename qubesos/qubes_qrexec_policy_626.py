"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 626."""

def spec_qubes_qrexec_policy_626() -> dict:
    return {"system": "QubesOS", "spec_id": 626, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_626():
    s = spec_qubes_qrexec_policy_626()
    assert s["spec_id"] == 626
