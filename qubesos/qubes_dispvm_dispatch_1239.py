"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1239."""

def spec_qubes_dispvm_dispatch_1239() -> dict:
    return {"system": "QubesOS", "spec_id": 1239, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1239():
    s = spec_qubes_dispvm_dispatch_1239()
    assert s["spec_id"] == 1239
