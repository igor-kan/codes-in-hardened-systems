"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 141."""

def spec_qubes_dispvm_dispatch_141() -> dict:
    return {"system": "QubesOS", "spec_id": 141, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_141():
    s = spec_qubes_dispvm_dispatch_141()
    assert s["spec_id"] == 141
