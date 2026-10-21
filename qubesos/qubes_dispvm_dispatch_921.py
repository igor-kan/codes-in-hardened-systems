"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 921."""

def spec_qubes_dispvm_dispatch_921() -> dict:
    return {"system": "QubesOS", "spec_id": 921, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_921():
    s = spec_qubes_dispvm_dispatch_921()
    assert s["spec_id"] == 921
