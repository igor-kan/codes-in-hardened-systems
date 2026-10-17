"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 555."""

def spec_qubes_dispvm_dispatch_555() -> dict:
    return {"system": "QubesOS", "spec_id": 555, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_555():
    s = spec_qubes_dispvm_dispatch_555()
    assert s["spec_id"] == 555
