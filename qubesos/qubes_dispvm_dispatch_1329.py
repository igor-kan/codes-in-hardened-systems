"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1329."""

def spec_qubes_dispvm_dispatch_1329() -> dict:
    return {"system": "QubesOS", "spec_id": 1329, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1329():
    s = spec_qubes_dispvm_dispatch_1329()
    assert s["spec_id"] == 1329
