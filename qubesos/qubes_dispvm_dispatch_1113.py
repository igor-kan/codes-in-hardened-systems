"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1113."""

def spec_qubes_dispvm_dispatch_1113() -> dict:
    return {"system": "QubesOS", "spec_id": 1113, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1113():
    s = spec_qubes_dispvm_dispatch_1113()
    assert s["spec_id"] == 1113
