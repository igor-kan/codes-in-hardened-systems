"""Specification for seL4 untyped memory retyping capability constraint order 1189."""

def spec_sel4_untyped_retype_1189() -> dict:
    return {"system": "seL4", "spec_id": 1189, "cap_rights": 0x07, "cnode_depth": 32, "badge": 165}

def test_spec_sel4_untyped_retype_1189():
    s = spec_sel4_untyped_retype_1189()
    assert s["spec_id"] == 1189
