"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 272."""

def spec_qubes_qrexec_policy_272() -> dict:
    return {"system": "QubesOS", "spec_id": 272, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_272():
    s = spec_qubes_qrexec_policy_272()
    assert s["spec_id"] == 272
