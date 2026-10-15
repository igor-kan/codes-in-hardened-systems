"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 380."""

def spec_qubes_qrexec_policy_380() -> dict:
    return {"system": "QubesOS", "spec_id": 380, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_380():
    s = spec_qubes_qrexec_policy_380()
    assert s["spec_id"] == 380
