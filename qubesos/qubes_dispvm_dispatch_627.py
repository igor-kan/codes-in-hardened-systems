"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 627."""

def spec_qubes_dispvm_dispatch_627() -> dict:
    return {"system": "QubesOS", "spec_id": 627, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_627():
    s = spec_qubes_dispvm_dispatch_627()
    assert s["spec_id"] == 627
