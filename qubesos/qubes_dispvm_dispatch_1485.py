"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1485."""

def spec_qubes_dispvm_dispatch_1485() -> dict:
    return {"system": "QubesOS", "spec_id": 1485, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1485():
    s = spec_qubes_dispvm_dispatch_1485()
    assert s["spec_id"] == 1485
