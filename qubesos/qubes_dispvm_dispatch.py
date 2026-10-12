"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 69."""

def spec_qubes_dispvm_dispatch_69() -> dict:
    return {"system": "QubesOS", "spec_id": 69, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_69():
    s = spec_qubes_dispvm_dispatch_69()
    assert s["spec_id"] == 69
