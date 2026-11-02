"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1562."""

def spec_qubes_qrexec_policy_1562() -> dict:
    return {"system": "QubesOS", "spec_id": 1562, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1562():
    s = spec_qubes_qrexec_policy_1562()
    assert s["spec_id"] == 1562
