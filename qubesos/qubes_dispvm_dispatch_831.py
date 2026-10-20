"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 831."""

def spec_qubes_dispvm_dispatch_831() -> dict:
    return {"system": "QubesOS", "spec_id": 831, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_831():
    s = spec_qubes_dispvm_dispatch_831()
    assert s["spec_id"] == 831
