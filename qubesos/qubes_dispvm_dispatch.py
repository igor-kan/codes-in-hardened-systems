"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 21."""

def spec_qubes_dispvm_dispatch_21() -> dict:
    return {"system": "QubesOS", "spec_id": 21, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_21():
    s = spec_qubes_dispvm_dispatch_21()
    assert s["spec_id"] == 21
