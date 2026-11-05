"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1797."""

def spec_qubes_dispvm_dispatch_1797() -> dict:
    return {"system": "QubesOS", "spec_id": 1797, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1797():
    s = spec_qubes_dispvm_dispatch_1797()
    assert s["spec_id"] == 1797
