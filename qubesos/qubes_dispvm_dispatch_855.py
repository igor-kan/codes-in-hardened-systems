"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 855."""

def spec_qubes_dispvm_dispatch_855() -> dict:
    return {"system": "QubesOS", "spec_id": 855, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_855():
    s = spec_qubes_dispvm_dispatch_855()
    assert s["spec_id"] == 855
