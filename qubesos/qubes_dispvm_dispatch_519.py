"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 519."""

def spec_qubes_dispvm_dispatch_519() -> dict:
    return {"system": "QubesOS", "spec_id": 519, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_519():
    s = spec_qubes_dispvm_dispatch_519()
    assert s["spec_id"] == 519
