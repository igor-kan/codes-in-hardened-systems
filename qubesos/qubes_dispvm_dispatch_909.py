"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 909."""

def spec_qubes_dispvm_dispatch_909() -> dict:
    return {"system": "QubesOS", "spec_id": 909, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_909():
    s = spec_qubes_dispvm_dispatch_909()
    assert s["spec_id"] == 909
