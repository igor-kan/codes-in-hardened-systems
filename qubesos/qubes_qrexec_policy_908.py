"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 908."""

def spec_qubes_qrexec_policy_908() -> dict:
    return {"system": "QubesOS", "spec_id": 908, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_908():
    s = spec_qubes_qrexec_policy_908()
    assert s["spec_id"] == 908
