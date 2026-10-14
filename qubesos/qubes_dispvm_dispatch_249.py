"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 249."""

def spec_qubes_dispvm_dispatch_249() -> dict:
    return {"system": "QubesOS", "spec_id": 249, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_249():
    s = spec_qubes_dispvm_dispatch_249()
    assert s["spec_id"] == 249
