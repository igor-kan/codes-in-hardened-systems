"""Specification for Qubes OS Qrexec RPC inter-VM isolation rule order 416."""

def spec_qubes_qrexec_policy_416() -> dict:
    return {"system": "QubesOS", "spec_id": 416, "source": "work-0", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_qrexec_policy_416():
    s = spec_qubes_qrexec_policy_416()
    assert s["spec_id"] == 416
