"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 333."""

def spec_qubes_dispvm_dispatch_333() -> dict:
    return {"system": "QubesOS", "spec_id": 333, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_333():
    s = spec_qubes_dispvm_dispatch_333()
    assert s["spec_id"] == 333
