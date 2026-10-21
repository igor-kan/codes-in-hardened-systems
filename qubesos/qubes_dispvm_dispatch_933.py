"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 933."""

def spec_qubes_dispvm_dispatch_933() -> dict:
    return {"system": "QubesOS", "spec_id": 933, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_933():
    s = spec_qubes_dispvm_dispatch_933()
    assert s["spec_id"] == 933
