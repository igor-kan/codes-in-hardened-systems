"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1040."""

def spec_qubes_qrexec_policy_1040() -> dict:
    return {"system": "QubesOS", "spec_id": 1040, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1040():
    s = spec_qubes_qrexec_policy_1040()
    assert s["spec_id"] == 1040
