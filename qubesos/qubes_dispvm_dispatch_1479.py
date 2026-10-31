"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1479."""

def spec_qubes_dispvm_dispatch_1479() -> dict:
    return {"system": "QubesOS", "spec_id": 1479, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1479():
    s = spec_qubes_dispvm_dispatch_1479()
    assert s["spec_id"] == 1479
