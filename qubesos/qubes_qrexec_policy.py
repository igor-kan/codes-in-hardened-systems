"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 86."""

def spec_qubes_qrexec_policy_86() -> dict:
    return {"system": "QubesOS", "spec_id": 86, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_86():
    s = spec_qubes_qrexec_policy_86()
    assert s["spec_id"] == 86
