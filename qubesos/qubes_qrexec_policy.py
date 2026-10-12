"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 26."""

def spec_qubes_qrexec_policy_26() -> dict:
    return {"system": "QubesOS", "spec_id": 26, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_26():
    s = spec_qubes_qrexec_policy_26()
    assert s["spec_id"] == 26
