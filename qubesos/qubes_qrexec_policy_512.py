"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 512."""

def spec_qubes_qrexec_policy_512() -> dict:
    return {"system": "QubesOS", "spec_id": 512, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_512():
    s = spec_qubes_qrexec_policy_512()
    assert s["spec_id"] == 512
