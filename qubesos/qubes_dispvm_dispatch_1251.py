"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1251."""

def spec_qubes_dispvm_dispatch_1251() -> dict:
    return {"system": "QubesOS", "spec_id": 1251, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1251():
    s = spec_qubes_dispvm_dispatch_1251()
    assert s["spec_id"] == 1251
