"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 434."""

def spec_qubes_qrexec_policy_434() -> dict:
    return {"system": "QubesOS", "spec_id": 434, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_434():
    s = spec_qubes_qrexec_policy_434()
    assert s["spec_id"] == 434
