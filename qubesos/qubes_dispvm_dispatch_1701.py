"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1701."""

def spec_qubes_dispvm_dispatch_1701() -> dict:
    return {"system": "QubesOS", "spec_id": 1701, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1701():
    s = spec_qubes_dispvm_dispatch_1701()
    assert s["spec_id"] == 1701
