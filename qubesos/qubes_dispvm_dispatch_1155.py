"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1155."""

def spec_qubes_dispvm_dispatch_1155() -> dict:
    return {"system": "QubesOS", "spec_id": 1155, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1155():
    s = spec_qubes_dispvm_dispatch_1155()
    assert s["spec_id"] == 1155
