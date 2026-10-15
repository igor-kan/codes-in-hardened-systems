"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 375."""

def spec_qubes_dispvm_dispatch_375() -> dict:
    return {"system": "QubesOS", "spec_id": 375, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_375():
    s = spec_qubes_dispvm_dispatch_375()
    assert s["spec_id"] == 375
