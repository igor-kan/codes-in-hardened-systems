"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1065."""

def spec_qubes_dispvm_dispatch_1065() -> dict:
    return {"system": "QubesOS", "spec_id": 1065, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1065():
    s = spec_qubes_dispvm_dispatch_1065()
    assert s["spec_id"] == 1065
