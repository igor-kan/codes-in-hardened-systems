"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1425."""

def spec_qubes_dispvm_dispatch_1425() -> dict:
    return {"system": "QubesOS", "spec_id": 1425, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1425():
    s = spec_qubes_dispvm_dispatch_1425()
    assert s["spec_id"] == 1425
