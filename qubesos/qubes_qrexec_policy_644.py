"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 644."""

def spec_qubes_qrexec_policy_644() -> dict:
    return {"system": "QubesOS", "spec_id": 644, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_644():
    s = spec_qubes_qrexec_policy_644()
    assert s["spec_id"] == 644
