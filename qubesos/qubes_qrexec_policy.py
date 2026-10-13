"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 104."""

def spec_qubes_qrexec_policy_104() -> dict:
    return {"system": "QubesOS", "spec_id": 104, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_104():
    s = spec_qubes_qrexec_policy_104()
    assert s["spec_id"] == 104
