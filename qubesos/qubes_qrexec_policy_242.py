"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 242."""

def spec_qubes_qrexec_policy_242() -> dict:
    return {"system": "QubesOS", "spec_id": 242, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_242():
    s = spec_qubes_qrexec_policy_242()
    assert s["spec_id"] == 242
