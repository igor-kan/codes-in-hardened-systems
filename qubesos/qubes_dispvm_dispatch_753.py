"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 753."""

def spec_qubes_dispvm_dispatch_753() -> dict:
    return {"system": "QubesOS", "spec_id": 753, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_753():
    s = spec_qubes_dispvm_dispatch_753()
    assert s["spec_id"] == 753
