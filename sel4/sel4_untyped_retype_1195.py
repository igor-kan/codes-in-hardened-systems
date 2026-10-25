"""Specification for seL4 untyped memory retyping capability constraint order 1195."""

def spec_sel4_untyped_retype_1195() -> dict:
    return {"system": "seL4", "spec_id": 1195, "cap_rights": 0x07, "cnode_depth": 32, "badge": 171}

def test_spec_sel4_untyped_retype_1195():
    s = spec_sel4_untyped_retype_1195()
    assert s["spec_id"] == 1195
