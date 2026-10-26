"""Specification for seL4 untyped memory retyping capability constraint order 1225."""

def spec_sel4_untyped_retype_1225() -> dict:
    return {"system": "seL4", "spec_id": 1225, "cap_rights": 0x07, "cnode_depth": 32, "badge": 201}

def test_spec_sel4_untyped_retype_1225():
    s = spec_sel4_untyped_retype_1225()
    assert s["spec_id"] == 1225
