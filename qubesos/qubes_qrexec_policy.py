"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 110."""

def spec_qubes_qrexec_policy_110() -> dict:
    return {"system": "QubesOS", "spec_id": 110, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_110():
    s = spec_qubes_qrexec_policy_110()
    assert s["spec_id"] == 110
