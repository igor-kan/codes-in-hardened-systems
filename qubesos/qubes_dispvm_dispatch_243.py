"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 243."""

def spec_qubes_dispvm_dispatch_243() -> dict:
    return {"system": "QubesOS", "spec_id": 243, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_243():
    s = spec_qubes_dispvm_dispatch_243()
    assert s["spec_id"] == 243
