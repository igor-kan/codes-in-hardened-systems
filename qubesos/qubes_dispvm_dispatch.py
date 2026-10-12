"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 27."""

def spec_qubes_dispvm_dispatch_27() -> dict:
    return {"system": "QubesOS", "spec_id": 27, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_27():
    s = spec_qubes_dispvm_dispatch_27()
    assert s["spec_id"] == 27
