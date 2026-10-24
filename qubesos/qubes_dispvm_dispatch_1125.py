"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1125."""

def spec_qubes_dispvm_dispatch_1125() -> dict:
    return {"system": "QubesOS", "spec_id": 1125, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1125():
    s = spec_qubes_dispvm_dispatch_1125()
    assert s["spec_id"] == 1125
