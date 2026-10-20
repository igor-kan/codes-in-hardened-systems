"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 836."""

def spec_qubes_qrexec_policy_836() -> dict:
    return {"system": "QubesOS", "spec_id": 836, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_836():
    s = spec_qubes_qrexec_policy_836()
    assert s["spec_id"] == 836
