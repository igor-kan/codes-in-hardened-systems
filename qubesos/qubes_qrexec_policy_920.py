"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 920."""

def spec_qubes_qrexec_policy_920() -> dict:
    return {"system": "QubesOS", "spec_id": 920, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_920():
    s = spec_qubes_qrexec_policy_920()
    assert s["spec_id"] == 920
