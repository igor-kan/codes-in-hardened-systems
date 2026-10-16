"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 405."""

def spec_qubes_dispvm_dispatch_405() -> dict:
    return {"system": "QubesOS", "spec_id": 405, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_405():
    s = spec_qubes_dispvm_dispatch_405()
    assert s["spec_id"] == 405
