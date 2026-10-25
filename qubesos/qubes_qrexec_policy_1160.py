"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1160."""

def spec_qubes_qrexec_policy_1160() -> dict:
    return {"system": "QubesOS", "spec_id": 1160, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1160():
    s = spec_qubes_qrexec_policy_1160()
    assert s["spec_id"] == 1160
