"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 711."""

def spec_qubes_dispvm_dispatch_711() -> dict:
    return {"system": "QubesOS", "spec_id": 711, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_711():
    s = spec_qubes_dispvm_dispatch_711()
    assert s["spec_id"] == 711
