"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 344."""

def spec_qubes_qrexec_policy_344() -> dict:
    return {"system": "QubesOS", "spec_id": 344, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_344():
    s = spec_qubes_qrexec_policy_344()
    assert s["spec_id"] == 344
