"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 201."""

def spec_qubes_dispvm_dispatch_201() -> dict:
    return {"system": "QubesOS", "spec_id": 201, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_201():
    s = spec_qubes_dispvm_dispatch_201()
    assert s["spec_id"] == 201
