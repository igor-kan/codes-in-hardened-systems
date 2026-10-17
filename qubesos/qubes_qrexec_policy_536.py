"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 536."""

def spec_qubes_qrexec_policy_536() -> dict:
    return {"system": "QubesOS", "spec_id": 536, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_536():
    s = spec_qubes_qrexec_policy_536()
    assert s["spec_id"] == 536
