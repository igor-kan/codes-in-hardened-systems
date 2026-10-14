"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 279."""

def spec_qubes_dispvm_dispatch_279() -> dict:
    return {"system": "QubesOS", "spec_id": 279, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_279():
    s = spec_qubes_dispvm_dispatch_279()
    assert s["spec_id"] == 279
