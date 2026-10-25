"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1173."""

def spec_qubes_dispvm_dispatch_1173() -> dict:
    return {"system": "QubesOS", "spec_id": 1173, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1173():
    s = spec_qubes_dispvm_dispatch_1173()
    assert s["spec_id"] == 1173
