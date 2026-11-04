"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1707."""

def spec_qubes_dispvm_dispatch_1707() -> dict:
    return {"system": "QubesOS", "spec_id": 1707, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1707():
    s = spec_qubes_dispvm_dispatch_1707()
    assert s["spec_id"] == 1707
