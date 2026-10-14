"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 225."""

def spec_qubes_dispvm_dispatch_225() -> dict:
    return {"system": "QubesOS", "spec_id": 225, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_225():
    s = spec_qubes_dispvm_dispatch_225()
    assert s["spec_id"] == 225
