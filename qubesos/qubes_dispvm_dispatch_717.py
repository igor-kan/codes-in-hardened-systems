"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 717."""

def spec_qubes_dispvm_dispatch_717() -> dict:
    return {"system": "QubesOS", "spec_id": 717, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_717():
    s = spec_qubes_dispvm_dispatch_717()
    assert s["spec_id"] == 717
