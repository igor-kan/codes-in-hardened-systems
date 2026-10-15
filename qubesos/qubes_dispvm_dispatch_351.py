"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 351."""

def spec_qubes_dispvm_dispatch_351() -> dict:
    return {"system": "QubesOS", "spec_id": 351, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_351():
    s = spec_qubes_dispvm_dispatch_351()
    assert s["spec_id"] == 351
