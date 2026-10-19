"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 716."""

def spec_qubes_qrexec_policy_716() -> dict:
    return {"system": "QubesOS", "spec_id": 716, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_716():
    s = spec_qubes_qrexec_policy_716()
    assert s["spec_id"] == 716
