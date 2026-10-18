"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 620."""

def spec_qubes_qrexec_policy_620() -> dict:
    return {"system": "QubesOS", "spec_id": 620, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_620():
    s = spec_qubes_qrexec_policy_620()
    assert s["spec_id"] == 620
