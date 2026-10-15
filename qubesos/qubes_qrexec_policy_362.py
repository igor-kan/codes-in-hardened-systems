"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 362."""

def spec_qubes_qrexec_policy_362() -> dict:
    return {"system": "QubesOS", "spec_id": 362, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_362():
    s = spec_qubes_qrexec_policy_362()
    assert s["spec_id"] == 362
