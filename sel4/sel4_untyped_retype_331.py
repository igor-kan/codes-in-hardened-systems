"""Specification for seL4 untyped memory retyping capability constraint order 331."""

def spec_sel4_untyped_retype_331() -> dict:
    return {"system": "seL4", "spec_id": 331, "cap_rights": 0x07, "cnode_depth": 32, "badge": 75}

def test_spec_sel4_untyped_retype_331():
    s = spec_sel4_untyped_retype_331()
    assert s["spec_id"] == 331
