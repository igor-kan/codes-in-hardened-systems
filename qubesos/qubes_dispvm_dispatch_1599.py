"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1599."""

def spec_qubes_dispvm_dispatch_1599() -> dict:
    return {"system": "QubesOS", "spec_id": 1599, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1599():
    s = spec_qubes_dispvm_dispatch_1599()
    assert s["spec_id"] == 1599
