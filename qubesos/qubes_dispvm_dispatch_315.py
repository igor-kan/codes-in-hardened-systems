"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 315."""

def spec_qubes_dispvm_dispatch_315() -> dict:
    return {"system": "QubesOS", "spec_id": 315, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_315():
    s = spec_qubes_dispvm_dispatch_315()
    assert s["spec_id"] == 315
