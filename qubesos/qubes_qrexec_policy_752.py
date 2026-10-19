"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 752."""

def spec_qubes_qrexec_policy_752() -> dict:
    return {"system": "QubesOS", "spec_id": 752, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_752():
    s = spec_qubes_qrexec_policy_752()
    assert s["spec_id"] == 752
