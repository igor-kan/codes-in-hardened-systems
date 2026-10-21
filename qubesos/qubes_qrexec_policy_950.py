"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 950."""

def spec_qubes_qrexec_policy_950() -> dict:
    return {"system": "QubesOS", "spec_id": 950, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_950():
    s = spec_qubes_qrexec_policy_950()
    assert s["spec_id"] == 950
