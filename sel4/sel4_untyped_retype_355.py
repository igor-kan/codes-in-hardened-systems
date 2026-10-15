"""Specification for seL4 untyped memory retyping capability constraint order 355."""

def spec_sel4_untyped_retype_355() -> dict:
    return {"system": "seL4", "spec_id": 355, "cap_rights": 0x07, "cnode_depth": 32, "badge": 99}

def test_spec_sel4_untyped_retype_355():
    s = spec_sel4_untyped_retype_355()
    assert s["spec_id"] == 355
