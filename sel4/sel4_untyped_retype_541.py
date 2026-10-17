"""Specification for seL4 untyped memory retyping capability constraint order 541."""

def spec_sel4_untyped_retype_541() -> dict:
    return {"system": "seL4", "spec_id": 541, "cap_rights": 0x07, "cnode_depth": 32, "badge": 29}

def test_spec_sel4_untyped_retype_541():
    s = spec_sel4_untyped_retype_541()
    assert s["spec_id"] == 541
