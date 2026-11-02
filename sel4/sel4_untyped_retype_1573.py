"""Specification for seL4 untyped memory retyping capability constraint order 1573."""

def spec_sel4_untyped_retype_1573() -> dict:
    return {"system": "seL4", "spec_id": 1573, "cap_rights": 0x07, "cnode_depth": 32, "badge": 37}

def test_spec_sel4_untyped_retype_1573():
    s = spec_sel4_untyped_retype_1573()
    assert s["spec_id"] == 1573
