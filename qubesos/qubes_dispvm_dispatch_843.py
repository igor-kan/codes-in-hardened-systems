"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 843."""

def spec_qubes_dispvm_dispatch_843() -> dict:
    return {"system": "QubesOS", "spec_id": 843, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_843():
    s = spec_qubes_dispvm_dispatch_843()
    assert s["spec_id"] == 843
