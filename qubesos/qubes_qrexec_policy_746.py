"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 746."""

def spec_qubes_qrexec_policy_746() -> dict:
    return {"system": "QubesOS", "spec_id": 746, "source": "work-2", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_746():
    s = spec_qubes_qrexec_policy_746()
    assert s["spec_id"] == 746
