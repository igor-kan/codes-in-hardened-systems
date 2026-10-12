"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 57."""

def spec_qubes_dispvm_dispatch_57() -> dict:
    return {"system": "QubesOS", "spec_id": 57, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_57():
    s = spec_qubes_dispvm_dispatch_57()
    assert s["spec_id"] == 57
