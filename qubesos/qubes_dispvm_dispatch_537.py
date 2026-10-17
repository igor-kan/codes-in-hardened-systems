"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 537."""

def spec_qubes_dispvm_dispatch_537() -> dict:
    return {"system": "QubesOS", "spec_id": 537, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_537():
    s = spec_qubes_dispvm_dispatch_537()
    assert s["spec_id"] == 537
