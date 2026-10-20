"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 837."""

def spec_qubes_dispvm_dispatch_837() -> dict:
    return {"system": "QubesOS", "spec_id": 837, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_837():
    s = spec_qubes_dispvm_dispatch_837()
    assert s["spec_id"] == 837
