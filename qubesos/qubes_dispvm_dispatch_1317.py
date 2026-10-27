"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1317."""

def spec_qubes_dispvm_dispatch_1317() -> dict:
    return {"system": "QubesOS", "spec_id": 1317, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1317():
    s = spec_qubes_dispvm_dispatch_1317()
    assert s["spec_id"] == 1317
