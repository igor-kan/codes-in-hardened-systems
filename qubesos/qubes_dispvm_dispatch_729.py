"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 729."""

def spec_qubes_dispvm_dispatch_729() -> dict:
    return {"system": "QubesOS", "spec_id": 729, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_729():
    s = spec_qubes_dispvm_dispatch_729()
    assert s["spec_id"] == 729
