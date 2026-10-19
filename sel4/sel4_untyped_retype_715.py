"""Specification for seL4 untyped memory retyping capability constraint order 715."""

def spec_sel4_untyped_retype_715() -> dict:
    return {"system": "seL4", "spec_id": 715, "cap_rights": 0x07, "cnode_depth": 32, "badge": 203}

def test_spec_sel4_untyped_retype_715():
    s = spec_sel4_untyped_retype_715()
    assert s["spec_id"] == 715
