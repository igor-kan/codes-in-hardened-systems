"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1228."""

def spec_graphene_hardened_malloc_1228() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1228, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1228():
    s = spec_graphene_hardened_malloc_1228()
    assert s["spec_id"] == 1228
