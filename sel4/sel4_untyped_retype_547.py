"""Specification for seL4 untyped memory retyping capability constraint order 547."""

def spec_sel4_untyped_retype_547() -> dict:
    return {"system": "seL4", "spec_id": 547, "cap_rights": 0x07, "cnode_depth": 32, "badge": 35}

def test_spec_sel4_untyped_retype_547():
    s = spec_sel4_untyped_retype_547()
    assert s["spec_id"] == 547
