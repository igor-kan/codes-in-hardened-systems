"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1106."""

def spec_qubes_qrexec_policy_1106() -> dict:
    return {"system": "QubesOS", "spec_id": 1106, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1106():
    s = spec_qubes_qrexec_policy_1106()
    assert s["spec_id"] == 1106
