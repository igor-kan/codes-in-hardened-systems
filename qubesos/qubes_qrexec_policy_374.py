"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 374."""

def spec_qubes_qrexec_policy_374() -> dict:
    return {"system": "QubesOS", "spec_id": 374, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_374():
    s = spec_qubes_qrexec_policy_374()
    assert s["spec_id"] == 374
