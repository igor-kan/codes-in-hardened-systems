"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 206."""

def spec_qubes_qrexec_policy_206() -> dict:
    return {"system": "QubesOS", "spec_id": 206, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_206():
    s = spec_qubes_qrexec_policy_206()
    assert s["spec_id"] == 206
