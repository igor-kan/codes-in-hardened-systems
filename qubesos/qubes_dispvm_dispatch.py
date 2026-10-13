"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 129."""

def spec_qubes_dispvm_dispatch_129() -> dict:
    return {"system": "QubesOS", "spec_id": 129, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_129():
    s = spec_qubes_dispvm_dispatch_129()
    assert s["spec_id"] == 129
