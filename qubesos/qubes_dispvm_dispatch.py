"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 81."""

def spec_qubes_dispvm_dispatch_81() -> dict:
    return {"system": "QubesOS", "spec_id": 81, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_81():
    s = spec_qubes_dispvm_dispatch_81()
    assert s["spec_id"] == 81
