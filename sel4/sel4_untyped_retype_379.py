"""Specification for seL4 untyped memory retyping capability constraint order 379."""

def spec_sel4_untyped_retype_379() -> dict:
    return {"system": "seL4", "spec_id": 379, "cap_rights": 0x07, "cnode_depth": 32, "badge": 123}

def test_spec_sel4_untyped_retype_379():
    s = spec_sel4_untyped_retype_379()
    assert s["spec_id"] == 379
