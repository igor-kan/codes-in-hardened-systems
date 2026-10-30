"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1430."""

def spec_qubes_qrexec_policy_1430() -> dict:
    return {"system": "QubesOS", "spec_id": 1430, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1430():
    s = spec_qubes_qrexec_policy_1430()
    assert s["spec_id"] == 1430
