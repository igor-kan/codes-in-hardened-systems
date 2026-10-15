"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 357."""

def spec_qubes_dispvm_dispatch_357() -> dict:
    return {"system": "QubesOS", "spec_id": 357, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_357():
    s = spec_qubes_dispvm_dispatch_357()
    assert s["spec_id"] == 357
