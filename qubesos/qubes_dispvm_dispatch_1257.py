"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1257."""

def spec_qubes_dispvm_dispatch_1257() -> dict:
    return {"system": "QubesOS", "spec_id": 1257, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1257():
    s = spec_qubes_dispvm_dispatch_1257()
    assert s["spec_id"] == 1257
