"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 122."""

def spec_qubes_qrexec_policy_122() -> dict:
    return {"system": "QubesOS", "spec_id": 122, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_122():
    s = spec_qubes_qrexec_policy_122()
    assert s["spec_id"] == 122
