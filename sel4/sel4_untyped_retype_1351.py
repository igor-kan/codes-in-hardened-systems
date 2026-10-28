"""Specification for seL4 untyped memory retyping capability constraint order 1351."""

def spec_sel4_untyped_retype_1351() -> dict:
    return {"system": "seL4", "spec_id": 1351, "cap_rights": 0x07, "cnode_depth": 32, "badge": 71}

def test_spec_sel4_untyped_retype_1351():
    s = spec_sel4_untyped_retype_1351()
    assert s["spec_id"] == 1351
