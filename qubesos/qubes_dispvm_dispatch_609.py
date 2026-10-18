"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 609."""

def spec_qubes_dispvm_dispatch_609() -> dict:
    return {"system": "QubesOS", "spec_id": 609, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_609():
    s = spec_qubes_dispvm_dispatch_609()
    assert s["spec_id"] == 609
