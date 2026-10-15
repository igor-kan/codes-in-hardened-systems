"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 308."""

def spec_qubes_qrexec_policy_308() -> dict:
    return {"system": "QubesOS", "spec_id": 308, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_308():
    s = spec_qubes_qrexec_policy_308()
    assert s["spec_id"] == 308
