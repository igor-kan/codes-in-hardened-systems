"""Specification for seL4 untyped memory retyping capability constraint order 1525."""

def spec_sel4_untyped_retype_1525() -> dict:
    return {"system": "seL4", "spec_id": 1525, "cap_rights": 0x07, "cnode_depth": 32, "badge": 245}

def test_spec_sel4_untyped_retype_1525():
    s = spec_sel4_untyped_retype_1525()
    assert s["spec_id"] == 1525
