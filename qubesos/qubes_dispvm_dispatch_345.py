"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 345."""

def spec_qubes_dispvm_dispatch_345() -> dict:
    return {"system": "QubesOS", "spec_id": 345, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_345():
    s = spec_qubes_dispvm_dispatch_345()
    assert s["spec_id"] == 345
