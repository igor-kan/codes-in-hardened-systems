"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 171."""

def spec_qubes_dispvm_dispatch_171() -> dict:
    return {"system": "QubesOS", "spec_id": 171, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_171():
    s = spec_qubes_dispvm_dispatch_171()
    assert s["spec_id"] == 171
