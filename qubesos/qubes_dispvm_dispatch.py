"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 117."""

def spec_qubes_dispvm_dispatch_117() -> dict:
    return {"system": "QubesOS", "spec_id": 117, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_117():
    s = spec_qubes_dispvm_dispatch_117()
    assert s["spec_id"] == 117
