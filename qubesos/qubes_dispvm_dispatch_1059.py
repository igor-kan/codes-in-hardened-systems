"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 1059."""

def spec_qubes_dispvm_dispatch_1059() -> dict:
    return {"system": "QubesOS", "spec_id": 1059, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_1059():
    s = spec_qubes_dispvm_dispatch_1059()
    assert s["spec_id"] == 1059
