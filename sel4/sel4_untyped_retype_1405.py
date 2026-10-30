"""Specification for seL4 untyped memory retyping capability constraint order 1405."""

def spec_sel4_untyped_retype_1405() -> dict:
    return {"system": "seL4", "spec_id": 1405, "cap_rights": 0x07, "cnode_depth": 32, "badge": 125}

def test_spec_sel4_untyped_retype_1405():
    s = spec_sel4_untyped_retype_1405()
    assert s["spec_id"] == 1405
