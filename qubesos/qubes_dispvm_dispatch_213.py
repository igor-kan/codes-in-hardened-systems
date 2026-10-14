"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 213."""

def spec_qubes_dispvm_dispatch_213() -> dict:
    return {"system": "QubesOS", "spec_id": 213, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_213():
    s = spec_qubes_dispvm_dispatch_213()
    assert s["spec_id"] == 213
