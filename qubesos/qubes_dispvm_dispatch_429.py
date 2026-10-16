"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 429."""

def spec_qubes_dispvm_dispatch_429() -> dict:
    return {"system": "QubesOS", "spec_id": 429, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_429():
    s = spec_qubes_dispvm_dispatch_429()
    assert s["spec_id"] == 429
