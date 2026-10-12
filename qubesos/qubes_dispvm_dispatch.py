"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 39."""

def spec_qubes_dispvm_dispatch_39() -> dict:
    return {"system": "QubesOS", "spec_id": 39, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_39():
    s = spec_qubes_dispvm_dispatch_39()
    assert s["spec_id"] == 39
