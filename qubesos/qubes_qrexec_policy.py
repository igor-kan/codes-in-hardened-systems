"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 176."""

def spec_qubes_qrexec_policy_176() -> dict:
    return {"system": "QubesOS", "spec_id": 176, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_176():
    s = spec_qubes_qrexec_policy_176()
    assert s["spec_id"] == 176
