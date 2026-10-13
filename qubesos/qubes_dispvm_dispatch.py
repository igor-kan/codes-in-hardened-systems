"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 165."""

def spec_qubes_dispvm_dispatch_165() -> dict:
    return {"system": "QubesOS", "spec_id": 165, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_165():
    s = spec_qubes_dispvm_dispatch_165()
    assert s["spec_id"] == 165
