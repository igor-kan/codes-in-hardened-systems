"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 75."""

def spec_qubes_dispvm_dispatch_75() -> dict:
    return {"system": "QubesOS", "spec_id": 75, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_75():
    s = spec_qubes_dispvm_dispatch_75()
    assert s["spec_id"] == 75
