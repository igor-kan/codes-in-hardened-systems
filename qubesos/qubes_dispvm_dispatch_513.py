"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 513."""

def spec_qubes_dispvm_dispatch_513() -> dict:
    return {"system": "QubesOS", "spec_id": 513, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_513():
    s = spec_qubes_dispvm_dispatch_513()
    assert s["spec_id"] == 513
