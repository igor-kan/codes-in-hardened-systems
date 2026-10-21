"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 944."""

def spec_qubes_qrexec_policy_944() -> dict:
    return {"system": "QubesOS", "spec_id": 944, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_944():
    s = spec_qubes_qrexec_policy_944()
    assert s["spec_id"] == 944
