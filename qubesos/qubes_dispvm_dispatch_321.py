"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 321."""

def spec_qubes_dispvm_dispatch_321() -> dict:
    return {"system": "QubesOS", "spec_id": 321, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_321():
    s = spec_qubes_dispvm_dispatch_321()
    assert s["spec_id"] == 321
