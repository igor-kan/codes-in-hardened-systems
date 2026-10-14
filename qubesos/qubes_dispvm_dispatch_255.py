"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 255."""

def spec_qubes_dispvm_dispatch_255() -> dict:
    return {"system": "QubesOS", "spec_id": 255, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_255():
    s = spec_qubes_dispvm_dispatch_255()
    assert s["spec_id"] == 255
