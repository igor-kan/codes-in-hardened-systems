"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 542."""

def spec_qubes_qrexec_policy_542() -> dict:
    return {"system": "QubesOS", "spec_id": 542, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_542():
    s = spec_qubes_qrexec_policy_542()
    assert s["spec_id"] == 542
