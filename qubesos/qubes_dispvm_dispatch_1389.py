"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1389."""

def spec_qubes_dispvm_dispatch_1389() -> dict:
    return {"system": "QubesOS", "spec_id": 1389, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1389():
    s = spec_qubes_dispvm_dispatch_1389()
    assert s["spec_id"] == 1389
