"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 849."""

def spec_qubes_dispvm_dispatch_849() -> dict:
    return {"system": "QubesOS", "spec_id": 849, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_849():
    s = spec_qubes_dispvm_dispatch_849()
    assert s["spec_id"] == 849
