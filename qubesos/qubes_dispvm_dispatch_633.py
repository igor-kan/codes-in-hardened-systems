"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 633."""

def spec_qubes_dispvm_dispatch_633() -> dict:
    return {"system": "QubesOS", "spec_id": 633, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_633():
    s = spec_qubes_dispvm_dispatch_633()
    assert s["spec_id"] == 633
