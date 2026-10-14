"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 219."""

def spec_qubes_dispvm_dispatch_219() -> dict:
    return {"system": "QubesOS", "spec_id": 219, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_219():
    s = spec_qubes_dispvm_dispatch_219()
    assert s["spec_id"] == 219
