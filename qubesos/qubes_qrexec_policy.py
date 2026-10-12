"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 68."""

def spec_qubes_qrexec_policy_68() -> dict:
    return {"system": "QubesOS", "spec_id": 68, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_68():
    s = spec_qubes_qrexec_policy_68()
    assert s["spec_id"] == 68
