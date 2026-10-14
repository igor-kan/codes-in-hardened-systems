"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 230."""

def spec_qubes_qrexec_policy_230() -> dict:
    return {"system": "QubesOS", "spec_id": 230, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_230():
    s = spec_qubes_qrexec_policy_230()
    assert s["spec_id"] == 230
