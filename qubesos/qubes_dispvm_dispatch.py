"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 15."""

def spec_qubes_dispvm_dispatch_15() -> dict:
    return {"system": "QubesOS", "spec_id": 15, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_15():
    s = spec_qubes_dispvm_dispatch_15()
    assert s["spec_id"] == 15
