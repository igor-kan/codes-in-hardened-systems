"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 111."""

def spec_qubes_dispvm_dispatch_111() -> dict:
    return {"system": "QubesOS", "spec_id": 111, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_111():
    s = spec_qubes_dispvm_dispatch_111()
    assert s["spec_id"] == 111
