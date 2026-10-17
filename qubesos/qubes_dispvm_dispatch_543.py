"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 543."""

def spec_qubes_dispvm_dispatch_543() -> dict:
    return {"system": "QubesOS", "spec_id": 543, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_543():
    s = spec_qubes_dispvm_dispatch_543()
    assert s["spec_id"] == 543
