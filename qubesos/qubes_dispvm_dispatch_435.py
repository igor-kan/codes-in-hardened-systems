"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 435."""

def spec_qubes_dispvm_dispatch_435() -> dict:
    return {"system": "QubesOS", "spec_id": 435, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_435():
    s = spec_qubes_dispvm_dispatch_435()
    assert s["spec_id"] == 435
