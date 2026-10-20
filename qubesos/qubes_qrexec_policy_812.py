"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 812."""

def spec_qubes_qrexec_policy_812() -> dict:
    return {"system": "QubesOS", "spec_id": 812, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_812():
    s = spec_qubes_qrexec_policy_812()
    assert s["spec_id"] == 812
