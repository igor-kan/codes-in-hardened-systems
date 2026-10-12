"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 51."""

def spec_qubes_dispvm_dispatch_51() -> dict:
    return {"system": "QubesOS", "spec_id": 51, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_51():
    s = spec_qubes_dispvm_dispatch_51()
    assert s["spec_id"] == 51
