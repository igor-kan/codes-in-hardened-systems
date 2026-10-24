"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1089."""

def spec_qubes_dispvm_dispatch_1089() -> dict:
    return {"system": "QubesOS", "spec_id": 1089, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1089():
    s = spec_qubes_dispvm_dispatch_1089()
    assert s["spec_id"] == 1089
