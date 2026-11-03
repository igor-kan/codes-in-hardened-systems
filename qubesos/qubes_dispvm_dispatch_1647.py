"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1647."""

def spec_qubes_dispvm_dispatch_1647() -> dict:
    return {"system": "QubesOS", "spec_id": 1647, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1647():
    s = spec_qubes_dispvm_dispatch_1647()
    assert s["spec_id"] == 1647
