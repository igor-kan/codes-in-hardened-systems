"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1245."""

def spec_qubes_dispvm_dispatch_1245() -> dict:
    return {"system": "QubesOS", "spec_id": 1245, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1245():
    s = spec_qubes_dispvm_dispatch_1245()
    assert s["spec_id"] == 1245
