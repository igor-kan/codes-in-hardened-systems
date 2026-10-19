"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 741."""

def spec_qubes_dispvm_dispatch_741() -> dict:
    return {"system": "QubesOS", "spec_id": 741, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_741():
    s = spec_qubes_dispvm_dispatch_741()
    assert s["spec_id"] == 741
