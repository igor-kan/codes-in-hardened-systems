"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 267."""

def spec_qubes_dispvm_dispatch_267() -> dict:
    return {"system": "QubesOS", "spec_id": 267, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_267():
    s = spec_qubes_dispvm_dispatch_267()
    assert s["spec_id"] == 267
