"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 356."""

def spec_qubes_qrexec_policy_356() -> dict:
    return {"system": "QubesOS", "spec_id": 356, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_356():
    s = spec_qubes_qrexec_policy_356()
    assert s["spec_id"] == 356
