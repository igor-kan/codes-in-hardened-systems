"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 309."""

def spec_qubes_dispvm_dispatch_309() -> dict:
    return {"system": "QubesOS", "spec_id": 309, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_309():
    s = spec_qubes_dispvm_dispatch_309()
    assert s["spec_id"] == 309
