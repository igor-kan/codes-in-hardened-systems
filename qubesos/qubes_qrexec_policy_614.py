"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 614."""

def spec_qubes_qrexec_policy_614() -> dict:
    return {"system": "QubesOS", "spec_id": 614, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_614():
    s = spec_qubes_qrexec_policy_614()
    assert s["spec_id"] == 614
