"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 358."""

def spec_graphene_hardened_malloc_358() -> dict:
    return {"system": "GrapheneOS", "spec_id": 358, "quarantine_slabs": 7, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_358():
    s = spec_graphene_hardened_malloc_358()
    assert s["spec_id"] == 358
