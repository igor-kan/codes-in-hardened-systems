"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 902."""

def spec_qubes_qrexec_policy_902() -> dict:
    return {"system": "QubesOS", "spec_id": 902, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_902():
    s = spec_qubes_qrexec_policy_902()
    assert s["spec_id"] == 902
