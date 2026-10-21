"""Specification for Qubes OS DisposableVM ephemeral session lifecycle order 945."""

def spec_qubes_dispvm_dispatch_945() -> dict:
    return {"system": "QubesOS", "spec_id": 945, "source": "work-1", "target": "vault", "action": "ask", "qrexec_service": "qubes.Filecopy"}

def test_spec_qubes_dispvm_dispatch_945():
    s = spec_qubes_dispvm_dispatch_945()
    assert s["spec_id"] == 945
