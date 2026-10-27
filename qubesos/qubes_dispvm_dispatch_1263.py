"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1263."""

def spec_qubes_dispvm_dispatch_1263() -> dict:
    return {"system": "QubesOS", "spec_id": 1263, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1263():
    s = spec_qubes_dispvm_dispatch_1263()
    assert s["spec_id"] == 1263
