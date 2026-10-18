"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 645."""

def spec_qubes_dispvm_dispatch_645() -> dict:
    return {"system": "QubesOS", "spec_id": 645, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_645():
    s = spec_qubes_dispvm_dispatch_645()
    assert s["spec_id"] == 645
