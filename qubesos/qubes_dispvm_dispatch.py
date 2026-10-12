"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 9."""

def spec_qubes_dispvm_dispatch_9() -> dict:
    return {"system": "QubesOS", "spec_id": 9, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_9():
    s = spec_qubes_dispvm_dispatch_9()
    assert s["spec_id"] == 9
