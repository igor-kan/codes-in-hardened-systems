"""Specification for seL4 untyped memory retyping capability constraint order 1159."""

def spec_sel4_untyped_retype_1159() -> dict:
    return {"system": "seL4", "spec_id": 1159, "cap_rights": 0x07, "cnode_depth": 32, "badge": 135}

def test_spec_sel4_untyped_retype_1159():
    s = spec_sel4_untyped_retype_1159()
    assert s["spec_id"] == 1159
