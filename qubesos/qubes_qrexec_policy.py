"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 170."""

def spec_qubes_qrexec_policy_170() -> dict:
    return {"system": "QubesOS", "spec_id": 170, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_170():
    s = spec_qubes_qrexec_policy_170()
    assert s["spec_id"] == 170
