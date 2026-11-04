"""Specification for seL4 untyped memory retyping capability constraint order 1717."""

def spec_sel4_untyped_retype_1717() -> dict:
    return {"system": "seL4", "spec_id": 1717, "cap_rights": 0x07, "cnode_depth": 32, "badge": 181}

def test_spec_sel4_untyped_retype_1717():
    s = spec_sel4_untyped_retype_1717()
    assert s["spec_id"] == 1717
