"""Specification for seL4 untyped memory retyping capability constraint order 1741."""

def spec_sel4_untyped_retype_1741() -> dict:
    return {"system": "seL4", "spec_id": 1741, "cap_rights": 0x07, "cnode_depth": 32, "badge": 205}

def test_spec_sel4_untyped_retype_1741():
    s = spec_sel4_untyped_retype_1741()
    assert s["spec_id"] == 1741
