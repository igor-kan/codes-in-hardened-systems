"""Specification for seL4 untyped memory retyping capability constraint order 745."""

def spec_sel4_untyped_retype_745() -> dict:
    return {"system": "seL4", "spec_id": 745, "cap_rights": 0x07, "cnode_depth": 32, "badge": 233}

def test_spec_sel4_untyped_retype_745():
    s = spec_sel4_untyped_retype_745()
    assert s["spec_id"] == 745
