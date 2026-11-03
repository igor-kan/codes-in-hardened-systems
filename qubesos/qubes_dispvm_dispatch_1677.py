"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1677."""

def spec_qubes_dispvm_dispatch_1677() -> dict:
    return {"system": "QubesOS", "spec_id": 1677, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1677():
    s = spec_qubes_dispvm_dispatch_1677()
    assert s["spec_id"] == 1677
