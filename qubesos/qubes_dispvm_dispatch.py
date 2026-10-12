"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 45."""

def spec_qubes_dispvm_dispatch_45() -> dict:
    return {"system": "QubesOS", "spec_id": 45, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_45():
    s = spec_qubes_dispvm_dispatch_45()
    assert s["spec_id"] == 45
