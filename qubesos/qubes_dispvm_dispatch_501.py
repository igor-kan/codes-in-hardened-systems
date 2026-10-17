"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 501."""

def spec_qubes_dispvm_dispatch_501() -> dict:
    return {"system": "QubesOS", "spec_id": 501, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_501():
    s = spec_qubes_dispvm_dispatch_501()
    assert s["spec_id"] == 501
