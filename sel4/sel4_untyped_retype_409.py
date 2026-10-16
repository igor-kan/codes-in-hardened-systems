"""Specification for seL4 untyped memory retyping capability constraint order 409."""

def spec_sel4_untyped_retype_409() -> dict:
    return {"system": "seL4", "spec_id": 409, "cap_rights": 0x07, "cnode_depth": 32, "badge": 153}

def test_spec_sel4_untyped_retype_409():
    s = spec_sel4_untyped_retype_409()
    assert s["spec_id"] == 409
