"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1305."""

def spec_qubes_dispvm_dispatch_1305() -> dict:
    return {"system": "QubesOS", "spec_id": 1305, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1305():
    s = spec_qubes_dispvm_dispatch_1305()
    assert s["spec_id"] == 1305
