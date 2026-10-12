"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 63."""

def spec_qubes_dispvm_dispatch_63() -> dict:
    return {"system": "QubesOS", "spec_id": 63, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_63():
    s = spec_qubes_dispvm_dispatch_63()
    assert s["spec_id"] == 63
