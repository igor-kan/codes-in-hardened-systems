"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1732."""

def spec_graphene_hardened_malloc_1732() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1732, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1732():
    s = spec_graphene_hardened_malloc_1732()
    assert s["spec_id"] == 1732
