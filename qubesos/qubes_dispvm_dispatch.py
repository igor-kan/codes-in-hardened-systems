"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 33."""

def spec_qubes_dispvm_dispatch_33() -> dict:
    return {"system": "QubesOS", "spec_id": 33, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_33():
    s = spec_qubes_dispvm_dispatch_33()
    assert s["spec_id"] == 33
