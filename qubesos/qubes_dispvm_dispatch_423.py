"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 423."""

def spec_qubes_dispvm_dispatch_423() -> dict:
    return {"system": "QubesOS", "spec_id": 423, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_423():
    s = spec_qubes_dispvm_dispatch_423()
    assert s["spec_id"] == 423
