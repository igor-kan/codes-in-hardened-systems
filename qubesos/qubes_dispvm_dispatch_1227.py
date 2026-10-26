"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1227."""

def spec_qubes_dispvm_dispatch_1227() -> dict:
    return {"system": "QubesOS", "spec_id": 1227, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1227():
    s = spec_qubes_dispvm_dispatch_1227()
    assert s["spec_id"] == 1227
