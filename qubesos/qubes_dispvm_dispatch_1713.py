"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1713."""

def spec_qubes_dispvm_dispatch_1713() -> dict:
    return {"system": "QubesOS", "spec_id": 1713, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1713():
    s = spec_qubes_dispvm_dispatch_1713()
    assert s["spec_id"] == 1713
