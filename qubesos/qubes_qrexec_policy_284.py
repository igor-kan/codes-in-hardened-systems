"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 284."""

def spec_qubes_qrexec_policy_284() -> dict:
    return {"system": "QubesOS", "spec_id": 284, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_284():
    s = spec_qubes_qrexec_policy_284()
    assert s["spec_id"] == 284
