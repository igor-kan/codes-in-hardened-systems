"""Specification for seL4 untyped memory retyping capability constraint order 1567."""

def spec_sel4_untyped_retype_1567() -> dict:
    return {"system": "seL4", "spec_id": 1567, "cap_rights": 0x07, "cnode_depth": 32, "badge": 31}

def test_spec_sel4_untyped_retype_1567():
    s = spec_sel4_untyped_retype_1567()
    assert s["spec_id"] == 1567
