"""Specification for seL4 untyped memory retyping capability constraint order 301."""

def spec_sel4_untyped_retype_301() -> dict:
    return {"system": "seL4", "spec_id": 301, "cap_rights": 0x07, "cnode_depth": 32, "badge": 45}

def test_spec_sel4_untyped_retype_301():
    s = spec_sel4_untyped_retype_301()
    assert s["spec_id"] == 301
