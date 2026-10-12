"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 20."""

def spec_qubes_qrexec_policy_20() -> dict:
    return {"system": "QubesOS", "spec_id": 20, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_20():
    s = spec_qubes_qrexec_policy_20()
    assert s["spec_id"] == 20
