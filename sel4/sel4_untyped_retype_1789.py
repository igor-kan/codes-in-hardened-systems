"""Specification for seL4 untyped memory retyping capability constraint order 1789."""

def spec_sel4_untyped_retype_1789() -> dict:
    return {"system": "seL4", "spec_id": 1789, "cap_rights": 0x07, "cnode_depth": 32, "badge": 253}

def test_spec_sel4_untyped_retype_1789():
    s = spec_sel4_untyped_retype_1789()
    assert s["spec_id"] == 1789
