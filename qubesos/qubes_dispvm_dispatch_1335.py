"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1335."""

def spec_qubes_dispvm_dispatch_1335() -> dict:
    return {"system": "QubesOS", "spec_id": 1335, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1335():
    s = spec_qubes_dispvm_dispatch_1335()
    assert s["spec_id"] == 1335
