"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 80."""

def spec_qubes_qrexec_policy_80() -> dict:
    return {"system": "QubesOS", "spec_id": 80, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_80():
    s = spec_qubes_qrexec_policy_80()
    assert s["spec_id"] == 80
