"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1209."""

def spec_qubes_dispvm_dispatch_1209() -> dict:
    return {"system": "QubesOS", "spec_id": 1209, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1209():
    s = spec_qubes_dispvm_dispatch_1209()
    assert s["spec_id"] == 1209
