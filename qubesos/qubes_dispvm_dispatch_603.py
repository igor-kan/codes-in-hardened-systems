"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 603."""

def spec_qubes_dispvm_dispatch_603() -> dict:
    return {"system": "QubesOS", "spec_id": 603, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_603():
    s = spec_qubes_dispvm_dispatch_603()
    assert s["spec_id"] == 603
