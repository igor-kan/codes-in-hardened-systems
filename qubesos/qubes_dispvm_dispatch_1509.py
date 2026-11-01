"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1509."""

def spec_qubes_dispvm_dispatch_1509() -> dict:
    return {"system": "QubesOS", "spec_id": 1509, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1509():
    s = spec_qubes_dispvm_dispatch_1509()
    assert s["spec_id"] == 1509
