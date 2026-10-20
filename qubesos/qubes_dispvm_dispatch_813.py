"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 813."""

def spec_qubes_dispvm_dispatch_813() -> dict:
    return {"system": "QubesOS", "spec_id": 813, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_813():
    s = spec_qubes_dispvm_dispatch_813()
    assert s["spec_id"] == 813
