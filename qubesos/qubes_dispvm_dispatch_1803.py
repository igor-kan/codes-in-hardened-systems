"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1803."""

def spec_qubes_dispvm_dispatch_1803() -> dict:
    return {"system": "QubesOS", "spec_id": 1803, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1803():
    s = spec_qubes_dispvm_dispatch_1803()
    assert s["spec_id"] == 1803
