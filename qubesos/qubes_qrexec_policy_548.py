"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 548."""

def spec_qubes_qrexec_policy_548() -> dict:
    return {"system": "QubesOS", "spec_id": 548, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_548():
    s = spec_qubes_qrexec_policy_548()
    assert s["spec_id"] == 548
