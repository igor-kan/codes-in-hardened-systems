"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 147."""

def spec_qubes_dispvm_dispatch_147() -> dict:
    return {"system": "QubesOS", "spec_id": 147, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_147():
    s = spec_qubes_dispvm_dispatch_147()
    assert s["spec_id"] == 147
