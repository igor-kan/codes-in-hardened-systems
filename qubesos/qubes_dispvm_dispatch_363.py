"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 363."""

def spec_qubes_dispvm_dispatch_363() -> dict:
    return {"system": "QubesOS", "spec_id": 363, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_363():
    s = spec_qubes_dispvm_dispatch_363()
    assert s["spec_id"] == 363
