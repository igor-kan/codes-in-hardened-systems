"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1221."""

def spec_qubes_dispvm_dispatch_1221() -> dict:
    return {"system": "QubesOS", "spec_id": 1221, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1221():
    s = spec_qubes_dispvm_dispatch_1221()
    assert s["spec_id"] == 1221
