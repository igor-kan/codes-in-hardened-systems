"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1322."""

def spec_qubes_qrexec_policy_1322() -> dict:
    return {"system": "QubesOS", "spec_id": 1322, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1322():
    s = spec_qubes_qrexec_policy_1322()
    assert s["spec_id"] == 1322
