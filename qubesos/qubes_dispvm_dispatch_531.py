"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 531."""

def spec_qubes_dispvm_dispatch_531() -> dict:
    return {"system": "QubesOS", "spec_id": 531, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_531():
    s = spec_qubes_dispvm_dispatch_531()
    assert s["spec_id"] == 531
