"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 44."""

def spec_qubes_qrexec_policy_44() -> dict:
    return {"system": "QubesOS", "spec_id": 44, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_44():
    s = spec_qubes_qrexec_policy_44()
    assert s["spec_id"] == 44
