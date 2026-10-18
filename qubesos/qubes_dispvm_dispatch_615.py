"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 615."""

def spec_qubes_dispvm_dispatch_615() -> dict:
    return {"system": "QubesOS", "spec_id": 615, "source": "work-3", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_615():
    s = spec_qubes_dispvm_dispatch_615()
    assert s["spec_id"] == 615
