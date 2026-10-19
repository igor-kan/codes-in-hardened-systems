"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 734."""

def spec_qubes_qrexec_policy_734() -> dict:
    return {"system": "QubesOS", "spec_id": 734, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_734():
    s = spec_qubes_qrexec_policy_734()
    assert s["spec_id"] == 734
