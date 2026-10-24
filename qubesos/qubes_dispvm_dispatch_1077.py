"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1077."""

def spec_qubes_dispvm_dispatch_1077() -> dict:
    return {"system": "QubesOS", "spec_id": 1077, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1077():
    s = spec_qubes_dispvm_dispatch_1077()
    assert s["spec_id"] == 1077
