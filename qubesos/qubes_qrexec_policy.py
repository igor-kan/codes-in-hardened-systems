"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 32."""

def spec_qubes_qrexec_policy_32() -> dict:
    return {"system": "QubesOS", "spec_id": 32, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_32():
    s = spec_qubes_qrexec_policy_32()
    assert s["spec_id"] == 32
