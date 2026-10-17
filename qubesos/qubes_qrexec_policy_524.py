"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 524."""

def spec_qubes_qrexec_policy_524() -> dict:
    return {"system": "QubesOS", "spec_id": 524, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_524():
    s = spec_qubes_qrexec_policy_524()
    assert s["spec_id"] == 524
