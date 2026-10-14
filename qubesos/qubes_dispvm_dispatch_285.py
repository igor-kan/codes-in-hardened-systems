"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 285."""

def spec_qubes_dispvm_dispatch_285() -> dict:
    return {"system": "QubesOS", "spec_id": 285, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_285():
    s = spec_qubes_dispvm_dispatch_285()
    assert s["spec_id"] == 285
