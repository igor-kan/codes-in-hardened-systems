"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 728."""

def spec_qubes_qrexec_policy_728() -> dict:
    return {"system": "QubesOS", "spec_id": 728, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_728():
    s = spec_qubes_qrexec_policy_728()
    assert s["spec_id"] == 728
