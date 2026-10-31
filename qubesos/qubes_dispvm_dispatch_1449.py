"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1449."""

def spec_qubes_dispvm_dispatch_1449() -> dict:
    return {"system": "QubesOS", "spec_id": 1449, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1449():
    s = spec_qubes_dispvm_dispatch_1449()
    assert s["spec_id"] == 1449
