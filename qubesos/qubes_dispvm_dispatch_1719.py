"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1719."""

def spec_qubes_dispvm_dispatch_1719() -> dict:
    return {"system": "QubesOS", "spec_id": 1719, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1719():
    s = spec_qubes_dispvm_dispatch_1719()
    assert s["spec_id"] == 1719
