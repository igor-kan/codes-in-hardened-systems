"""Specification for seL4 untyped memory retyping capability constraint order 67."""

def spec_sel4_untyped_retype_67() -> dict:
    return {"system": "seL4", "spec_id": 67, "cap_rights": 0x07, "cnode_depth": 32, "badge": 67}

def test_spec_sel4_untyped_retype_67():
    s = spec_sel4_untyped_retype_67()
    assert s["spec_id"] == 67
