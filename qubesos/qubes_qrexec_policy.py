"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 140."""

def spec_qubes_qrexec_policy_140() -> dict:
    return {"system": "QubesOS", "spec_id": 140, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_140():
    s = spec_qubes_qrexec_policy_140()
    assert s["spec_id"] == 140
