"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 224."""

def spec_qubes_qrexec_policy_224() -> dict:
    return {"system": "QubesOS", "spec_id": 224, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_224():
    s = spec_qubes_qrexec_policy_224()
    assert s["spec_id"] == 224
