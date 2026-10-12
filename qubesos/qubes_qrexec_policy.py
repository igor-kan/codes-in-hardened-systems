"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 62."""

def spec_qubes_qrexec_policy_62() -> dict:
    return {"system": "QubesOS", "spec_id": 62, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_62():
    s = spec_qubes_qrexec_policy_62()
    assert s["spec_id"] == 62
