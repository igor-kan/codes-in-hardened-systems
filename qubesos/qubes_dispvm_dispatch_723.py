"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 723."""

def spec_qubes_dispvm_dispatch_723() -> dict:
    return {"system": "QubesOS", "spec_id": 723, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_723():
    s = spec_qubes_dispvm_dispatch_723()
    assert s["spec_id"] == 723
