"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 926."""

def spec_qubes_qrexec_policy_926() -> dict:
    return {"system": "QubesOS", "spec_id": 926, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_926():
    s = spec_qubes_qrexec_policy_926()
    assert s["spec_id"] == 926
