"""Specification for seL4 untyped memory retyping capability constraint order 1465."""

def spec_sel4_untyped_retype_1465() -> dict:
    return {"system": "seL4", "spec_id": 1465, "cap_rights": 0x07, "cnode_depth": 32, "badge": 185}

def test_spec_sel4_untyped_retype_1465():
    s = spec_sel4_untyped_retype_1465()
    assert s["spec_id"] == 1465
