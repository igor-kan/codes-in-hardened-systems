"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1377."""

def spec_qubes_dispvm_dispatch_1377() -> dict:
    return {"system": "QubesOS", "spec_id": 1377, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1377():
    s = spec_qubes_dispvm_dispatch_1377()
    assert s["spec_id"] == 1377
