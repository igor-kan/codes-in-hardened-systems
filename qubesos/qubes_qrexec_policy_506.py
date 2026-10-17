"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 506."""

def spec_qubes_qrexec_policy_506() -> dict:
    return {"system": "QubesOS", "spec_id": 506, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_506():
    s = spec_qubes_qrexec_policy_506()
    assert s["spec_id"] == 506
