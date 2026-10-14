"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 212."""

def spec_qubes_qrexec_policy_212() -> dict:
    return {"system": "QubesOS", "spec_id": 212, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_212():
    s = spec_qubes_qrexec_policy_212()
    assert s["spec_id"] == 212
