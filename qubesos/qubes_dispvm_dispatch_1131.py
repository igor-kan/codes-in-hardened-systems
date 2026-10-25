"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1131."""

def spec_qubes_dispvm_dispatch_1131() -> dict:
    return {"system": "QubesOS", "spec_id": 1131, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1131():
    s = spec_qubes_dispvm_dispatch_1131()
    assert s["spec_id"] == 1131
