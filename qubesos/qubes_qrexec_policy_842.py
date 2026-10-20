"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 842."""

def spec_qubes_qrexec_policy_842() -> dict:
    return {"system": "QubesOS", "spec_id": 842, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_842():
    s = spec_qubes_qrexec_policy_842()
    assert s["spec_id"] == 842
