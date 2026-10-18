"""Specification for seL4 untyped memory retyping capability constraint order 631."""

def spec_sel4_untyped_retype_631() -> dict:
    return {"system": "seL4", "spec_id": 631, "cap_rights": 0x07, "cnode_depth": 32, "badge": 119}

def test_spec_sel4_untyped_retype_631():
    s = spec_sel4_untyped_retype_631()
    assert s["spec_id"] == 631
