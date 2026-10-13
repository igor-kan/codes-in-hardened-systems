"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 146."""

def spec_qubes_qrexec_policy_146() -> dict:
    return {"system": "QubesOS", "spec_id": 146, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_146():
    s = spec_qubes_qrexec_policy_146()
    assert s["spec_id"] == 146
