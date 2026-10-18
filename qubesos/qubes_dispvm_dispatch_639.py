"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 639."""

def spec_qubes_dispvm_dispatch_639() -> dict:
    return {"system": "QubesOS", "spec_id": 639, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_639():
    s = spec_qubes_dispvm_dispatch_639()
    assert s["spec_id"] == 639
