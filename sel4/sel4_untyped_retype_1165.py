"""Specification for seL4 untyped memory retyping capability constraint order 1165."""

def spec_sel4_untyped_retype_1165() -> dict:
    return {"system": "seL4", "spec_id": 1165, "cap_rights": 0x07, "cnode_depth": 32, "badge": 141}

def test_spec_sel4_untyped_retype_1165():
    s = spec_sel4_untyped_retype_1165()
    assert s["spec_id"] == 1165
