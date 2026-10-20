"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 801."""

def spec_qubes_dispvm_dispatch_801() -> dict:
    return {"system": "QubesOS", "spec_id": 801, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_801():
    s = spec_qubes_dispvm_dispatch_801()
    assert s["spec_id"] == 801
