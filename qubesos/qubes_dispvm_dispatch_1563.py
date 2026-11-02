"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1563."""

def spec_qubes_dispvm_dispatch_1563() -> dict:
    return {"system": "QubesOS", "spec_id": 1563, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1563():
    s = spec_qubes_dispvm_dispatch_1563()
    assert s["spec_id"] == 1563
