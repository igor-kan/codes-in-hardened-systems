"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 549."""

def spec_qubes_dispvm_dispatch_549() -> dict:
    return {"system": "QubesOS", "spec_id": 549, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_549():
    s = spec_qubes_dispvm_dispatch_549()
    assert s["spec_id"] == 549
