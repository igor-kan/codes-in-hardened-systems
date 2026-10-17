"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 525."""

def spec_qubes_dispvm_dispatch_525() -> dict:
    return {"system": "QubesOS", "spec_id": 525, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_525():
    s = spec_qubes_dispvm_dispatch_525()
    assert s["spec_id"] == 525
