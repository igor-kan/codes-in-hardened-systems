"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1443."""

def spec_qubes_dispvm_dispatch_1443() -> dict:
    return {"system": "QubesOS", "spec_id": 1443, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1443():
    s = spec_qubes_dispvm_dispatch_1443()
    assert s["spec_id"] == 1443
