"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1407."""

def spec_qubes_dispvm_dispatch_1407() -> dict:
    return {"system": "QubesOS", "spec_id": 1407, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1407():
    s = spec_qubes_dispvm_dispatch_1407()
    assert s["spec_id"] == 1407
