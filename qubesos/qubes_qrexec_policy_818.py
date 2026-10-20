"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 818."""

def spec_qubes_qrexec_policy_818() -> dict:
    return {"system": "QubesOS", "spec_id": 818, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_818():
    s = spec_qubes_qrexec_policy_818()
    assert s["spec_id"] == 818
