"""Specification for seL4 untyped memory retyping capability constraint order 1711."""

def spec_sel4_untyped_retype_1711() -> dict:
    return {"system": "seL4", "spec_id": 1711, "cap_rights": 0x07, "cnode_depth": 32, "badge": 175}

def test_spec_sel4_untyped_retype_1711():
    s = spec_sel4_untyped_retype_1711()
    assert s["spec_id"] == 1711
