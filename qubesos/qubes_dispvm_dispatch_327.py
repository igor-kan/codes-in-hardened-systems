"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 327."""

def spec_qubes_dispvm_dispatch_327() -> dict:
    return {"system": "QubesOS", "spec_id": 327, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_327():
    s = spec_qubes_dispvm_dispatch_327()
    assert s["spec_id"] == 327
