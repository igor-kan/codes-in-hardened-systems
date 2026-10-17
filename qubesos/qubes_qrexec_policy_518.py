"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 518."""

def spec_qubes_qrexec_policy_518() -> dict:
    return {"system": "QubesOS", "spec_id": 518, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_518():
    s = spec_qubes_qrexec_policy_518()
    assert s["spec_id"] == 518
