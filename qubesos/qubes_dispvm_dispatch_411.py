"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 411."""

def spec_qubes_dispvm_dispatch_411() -> dict:
    return {"system": "QubesOS", "spec_id": 411, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_411():
    s = spec_qubes_dispvm_dispatch_411()
    assert s["spec_id"] == 411
