"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 705."""

def spec_qubes_dispvm_dispatch_705() -> dict:
    return {"system": "QubesOS", "spec_id": 705, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_705():
    s = spec_qubes_dispvm_dispatch_705()
    assert s["spec_id"] == 705
