"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 807."""

def spec_qubes_dispvm_dispatch_807() -> dict:
    return {"system": "QubesOS", "spec_id": 807, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_807():
    s = spec_qubes_dispvm_dispatch_807()
    assert s["spec_id"] == 807
