"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 819."""

def spec_qubes_dispvm_dispatch_819() -> dict:
    return {"system": "QubesOS", "spec_id": 819, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_819():
    s = spec_qubes_dispvm_dispatch_819()
    assert s["spec_id"] == 819
