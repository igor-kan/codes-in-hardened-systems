"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 135."""

def spec_qubes_dispvm_dispatch_135() -> dict:
    return {"system": "QubesOS", "spec_id": 135, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_135():
    s = spec_qubes_dispvm_dispatch_135()
    assert s["spec_id"] == 135
