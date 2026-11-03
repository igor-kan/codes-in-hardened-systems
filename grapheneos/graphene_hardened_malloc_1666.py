"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1666."""

def spec_graphene_hardened_malloc_1666() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1666, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1666():
    s = spec_graphene_hardened_malloc_1666()
    assert s["spec_id"] == 1666
