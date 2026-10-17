"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 530."""

def spec_qubes_qrexec_policy_530() -> dict:
    return {"system": "QubesOS", "spec_id": 530, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_530():
    s = spec_qubes_qrexec_policy_530()
    assert s["spec_id"] == 530
