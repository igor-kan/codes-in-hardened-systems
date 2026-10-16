"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 422."""

def spec_qubes_qrexec_policy_422() -> dict:
    return {"system": "QubesOS", "spec_id": 422, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_422():
    s = spec_qubes_qrexec_policy_422()
    assert s["spec_id"] == 422
