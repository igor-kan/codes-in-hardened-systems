"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 417."""

def spec_qubes_dispvm_dispatch_417() -> dict:
    return {"system": "QubesOS", "spec_id": 417, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_417():
    s = spec_qubes_dispvm_dispatch_417()
    assert s["spec_id"] == 417
