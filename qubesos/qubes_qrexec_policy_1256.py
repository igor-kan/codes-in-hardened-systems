"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1256."""

def spec_qubes_qrexec_policy_1256() -> dict:
    return {"system": "QubesOS", "spec_id": 1256, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1256():
    s = spec_qubes_qrexec_policy_1256()
    assert s["spec_id"] == 1256
