"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 428."""

def spec_qubes_qrexec_policy_428() -> dict:
    return {"system": "QubesOS", "spec_id": 428, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_428():
    s = spec_qubes_qrexec_policy_428()
    assert s["spec_id"] == 428
