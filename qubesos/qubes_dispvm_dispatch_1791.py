"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1791."""

def spec_qubes_dispvm_dispatch_1791() -> dict:
    return {"system": "QubesOS", "spec_id": 1791, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1791():
    s = spec_qubes_dispvm_dispatch_1791()
    assert s["spec_id"] == 1791
