"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 254."""

def spec_qubes_qrexec_policy_254() -> dict:
    return {"system": "QubesOS", "spec_id": 254, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_254():
    s = spec_qubes_qrexec_policy_254()
    assert s["spec_id"] == 254
