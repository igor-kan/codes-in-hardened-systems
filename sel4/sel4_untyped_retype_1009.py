"""Specification for seL4 untyped memory retyping capability constraint order 1009."""

def spec_sel4_untyped_retype_1009() -> dict:
    return {"system": "seL4", "spec_id": 1009, "cap_rights": 0x07, "cnode_depth": 32, "badge": 241}

def test_spec_sel4_untyped_retype_1009():
    s = spec_sel4_untyped_retype_1009()
    assert s["spec_id"] == 1009
