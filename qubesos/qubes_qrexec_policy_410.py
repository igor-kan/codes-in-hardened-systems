"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 410."""

def spec_qubes_qrexec_policy_410() -> dict:
    return {"system": "QubesOS", "spec_id": 410, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_410():
    s = spec_qubes_qrexec_policy_410()
    assert s["spec_id"] == 410
