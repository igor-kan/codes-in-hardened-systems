"""Specification for seL4 untyped memory retyping capability constraint order 1327."""

def spec_sel4_untyped_retype_1327() -> dict:
    return {"system": "seL4", "spec_id": 1327, "cap_rights": 0x07, "cnode_depth": 32, "badge": 47}

def test_spec_sel4_untyped_retype_1327():
    s = spec_sel4_untyped_retype_1327()
    assert s["spec_id"] == 1327
