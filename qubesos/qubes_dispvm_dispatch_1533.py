"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1533."""

def spec_qubes_dispvm_dispatch_1533() -> dict:
    return {"system": "QubesOS", "spec_id": 1533, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1533():
    s = spec_qubes_dispvm_dispatch_1533()
    assert s["spec_id"] == 1533
