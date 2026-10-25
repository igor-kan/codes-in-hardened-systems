"""Specification for seL4 untyped memory retyping capability constraint order 1141."""

def spec_sel4_untyped_retype_1141() -> dict:
    return {"system": "seL4", "spec_id": 1141, "cap_rights": 0x07, "cnode_depth": 32, "badge": 117}

def test_spec_sel4_untyped_retype_1141():
    s = spec_sel4_untyped_retype_1141()
    assert s["spec_id"] == 1141
