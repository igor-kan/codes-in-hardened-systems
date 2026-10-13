"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 177."""

def spec_qubes_dispvm_dispatch_177() -> dict:
    return {"system": "QubesOS", "spec_id": 177, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_177():
    s = spec_qubes_dispvm_dispatch_177()
    assert s["spec_id"] == 177
