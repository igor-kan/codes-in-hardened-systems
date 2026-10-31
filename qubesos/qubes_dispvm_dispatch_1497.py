"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1497."""

def spec_qubes_dispvm_dispatch_1497() -> dict:
    return {"system": "QubesOS", "spec_id": 1497, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1497():
    s = spec_qubes_dispvm_dispatch_1497()
    assert s["spec_id"] == 1497
