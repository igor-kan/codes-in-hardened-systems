"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 632."""

def spec_qubes_qrexec_policy_632() -> dict:
    return {"system": "QubesOS", "spec_id": 632, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_632():
    s = spec_qubes_qrexec_policy_632()
    assert s["spec_id"] == 632
