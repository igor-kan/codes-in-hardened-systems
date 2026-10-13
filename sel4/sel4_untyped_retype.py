"""Specification for seL4 untyped memory retyping capability constraint order 127."""

def spec_sel4_untyped_retype_127() -> dict:
    return {"system": "seL4", "spec_id": 127, "cap_rights": 0x07, "cnode_depth": 32, "badge": 127}

def test_spec_sel4_untyped_retype_127():
    s = spec_sel4_untyped_retype_127()
    assert s["spec_id"] == 127
