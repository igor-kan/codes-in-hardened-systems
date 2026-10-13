"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 134."""

def spec_qubes_qrexec_policy_134() -> dict:
    return {"system": "QubesOS", "spec_id": 134, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_134():
    s = spec_qubes_qrexec_policy_134()
    assert s["spec_id"] == 134
