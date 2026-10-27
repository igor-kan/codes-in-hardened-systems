"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1262."""

def spec_qubes_qrexec_policy_1262() -> dict:
    return {"system": "QubesOS", "spec_id": 1262, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1262():
    s = spec_qubes_qrexec_policy_1262()
    assert s["spec_id"] == 1262
