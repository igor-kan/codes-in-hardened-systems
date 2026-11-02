"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1575."""

def spec_qubes_dispvm_dispatch_1575() -> dict:
    return {"system": "QubesOS", "spec_id": 1575, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1575():
    s = spec_qubes_dispvm_dispatch_1575()
    assert s["spec_id"] == 1575
