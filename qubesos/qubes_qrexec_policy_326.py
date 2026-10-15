"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 326."""

def spec_qubes_qrexec_policy_326() -> dict:
    return {"system": "QubesOS", "spec_id": 326, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_326():
    s = spec_qubes_qrexec_policy_326()
    assert s["spec_id"] == 326
