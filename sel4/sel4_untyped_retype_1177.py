"""Specification for seL4 untyped memory retyping capability constraint order 1177."""

def spec_sel4_untyped_retype_1177() -> dict:
    return {"system": "seL4", "spec_id": 1177, "cap_rights": 0x07, "cnode_depth": 32, "badge": 153}

def test_spec_sel4_untyped_retype_1177():
    s = spec_sel4_untyped_retype_1177()
    assert s["spec_id"] == 1177
