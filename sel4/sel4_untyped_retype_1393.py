"""Specification for seL4 untyped memory retyping capability constraint order 1393."""

def spec_sel4_untyped_retype_1393() -> dict:
    return {"system": "seL4", "spec_id": 1393, "cap_rights": 0x07, "cnode_depth": 32, "badge": 113}

def test_spec_sel4_untyped_retype_1393():
    s = spec_sel4_untyped_retype_1393()
    assert s["spec_id"] == 1393
