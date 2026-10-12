"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 3."""

def spec_qubes_dispvm_dispatch_3() -> dict:
    return {"system": "QubesOS", "spec_id": 3, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_3():
    s = spec_qubes_dispvm_dispatch_3()
    assert s["spec_id"] == 3
