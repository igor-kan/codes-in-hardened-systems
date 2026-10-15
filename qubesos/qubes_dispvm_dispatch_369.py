"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 369."""

def spec_qubes_dispvm_dispatch_369() -> dict:
    return {"system": "QubesOS", "spec_id": 369, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_369():
    s = spec_qubes_dispvm_dispatch_369()
    assert s["spec_id"] == 369
