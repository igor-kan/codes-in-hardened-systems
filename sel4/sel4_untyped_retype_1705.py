"""Specification for seL4 untyped memory retyping capability constraint order 1705."""

def spec_sel4_untyped_retype_1705() -> dict:
    return {"system": "seL4", "spec_id": 1705, "cap_rights": 0x07, "cnode_depth": 32, "badge": 169}

def test_spec_sel4_untyped_retype_1705():
    s = spec_sel4_untyped_retype_1705()
    assert s["spec_id"] == 1705
