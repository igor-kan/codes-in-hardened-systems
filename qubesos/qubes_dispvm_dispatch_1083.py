"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1083."""

def spec_qubes_dispvm_dispatch_1083() -> dict:
    return {"system": "QubesOS", "spec_id": 1083, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1083():
    s = spec_qubes_dispvm_dispatch_1083()
    assert s["spec_id"] == 1083
