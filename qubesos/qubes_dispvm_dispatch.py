"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 123."""

def spec_qubes_dispvm_dispatch_123() -> dict:
    return {"system": "QubesOS", "spec_id": 123, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_123():
    s = spec_qubes_dispvm_dispatch_123()
    assert s["spec_id"] == 123
