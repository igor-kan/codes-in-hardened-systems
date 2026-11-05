"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1749."""

def spec_qubes_dispvm_dispatch_1749() -> dict:
    return {"system": "QubesOS", "spec_id": 1749, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1749():
    s = spec_qubes_dispvm_dispatch_1749()
    assert s["spec_id"] == 1749
