"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 273."""

def spec_qubes_dispvm_dispatch_273() -> dict:
    return {"system": "QubesOS", "spec_id": 273, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_273():
    s = spec_qubes_dispvm_dispatch_273()
    assert s["spec_id"] == 273
