"""Specification for seL4 untyped memory retyping capability constraint order 1513."""

def spec_sel4_untyped_retype_1513() -> dict:
    return {"system": "seL4", "spec_id": 1513, "cap_rights": 0x07, "cnode_depth": 32, "badge": 233}

def test_spec_sel4_untyped_retype_1513():
    s = spec_sel4_untyped_retype_1513()
    assert s["spec_id"] == 1513
