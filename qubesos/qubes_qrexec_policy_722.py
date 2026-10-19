"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 722."""

def spec_qubes_qrexec_policy_722() -> dict:
    return {"system": "QubesOS", "spec_id": 722, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_722():
    s = spec_qubes_qrexec_policy_722()
    assert s["spec_id"] == 722
