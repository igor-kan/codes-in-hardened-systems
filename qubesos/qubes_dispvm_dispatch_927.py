"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 927."""

def spec_qubes_dispvm_dispatch_927() -> dict:
    return {"system": "QubesOS", "spec_id": 927, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_927():
    s = spec_qubes_dispvm_dispatch_927()
    assert s["spec_id"] == 927
