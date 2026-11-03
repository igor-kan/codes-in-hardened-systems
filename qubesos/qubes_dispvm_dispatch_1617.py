"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1617."""

def spec_qubes_dispvm_dispatch_1617() -> dict:
    return {"system": "QubesOS", "spec_id": 1617, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1617():
    s = spec_qubes_dispvm_dispatch_1617()
    assert s["spec_id"] == 1617
