"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 261."""

def spec_qubes_dispvm_dispatch_261() -> dict:
    return {"system": "QubesOS", "spec_id": 261, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_261():
    s = spec_qubes_dispvm_dispatch_261()
    assert s["spec_id"] == 261
