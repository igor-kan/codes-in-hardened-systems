"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 237."""

def spec_qubes_dispvm_dispatch_237() -> dict:
    return {"system": "QubesOS", "spec_id": 237, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_237():
    s = spec_qubes_dispvm_dispatch_237()
    assert s["spec_id"] == 237
