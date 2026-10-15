"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 303."""

def spec_qubes_dispvm_dispatch_303() -> dict:
    return {"system": "QubesOS", "spec_id": 303, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_303():
    s = spec_qubes_dispvm_dispatch_303()
    assert s["spec_id"] == 303
