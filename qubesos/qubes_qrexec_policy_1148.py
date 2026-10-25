"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 1148."""

def spec_qubes_qrexec_policy_1148() -> dict:
    return {"system": "QubesOS", "spec_id": 1148, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_1148():
    s = spec_qubes_qrexec_policy_1148()
    assert s["spec_id"] == 1148
