"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1605."""

def spec_qubes_dispvm_dispatch_1605() -> dict:
    return {"system": "QubesOS", "spec_id": 1605, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1605():
    s = spec_qubes_dispvm_dispatch_1605()
    assert s["spec_id"] == 1605
