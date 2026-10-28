"""Specification for seL4 untyped memory retyping capability constraint order 1333."""

def spec_sel4_untyped_retype_1333() -> dict:
    return {"system": "seL4", "spec_id": 1333, "cap_rights": 0x07, "cnode_depth": 32, "badge": 53}

def test_spec_sel4_untyped_retype_1333():
    s = spec_sel4_untyped_retype_1333()
    assert s["spec_id"] == 1333
