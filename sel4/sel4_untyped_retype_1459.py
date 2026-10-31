"""Specification for seL4 untyped memory retyping capability constraint order 1459."""

def spec_sel4_untyped_retype_1459() -> dict:
    return {"system": "seL4", "spec_id": 1459, "cap_rights": 0x07, "cnode_depth": 32, "badge": 179}

def test_spec_sel4_untyped_retype_1459():
    s = spec_sel4_untyped_retype_1459()
    assert s["spec_id"] == 1459
