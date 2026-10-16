"""Specification for seL4 untyped memory retyping capability constraint order 433."""

def spec_sel4_untyped_retype_433() -> dict:
    return {"system": "seL4", "spec_id": 433, "cap_rights": 0x07, "cnode_depth": 32, "badge": 177}

def test_spec_sel4_untyped_retype_433():
    s = spec_sel4_untyped_retype_433()
    assert s["spec_id"] == 433
