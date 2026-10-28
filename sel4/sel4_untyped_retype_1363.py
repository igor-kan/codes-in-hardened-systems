"""Specification for seL4 untyped memory retyping capability constraint order 1363."""

def spec_sel4_untyped_retype_1363() -> dict:
    return {"system": "seL4", "spec_id": 1363, "cap_rights": 0x07, "cnode_depth": 32, "badge": 83}

def test_spec_sel4_untyped_retype_1363():
    s = spec_sel4_untyped_retype_1363()
    assert s["spec_id"] == 1363
