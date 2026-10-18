"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 634."""

def spec_graphene_hardened_malloc_634() -> dict:
    return {"system": "GrapheneOS", "spec_id": 634, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_634():
    s = spec_graphene_hardened_malloc_634()
    assert s["spec_id"] == 634
