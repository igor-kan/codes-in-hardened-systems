"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 128."""

def spec_qubes_qrexec_policy_128() -> dict:
    return {"system": "QubesOS", "spec_id": 128, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_128():
    s = spec_qubes_qrexec_policy_128()
    assert s["spec_id"] == 128
