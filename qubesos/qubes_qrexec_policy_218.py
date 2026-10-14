"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 218."""

def spec_qubes_qrexec_policy_218() -> dict:
    return {"system": "QubesOS", "spec_id": 218, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_218():
    s = spec_qubes_qrexec_policy_218()
    assert s["spec_id"] == 218
