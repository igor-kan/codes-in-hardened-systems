"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1371."""

def spec_qubes_dispvm_dispatch_1371() -> dict:
    return {"system": "QubesOS", "spec_id": 1371, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1371():
    s = spec_qubes_dispvm_dispatch_1371()
    assert s["spec_id"] == 1371
