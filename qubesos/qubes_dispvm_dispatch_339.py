"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 339."""

def spec_qubes_dispvm_dispatch_339() -> dict:
    return {"system": "QubesOS", "spec_id": 339, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_339():
    s = spec_qubes_dispvm_dispatch_339()
    assert s["spec_id"] == 339
