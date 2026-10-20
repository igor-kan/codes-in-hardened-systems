"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 824."""

def spec_qubes_qrexec_policy_824() -> dict:
    return {"system": "QubesOS", "spec_id": 824, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_824():
    s = spec_qubes_qrexec_policy_824()
    assert s["spec_id"] == 824
