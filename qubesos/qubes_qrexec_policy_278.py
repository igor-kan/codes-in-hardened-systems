"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 278."""

def spec_qubes_qrexec_policy_278() -> dict:
    return {"system": "QubesOS", "spec_id": 278, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_278():
    s = spec_qubes_qrexec_policy_278()
    assert s["spec_id"] == 278
