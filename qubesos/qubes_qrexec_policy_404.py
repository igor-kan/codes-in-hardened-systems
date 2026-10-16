"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 404."""

def spec_qubes_qrexec_policy_404() -> dict:
    return {"system": "QubesOS", "spec_id": 404, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_404():
    s = spec_qubes_qrexec_policy_404()
    assert s["spec_id"] == 404
