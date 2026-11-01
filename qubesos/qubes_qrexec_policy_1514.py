"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1514."""

def spec_qubes_qrexec_policy_1514() -> dict:
    return {"system": "QubesOS", "spec_id": 1514, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1514():
    s = spec_qubes_qrexec_policy_1514()
    assert s["spec_id"] == 1514
