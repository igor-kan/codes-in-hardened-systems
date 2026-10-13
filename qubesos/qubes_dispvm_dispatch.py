"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 105."""

def spec_qubes_dispvm_dispatch_105() -> dict:
    return {"system": "QubesOS", "spec_id": 105, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_105():
    s = spec_qubes_dispvm_dispatch_105()
    assert s["spec_id"] == 105
