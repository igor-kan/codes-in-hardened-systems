"""Specification for seL4 untyped memory retyping capability constraint order 1321."""

def spec_sel4_untyped_retype_1321() -> dict:
    return {"system": "seL4", "spec_id": 1321, "cap_rights": 0x07, "cnode_depth": 32, "badge": 41}

def test_spec_sel4_untyped_retype_1321():
    s = spec_sel4_untyped_retype_1321()
    assert s["spec_id"] == 1321
