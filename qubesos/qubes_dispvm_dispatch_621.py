"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 621."""

def spec_qubes_dispvm_dispatch_621() -> dict:
    return {"system": "QubesOS", "spec_id": 621, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_621():
    s = spec_qubes_dispvm_dispatch_621()
    assert s["spec_id"] == 621
