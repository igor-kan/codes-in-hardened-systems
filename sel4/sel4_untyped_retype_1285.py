"""Specification for seL4 untyped memory retyping capability constraint order 1285."""

def spec_sel4_untyped_retype_1285() -> dict:
    return {"system": "seL4", "spec_id": 1285, "cap_rights": 0x07, "cnode_depth": 32, "badge": 5}

def test_spec_sel4_untyped_retype_1285():
    s = spec_sel4_untyped_retype_1285()
    assert s["spec_id"] == 1285
