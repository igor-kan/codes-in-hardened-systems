"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 507."""

def spec_qubes_dispvm_dispatch_507() -> dict:
    return {"system": "QubesOS", "spec_id": 507, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_507():
    s = spec_qubes_dispvm_dispatch_507()
    assert s["spec_id"] == 507
