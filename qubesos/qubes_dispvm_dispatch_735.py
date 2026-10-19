"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 735."""

def spec_qubes_dispvm_dispatch_735() -> dict:
    return {"system": "QubesOS", "spec_id": 735, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_735():
    s = spec_qubes_dispvm_dispatch_735()
    assert s["spec_id"] == 735
