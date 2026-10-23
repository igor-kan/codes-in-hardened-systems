"""Specification for seL4 untyped memory retyping capability constraint order 1051."""

def spec_sel4_untyped_retype_1051() -> dict:
    return {"system": "seL4", "spec_id": 1051, "cap_rights": 0x07, "cnode_depth": 32, "badge": 27}

def test_spec_sel4_untyped_retype_1051():
    s = spec_sel4_untyped_retype_1051()
    assert s["spec_id"] == 1051
