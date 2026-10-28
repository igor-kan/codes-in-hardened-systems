"""Specification for seL4 untyped memory retyping capability constraint order 1369."""

def spec_sel4_untyped_retype_1369() -> dict:
    return {"system": "seL4", "spec_id": 1369, "cap_rights": 0x07, "cnode_depth": 32, "badge": 89}

def test_spec_sel4_untyped_retype_1369():
    s = spec_sel4_untyped_retype_1369()
    assert s["spec_id"] == 1369
