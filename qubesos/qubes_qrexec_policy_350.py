"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 350."""

def spec_qubes_qrexec_policy_350() -> dict:
    return {"system": "QubesOS", "spec_id": 350, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_350():
    s = spec_qubes_qrexec_policy_350()
    assert s["spec_id"] == 350
